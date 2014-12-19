{-# LANGUAGE BangPatterns, FlexibleInstances, GADTs, OverloadedStrings,
    Rank2Types, RecordWildCards, TypeFamilies, TypeSynonymInstances #-}
{-# OPTIONS_GHC -fno-warn-orphans #-}
-- |
-- Module      :  Data.Attoparsec.Text.Internal
-- Copyright   :  Bryan O'Sullivan 2007-2014
-- License     :  BSD3
--
-- Maintainer  :  bos@serpentine.com
-- Stability   :  experimental
-- Portability :  unknown
--
-- Simple, efficient parser combinators for 'Text' strings, loosely
-- based on the Parsec library.

module Data.Attoparsec.Text.Internal
    (
    -- * Parser types
      Parser
    , Result

    -- * Running parsers
    , parse
    , parseOnly

    -- * Combinators
    , module Data.Attoparsec.Combinator

    -- * Parsing individual characters
    , satisfy
    , satisfyWith
    , anyChar
    , skip
    , char
    , notChar

    -- ** Lookahead
    , peekChar
    , peekChar'

    -- ** Character classes
    , inClass
    , notInClass

    -- * Efficient string handling
    , skipWhile
    , string
    , stringCI
    , asciiCI
    , take
    , scan
    , runScanner
    , takeWhile
    , takeWhile1
    , takeTill

    -- ** Consume all remaining input
    , takeText
    , takeLazyText

    -- * Utilities
    , endOfLine
    , endOfInput
    , match
    , atEnd
    ) where

import Control.Applicative ((<|>), (<$>))
import Control.Monad (when)
import Data.Attoparsec.Combinator ((<?>))
import Data.Attoparsec.Internal
import Data.Attoparsec.Internal.Types hiding (Parser, Failure, Success)
import qualified Data.Attoparsec.Text.Buffer as Buf
import Data.Attoparsec.Text.Buffer (Buffer, buffer)
import Data.Char (chr, ord)
import Data.String (IsString(..))
import Data.Text.Internal (Text(..))
import Prelude hiding (getChar, succ, take, takeWhile)
import qualified Data.Attoparsec.Internal.Types as T
import qualified Data.Attoparsec.Text.FastSet as Set
import qualified Data.Text as T
import qualified Data.Text.Lazy as L
import qualified Data.Text.Unsafe as T

type Parser = T.Parser Text
type Result = IResult Text
type Failure r = T.Failure Text Buffer r
type Success a r = T.Success Text Buffer a r

instance (a ~ Text) => IsString (Parser a) where
    fromString = string . T.pack

-- | The parser @satisfy p@ succeeds for any character for which the
-- predicate @p@ returns 'True'. Returns the character that is
-- actually parsed.
--
-- >digit = satisfy isDigit
-- >    where isDigit c = c >= '0' && c <= '9'
satisfy :: (Char -> Bool) -> Parser Char
satisfy p = do
  (k,c) <- ensure 1
  let !h = T.unsafeHead c
  if p h
    then advance k >> return h
    else fail "satisfy"
{-# INLINE satisfy #-}

-- | The parser @skip p@ succeeds for any character for which the
-- predicate @p@ returns 'True'.
--
-- >skipDigit = skip isDigit
-- >    where isDigit c = c >= '0' && c <= '9'
skip :: (Char -> Bool) -> Parser ()
skip p = do
  (k,s) <- ensure 1
  if p (T.unsafeHead s)
    then advance k
    else fail "skip"

-- | The parser @satisfyWith f p@ transforms a character, and succeeds
-- if the predicate @p@ returns 'True' on the transformed value. The
-- parser returns the transformed character that was parsed.
satisfyWith :: (Char -> a) -> (a -> Bool) -> Parser a
satisfyWith f p = do
  (k,s) <- ensure 1
  let c = f $! T.unsafeHead s
  if p c
    then advance k >> return c
    else fail "satisfyWith"
{-# INLINE satisfyWith #-}

-- | Consume @n@ characters of input, but succeed only if the
-- predicate returns 'True'.
takeWith :: Int -> (Text -> Bool) -> Parser Text
takeWith n p = do
  (k,s) <- ensure n
  if p s
    then advance k >> return s
    else fail "takeWith"

-- | Consume exactly @n@ characters of input.
take :: Int -> Parser Text
take n = takeWith (max n 0) (const True)
{-# INLINE take #-}

-- | @string s@ parses a sequence of characters that identically match
-- @s@. Returns the parsed string (i.e. @s@).  This parser consumes no
-- input if it fails (even if a partial match).
--
-- /Note/: The behaviour of this parser is different to that of the
-- similarly-named parser in Parsec, as this one is all-or-nothing.
-- To illustrate the difference, the following parser will fail under
-- Parsec given an input of @\"for\"@:
--
-- >string "foo" <|> string "for"
--
-- The reason for its failure is that the first branch is a
-- partial match, and will consume the letters @\'f\'@ and @\'o\'@
-- before failing.  In attoparsec, the above parser will /succeed/ on
-- that input, because the failed first branch will consume nothing.
string :: Text -> Parser Text
string s = takeWith (T.length s) (==s)
{-# INLINE string #-}

-- | Satisfy a literal string, ignoring case.
--
-- Note: this function is currently quite inefficient. Unicode case
-- folding can change the length of a string (\"&#223;\" becomes
-- "ss"), which makes a simple, efficient implementation tricky.  We
-- have (for now) chosen simplicity over efficiency.
stringCI :: Text -> Parser Text
stringCI s = go 0
  where
    go !n
      | n > T.length fs = fail "stringCI"
      | otherwise = do
      (k,t) <- ensure n
      if T.toCaseFold t == fs
        then advance k >> return t
        else go (n+1)
    fs = T.toCaseFold s
{-# INLINE stringCI #-}
{-# DEPRECATED stringCI "this is very inefficient, use asciiCI instead" #-}

-- | Satisfy a literal string, ignoring case for characters in the ASCII range.
asciiCI :: Text -> Parser Text
asciiCI input = do
  (k,t) <- ensure n
  if asciiToLower t == s
    then advance k >> return t
    else fail "asciiCI"
  where
    n = T.length input
    s = asciiToLower input

    -- convert letters in the ASCII range to lower-case
    asciiToLower = T.map f
      where
        offset = ord 'a' - ord 'A'
        f c | 'A' <= c && c <= 'Z' = chr (ord c + offset)
            | otherwise            = c
{-# INLINE asciiCI #-}

-- | Skip past input for as long as the predicate returns 'True'.
skipWhile :: (Char -> Bool) -> Parser ()
skipWhile p = go
 where
  go = do
    t <- T.takeWhile p <$> get
    continue <- inputSpansChunks (size t)
    when continue go
{-# INLINE skipWhile #-}

-- | Consume input as long as the predicate returns 'False'
-- (i.e. until it returns 'True'), and return the consumed input.
--
-- This parser does not fail.  It will return an empty string if the
-- predicate returns 'True' on the first character of input.
--
-- /Note/: Because this parser does not fail, do not use it with
-- combinators such as 'Control.Applicative.many', because such
-- parsers loop until a failure occurs.  Careless use will thus result
-- in an infinite loop.
takeTill :: (Char -> Bool) -> Parser Text
takeTill p = takeWhile (not . p)
{-# INLINE takeTill #-}

-- | Consume input as long as the predicate returns 'True', and return
-- the consumed input.
--
-- This parser does not fail.  It will return an empty string if the
-- predicate returns 'False' on the first character of input.
--
-- /Note/: Because this parser does not fail, do not use it with
-- combinators such as 'Control.Applicative.many', because such
-- parsers loop until a failure occurs.  Careless use will thus result
-- in an infinite loop.
takeWhile :: (Char -> Bool) -> Parser Text
takeWhile p = (T.concat . reverse) `fmap` go []
 where
  go acc = do
    h <- T.takeWhile p <$> get
    continue <- inputSpansChunks (size h)
    if continue
      then go (h:acc)
      else return (h:acc)

takeRest :: Parser [Text]
takeRest = go []
 where
  go acc = do
    input <- wantInput
    if input
      then do
        s <- get
        advance (size s)
        go (s:acc)
      else return (reverse acc)

-- | Consume all remaining input and return it as a single string.
takeText :: Parser Text
takeText = T.concat `fmap` takeRest

-- | Consume all remaining input and return it as a single string.
takeLazyText :: Parser L.Text
takeLazyText = L.fromChunks `fmap` takeRest

data Scan s = Continue s
            | Finished {-# UNPACK #-} !Int Text

scan_ :: (s -> [Text] -> Parser r) -> s -> (s -> Char -> Maybe s) -> Parser r
scan_ f s0 p = go [] s0
 where
  scanner s !n t =
    case T.uncons t of
      Just (c,t') -> case p s c of
                       Just s' -> scanner s' (n+1) t'
                       Nothing -> Finished n t
      Nothing     -> Continue s
  go acc s = do
    input <- get
    case scanner s 0 input of
      Continue s'  -> do continue <- inputSpansChunks (size input)
                         if continue
                           then go (input : acc) s'
                           else f s' (input : acc)
      Finished n t -> do advance (size input - size t)
                         f s (T.take n input : acc)
{-# INLINE scan_ #-}

-- | A stateful scanner.  The predicate consumes and transforms a
-- state argument, and each transformed state is passed to successive
-- invocations of the predicate on each character of the input until one
-- returns 'Nothing' or the input ends.
--
-- This parser does not fail.  It will return an empty string if the
-- predicate returns 'Nothing' on the first character of input.
--
-- /Note/: Because this parser does not fail, do not use it with
-- combinators such as 'Control.Applicative.many', because such
-- parsers loop until a failure occurs.  Careless use will thus result
-- in an infinite loop.
scan :: s -> (s -> Char -> Maybe s) -> Parser Text
scan = scan_ $ \_ chunks ->
  case chunks of
    [x] -> return x
    xs  -> return . T.concat . reverse $ xs
{-# INLINE scan #-}

-- | Like 'scan', but generalized to return the final state of the
-- scanner.
runScanner :: s -> (s -> Char -> Maybe s) -> Parser (Text, s)
runScanner = scan_ $ \s xs -> return (T.concat (reverse xs), s)
{-# INLINE runScanner #-}

-- | Consume input as long as the predicate returns 'True', and return
-- the consumed input.
--
-- This parser requires the predicate to succeed on at least one
-- character of input: it will fail if the predicate never returns
-- 'True' or if there is no input left.
takeWhile1 :: (Char -> Bool) -> Parser Text
takeWhile1 p = do
  (`when` demandInput) =<< endOfChunk
  h <- T.takeWhile p <$> get
  let size' = size h
  when (size' == 0) $ fail "takeWhile1"
  advance size'
  eoc <- endOfChunk
  if eoc
    then (h<>) `fmap` takeWhile p
    else return h

-- | Match any character in a set.
--
-- >vowel = inClass "aeiou"
--
-- Range notation is supported.
--
-- >halfAlphabet = inClass "a-nA-N"
--
-- To add a literal @\'-\'@ to a set, place it at the beginning or end
-- of the string.
inClass :: String -> Char -> Bool
inClass s = (`Set.member` mySet)
    where mySet = Set.charClass s
          {-# NOINLINE mySet #-}
{-# INLINE inClass #-}

-- | Match any character not in a set.
notInClass :: String -> Char -> Bool
notInClass s = not . inClass s
{-# INLINE notInClass #-}

-- | Match any character.
anyChar :: Parser Char
anyChar = satisfy $ const True
{-# INLINE anyChar #-}

-- | Match a specific character.
char :: Char -> Parser Char
char c = satisfy (== c) <?> show c
{-# INLINE char #-}

-- | Match any character except the given one.
notChar :: Char -> Parser Char
notChar c = satisfy (/= c) <?> "not " ++ show c
{-# INLINE notChar #-}

-- | Match any character, to perform lookahead. Returns 'Nothing' if
-- end of input has been reached. Does not consume any input.
--
-- /Note/: Because this parser does not fail, do not use it with
-- combinators such as 'Control.Applicative.many', because such
-- parsers loop until a failure occurs.  Careless use will thus result
-- in an infinite loop.
peekChar :: Parser (Maybe Char)
peekChar = T.Parser $ \t pos more _lose succ ->
  case () of
    _| pos < lengthOf t ->
       let T.Iter !c _ = Buf.iter t (fromPos pos)
       in succ t pos more (Just c)
     | more == Complete ->
       succ t pos more Nothing
     | otherwise ->
       let succ' t' pos' more' =
             let T.Iter !c _ = Buf.iter t' (fromPos pos')
             in succ t' pos' more' (Just c)
           lose' t' pos' more' = succ t' pos' more' Nothing
       in prompt t pos more lose' succ'
{-# INLINE peekChar #-}

-- | Match any character, to perform lookahead.  Does not consume any
-- input, but will fail if end of input has been reached.
peekChar' :: Parser Char
peekChar' = do
  (_,s) <- ensure 1
  return $! T.unsafeHead s
{-# INLINE peekChar' #-}

-- | Match either a single newline character @\'\\n\'@, or a carriage
-- return followed by a newline character @\"\\r\\n\"@.
endOfLine :: Parser ()
endOfLine = (char '\n' >> return ()) <|> (string "\r\n" >> return ())

-- | Terminal failure continuation.
failK :: Failure a
failK t (Pos pos) _more stack msg = Fail (Buf.dropWord16 pos t) stack msg
{-# INLINE failK #-}

-- | Terminal success continuation.
successK :: Success a a
successK t (Pos pos) _more a = Done (Buf.dropWord16 pos t) a
{-# INLINE successK #-}

-- | Run a parser.
parse :: Parser a -> Text -> Result a
parse m s = runParser m (buffer s) 0 Incomplete failK successK
{-# INLINE parse #-}

-- | Run a parser that cannot be resupplied via a 'Partial' result.
--
-- This function does not force a parser to consume all of its input.
-- Instead, any residual input will be discarded.  To force a parser
-- to consume all of its input, use something like this:
--
-- @
--'parseOnly' (myParser 'Control.Applicative.<*' 'endOfInput')
-- @
parseOnly :: Parser a -> Text -> Either String a
parseOnly m s = case runParser m (buffer s) 0 Complete failK successK of
                  Fail _ _ err -> Left err
                  Done _ a     -> Right a
                  _            -> error "parseOnly: impossible error!"
{-# INLINE parseOnly #-}

get :: Parser Text
get = T.Parser $ \t pos more _lose succ ->
  succ t pos more (Buf.dropWord16 (fromPos pos) t)
{-# INLINE get #-}

endOfChunk :: Parser Bool
endOfChunk = T.Parser $ \t pos more _lose succ ->
  succ t pos more (pos == lengthOf t)
{-# INLINE endOfChunk #-}

inputSpansChunks :: Pos -> Parser Bool
inputSpansChunks i = T.Parser $ \t pos_ more _lose succ ->
  let pos = pos_ + i
  in if pos < lengthOf t || more == Complete
     then succ t pos more False
     else let lose' t' pos' more' = succ t' pos' more' False
              succ' t' pos' more' = succ t' pos' more' True
          in prompt t pos more lose' succ'
{-# INLINE inputSpansChunks #-}

advance :: Pos -> Parser ()
advance n = T.Parser $ \t pos more _lose succ -> succ t (pos+n) more ()
{-# INLINE advance #-}

ensureSuspended :: Int -> Buffer -> Pos -> More
                -> Failure r -> Success (Pos, Text) r
                -> Result r
ensureSuspended n t pos more lose succ =
    runParser (demandInput >> go) t pos more lose succ
  where go = T.Parser $ \t' pos' more' lose' succ' ->
          case lengthAtLeast pos' n t' of
            Just n' -> succ' t' pos' more' (n', substring pos n' t')
            Nothing -> runParser (demandInput >> go) t' pos' more' lose' succ'

-- | If at least @n@ elements of input are available, return the
-- current input, otherwise fail.
ensure :: Int -> Parser (Pos, Text)
ensure n = T.Parser $ \t pos more lose succ ->
    case lengthAtLeast pos n t of
      Just n' -> succ t pos more (n', substring pos n' t)
      -- The uncommon case is kept out-of-line to reduce code size:
      Nothing -> ensureSuspended n t pos more lose succ
-- Non-recursive so the bounds check can be inlined:
{-# INLINE ensure #-}

-- | Return both the result of a parse and the portion of the input
-- that was consumed while it was being parsed.
match :: Parser a -> Parser (Text, a)
match p = T.Parser $ \t pos more lose succ ->
  let succ' t' pos' more' a = succ t' pos' more'
                              (substring pos (pos'-pos) t', a)
  in runParser p t pos more lose succ'

lengthAtLeast :: Pos -> Int -> Buffer -> Maybe Pos
lengthAtLeast pos n t = go 0 (fromPos pos)
  where go i !p
          | i == n    = Just (Pos p - pos)
          | p == len  = Nothing
          | otherwise = go (i+1) (p + Buf.iter_ t p)
        Pos len = lengthOf t
{-# INLINE lengthAtLeast #-}

substring :: Pos -> Pos -> Buffer -> Text
substring (Pos pos) (Pos n) = Buf.substring pos n
{-# INLINE substring #-}

lengthOf :: Buffer -> Pos
lengthOf = Pos . Buf.length

size :: Text -> Pos
size (Text _ _ l) = Pos l
=======
{-# LANGUAGE CPP #-}
{-# LANGUAGE DoAndIfThenElse #-}
{-# LANGUAGE FlexibleContexts #-}
{-# LANGUAGE FlexibleInstances #-}
{-# LANGUAGE FunctionalDependencies #-}
{-# LANGUAGE MultiParamTypeClasses #-}
{-# LANGUAGE OverlappingInstances #-}
{-# LANGUAGE PackageImports #-}
{-# LANGUAGE RankNTypes #-}
{-# LANGUAGE TypeFamilies #-}
{-# LANGUAGE TypeOperators #-}
{-# LANGUAGE UndecidableInstances #-}

{-# OPTIONS_HADDOCK hide #-}

-- | The internal working of ADPfusion. All combinator applications are turned
-- into efficient code during compile time.
--
-- If you have a data structure to be used as an argument in a combinator
-- chain, derive an instance 'ExtractValue', 'StreamGen', and 'PreStreamGen'.
--
-- NOTE: If this doesn't happen, it is a possible bug, or GHC changed its
-- optimizer (like with GHC 7.2 -> 7.4).
--
-- TODO If possible, instance generation will be using the Generics system in
-- the future.

module ADP.Fusion.Monadic.Internal where

import Control.Monad.Primitive
import Control.Monad.ST
import Data.List (intersperse)
import Data.Primitive.Types
import Data.Vector.Fusion.Stream.Size
import Data.Array.Repa.Index
import Data.Array.Repa.Shape
import qualified Data.Vector.Fusion.Stream.Monadic as S
import qualified Data.Vector.Unboxed as VU
import Text.Printf

import qualified Data.PrimitiveArray as PA
--import qualified Data.PrimitiveArray.Zero.Unboxed as ZU
import qualified Data.PrimitiveArray.Zero as Z


{-
-- * StreamGen

-- | Generate stream from either one (DIM2 -> m cnt) or some combination of
-- terminals derived from uses of nextTo.

class Monad m => StreamGen m t r | t -> r where
  streamGen :: t -> DIM2 -> S.Stream m r

#define mkStreamGen(cnt) \
instance (Monad m, ExtractValue m (cnt), Asor (cnt) ~ k, Elem (cnt) ~ elm) \
=> StreamGen m (cnt) (DIM2,Z:.k,Z:.elm) where { \
  {-# INLINE streamGen #-} \
;  streamGen x ij = extractStreamLast x $ preStreamGen x ij }

mkStreamGen(DIM2 -> Scalar elm)
mkStreamGen(DIM2 -> ScalarM elm)
mkStreamGen(DIM2 -> Vect elm)
mkStreamGen(DIM2 -> VectM elm)
mkStreamGen(ZU.MArr0 s sh elm)
mkStreamGen(ZU.Arr0 sh elm)

mkStreamGen(Z.MArr0 s sh (VU.Vector elm))
mkStreamGen(Z.Arr0 sh (VU.Vector elm))

-- | two or more elements combined by NextTo (~~~), "xs" as anything, "ys" is
-- monadic.

instance
  ( Monad m
  , ExtractValue m ys, Asor ys ~ cY, Elem ys ~ eY
  , PreStreamGen m (Box mk step xs ys) (idx:.Int,adx:.cX,arg:.eX)
  , Idx2 _idx ~ idx
  ) => StreamGen m (Box mk step xs ys) (idx:.Int,adx:.cX:.cY,arg:.eX:.eY) where
  streamGen (Box mk step xs ys) ij
    = extractStreamLast ys
    $ preStreamGen (Box mk step xs ys) ij
  {-# INLINE streamGen #-}



-- * PreStreamGen

-- | Required by most 'StreamGen' instances just before 'extractStreamLast' is
-- called.

class Monad m => PreStreamGen m s q | s -> q where
  preStreamGen
    :: s      -- ^ the composite type of the arguments
    -> DIM2   -- ^ the original index @(Z:.i:.j)@
    -> S.Stream m q -- ^ the stream we get out of it

-- | Creates the single step on the left which does nothing more then set the
-- outermost indices to (i,j). This does not use the alpha/omega's

singlePreStreamGen ij = S.unfoldr step ij where
  {-# INLINE step #-}
  step (Z:.i:.j)
    | i<=j      = Just ((Z:.i:.j ,Z,Z), Z:.j+1:.j)
    | otherwise = Nothing
{-# INLINE singlePreStreamGen #-}

#define mkPreStreamGen(s) \
instance (Monad m) => PreStreamGen m (s) (DIM2,Z,Z) where { \
  {-# INLINE preStreamGen #-} \
;  preStreamGen _ = singlePreStreamGen }

mkPreStreamGen(DIM2 -> Scalar elm)
mkPreStreamGen(DIM2 -> ScalarM elm)
mkPreStreamGen(DIM2 -> Vect elm)
mkPreStreamGen(DIM2 -> VectM elm)
mkPreStreamGen(ZU.MArr0 s sh elm)
mkPreStreamGen(ZU.Arr0 sh elm)

mkPreStreamGen(Z.MArr0 s sh (VU.Vector elm))
mkPreStreamGen(Z.Arr0 sh (VU.Vector elm))

-- | the first two arguments from nextTo, monadic xs.

instance ( Monad m
         , ExtractValue m xs, Asor xs ~ cX, Elem xs ~ eX
         , PreStreamGen m xs xsStack
         , (idxX,adxX,argX) ~ xsStack
         , (z0:.Int:.Int) ~ idxX
         , ((idxX,adxX,argX) -> m (idxX:.Int,adxX,argX)) ~ mk
         , ((idxX:.Int,adxX,argX) -> m (S.Step (idxX:.Int,adxX,argX) (idxX:.Int,adxX,argX))) ~ step
         ) => PreStreamGen m (Box mk step xs ys) (idxX:.Int,adxX:.cX,argX:.eX) where
  preStreamGen (Box mk step xs ys) ij
    = extractStream xs
    $ S.flatten mk step Unknown
    $ preStreamGen xs ij
  {-# INLINE preStreamGen #-}

-- | Pre-stream generation for deeply nested boxes.

instance
  ( Monad m
  , ExtractValue m xs, Asor xs ~ cX, Elem xs ~ eX
  , PreStreamGen m (Box box2 box3 box1 xs) xsStack
  , (idxX,adxX,argX) ~ xsStack
  , (z0:.Int:.Int) ~ idxX
  , ((idxX,adxX,argX) -> m (idxX:.Int,adxX,argX)) ~ mk
  , ((idxX:.Int,adxX,argX) -> m (S.Step (idxX:.Int,adxX,argX) (idxX:.Int,adxX,argX))) ~ step
  ) => PreStreamGen m (Box mk step (Box box2 box3 box1 xs) ys) (idxX:.Int,adxX:.cX,argX:.eX) where
  preStreamGen (Box mk step box@(Box _ _ _ xs) ys) ij
    = extractStream xs
    $ S.flatten mk step Unknown
    $ preStreamGen box ij
  {-# INLINE preStreamGen #-}



-- * ExtractValue: extract values from data structures.

class (Monad m) => ExtractValue m cnt where
  type Asor cnt :: *
  type Elem cnt :: *
  extractValue  :: ()
                => cnt
                -> DIM2
                -> Asor cnt
                -> m (Elem cnt)
  extractStream :: ()
                => cnt
                -> S.Stream m (Idx3 z,astack,vstack)
                -> S.Stream m (Idx3 z,astack:.Asor cnt,vstack:.Elem cnt)
  extractStreamLast :: ()
                    => cnt
                    -> S.Stream m (Idx2 z,astack,vstack)
                    -> S.Stream m (Idx2 z,astack:.Asor cnt,vstack:.Elem cnt)

-- | Mutable arrays.

instance
  ( PrimMonad m
  , VU.Unbox elm
  , PrimState m ~ s
  , DIM2 ~ sh
  ) => ExtractValue m (ZU.MArr0 s sh elm) where
  type Asor (ZU.MArr0 s sh elm) = Z
  type Elem (ZU.MArr0 s sh elm) = elm
  extractValue cnt ij z = do
    x <- PA.readM cnt ij
    x `seq` return x
  extractStream cnt stream = S.mapM addElm stream where
    addElm (z:.k:.x:.l, astack, vstack) = do
      vadd <- PA.readM cnt (Z:.k:.x)
      vadd `seq` return (z:.k:.x:.l, astack:.Z, vstack :. vadd)
  extractStreamLast sngl stream = S.mapM addElm stream where
    addElm (z:.k:.x, astack, vstack) = do
      vadd <- PA.readM sngl (Z:.k:.x)
      vadd `seq` return (z:.k:.x, astack:.Z, vstack:.vadd)
  {-# INLINE extractValue #-}
  {-# INLINE extractStream #-}
  {-# INLINE extractStreamLast #-}

-- | Immutable arrays.

instance
  ( Monad m
  , VU.Unbox elm
  , DIM2 ~ sh
  ) => ExtractValue m (ZU.Arr0 sh elm) where
  type Asor (ZU.Arr0 sh elm) = Z
  type Elem (ZU.Arr0 sh elm) = elm
  extractValue cnt ij z = do
    let x = PA.index cnt ij
    x `seq` return x
  extractStream cnt stream = S.map addElm stream where
    addElm (z:.k:.x:.l, astack, vstack) = let vadd = PA.index cnt (Z:.k:.x) in
      vadd `seq` (z:.k:.x:.l, astack:.Z, vstack :. vadd)
  extractStreamLast cnt stream = S.map addElm stream where
    addElm (z:.k:.x, astack, vstack) = let vadd = PA.index cnt (Z:.k:.x) in
      vadd `seq` (z:.k:.x, astack:.Z, vstack:.vadd)
  {-# INLINE extractValue #-}
  {-# INLINE extractStream #-}
  {-# INLINE extractStreamLast #-}

-- | Function with 'Scalar' return value.

instance
  ( Monad m
  ) => ExtractValue m (DIM2 -> Scalar elm) where
  type Asor (DIM2 -> Scalar elm) = Z
  type Elem (DIM2 -> Scalar elm) = elm
  extractValue cnt ij z = do
    let Scalar x = cnt ij
    x `seq` return x
  extractStream cnt stream = S.map addElm stream where
    addElm (z:.k:.x:.l, astack, vstack) = let Scalar vadd = cnt (Z:.k:.x) in
      vadd `seq` (z:.k:.x:.l, astack:.Z, vstack :. vadd)
  extractStreamLast cnt stream = S.map addElm stream where
    addElm (z:.k:.x, astack, vstack) = let Scalar vadd = cnt (Z:.k:.x) in
      vadd `seq` (z:.k:.x, astack:.Z, vstack:.vadd)
  {-# INLINE extractValue #-}
  {-# INLINE extractStream #-}
  {-# INLINE extractStreamLast #-}

-- | Function with monadic 'Scalar' return value.

instance
  ( Monad m
  ) => ExtractValue m (DIM2 -> ScalarM (m elm)) where
  type Asor (DIM2 -> ScalarM (m elm)) = Z
  type Elem (DIM2 -> ScalarM (m elm)) = elm
  extractValue cnt ij z = do
    let ScalarM x' = cnt ij
    x <- x'
    x `seq` return x
  extractStream cnt stream = S.mapM addElm stream where
    addElm (z:.k:.x:.l, astack, vstack) = do
      let ScalarM vadd' = cnt (Z:.k:.x)
      vadd <- vadd'
      vadd `seq` return (z:.k:.x:.l, astack:.Z, vstack :. vadd)
  extractStreamLast cnt stream = S.mapM addElm stream where
    addElm (z:.k:.x, astack, vstack) = do
      let ScalarM vadd' = cnt (Z:.k:.x)
      vadd <- vadd'
      vadd `seq` return (z:.k:.x, astack:.Z, vstack:.vadd)
  {-# INLINE extractValue #-}
  {-# INLINE extractStream #-}
  {-# INLINE extractStreamLast #-}

-- | This instance is a bit crazy, since the accessor is the current stream
-- itself. No idea how efficient this is (need to squint at CORE), but I plan
-- to use it for backtracking only.
--
-- TODO Using this instance tends to break to optimizer ;-) -- don't use it
-- yet!

instance
  ( Monad m
  ) => ExtractValue m (DIM2 -> S.Stream m elm) where
  type Asor (DIM2 -> S.Stream m elm) = S.Stream m elm
  type Elem (DIM2 -> S.Stream m elm) = elm
  extractValue cnt ij z = error "this function is not well-defined for these streams"
  extractStream cnt stream = S.flatten mk step Unknown $ stream where
    mk (z:.k:.l:.j,as,vs) = do
      let strm = cnt (Z:.k:.l)
      return (z:.k:.l:.j,as:.strm,vs)
    step (idx,as:.strm,vs) = do
      isNull <- S.null strm
      if isNull
      then return $ S.Done
      else do hd <- S.head strm
              hd `seq` return $ S.Yield (idx,as:.strm,vs:.hd) (idx,as:.S.tail strm,vs)
  extractStreamLast cnt stream = S.flatten mk step Unknown $ stream where
    mk (z:.l:.j,as,vs) = do
      let strm = cnt (Z:.l:.j)
      return (z:.l:.j,as:.strm,vs)
    step (idx,as:.strm,vs) = do
      isNull <- S.null strm
      if isNull
      then return $ S.Done
      else do hd <- S.head strm
              hd `seq` return $ S.Yield (idx,as:.strm,vs:.hd) (idx,as:.S.tail strm,vs)
  {-# INLINE extractValue #-}
  {-# INLINE extractStream #-}
  {-# INLINE extractStreamLast #-}

-- | Instance of boxed array with vector-valued cells. We assume that we want
-- to store multiple results for each cell. If the intent is to store one
-- scalar result, use the 'Scalar' wrapper.

instance
  ( PrimMonad m
  , Prim elm
  , VU.Unbox elm
  , PrimState m ~ s
  , DIM2 ~ sh
  ) => ExtractValue m (Z.MArr0 s sh (VU.Vector elm)) where
  type Asor (Z.MArr0 s sh (VU.Vector elm)) = Int
  type Elem (Z.MArr0 s sh (VU.Vector elm)) = elm
  extractValue cnt ij z = do
    x <- PA.readM cnt ij
    let y = x `VU.unsafeIndex` z
    y `seq` return y
  extractStream cnt stream = S.flatten mk step Unknown $ stream where
    mk (idx,as,vs) = return (idx,as:.0,vs)
    step (z:.k:.l:.j,as:.a,vs) = do
      x <- PA.readM cnt (Z:.k:.l)
      case (x VU.!? a) of
        Just v  -> v `seq` return $ S.Yield (z:.k:.l:.j,as:.a,vs:.v) (z:.k:.l:.j,as:.(a+1),vs)
        Nothing -> return $ S.Done
  extractStreamLast cnt stream = S.flatten mk step Unknown $ stream where
    mk (idx,as,vs) = return (idx,as:.0,vs)
    step (z:.l:.j,as:.a,vs) = do
      x <- PA.readM cnt (Z:.l:.j)
      case (x VU.!? a) of
        Just v  -> v `seq` return $ S.Yield (z:.l:.j,as:.a,vs:.v) (z:.l:.j,as:.(a+1),vs)
        Nothing -> return $ S.Done
  {-# INLINE extractValue #-}
  {-# INLINE extractStream #-}
  {-# INLINE extractStreamLast #-}

-- | vector-based cells

instance
  ( Monad m
  , Prim elm
  , VU.Unbox elm
  , DIM2 ~ sh
  ) => ExtractValue m (Z.Arr0 sh (VU.Vector elm)) where
  type Asor (Z.Arr0 sh (VU.Vector elm)) = Int
  type Elem (Z.Arr0 sh (VU.Vector elm)) = elm
  extractValue cnt ij z = do
    let x = PA.index cnt ij
    let y = x `VU.unsafeIndex` z
    y `seq` return y
  extractStream cnt stream = S.flatten mk step Unknown $ stream where
    mk (idx,as,vs) = return (idx,as:.0,vs)
    step (z:.k:.l:.j,as:.a,vs) = do
      let x = PA.index cnt (Z:.k:.l)
      case (x VU.!? a) of
        Just v  -> v `seq` return $ S.Yield (z:.k:.l:.j,as:.a,vs:.v) (z:.k:.l:.j,as:.(a+1),vs)
        Nothing -> return $ S.Done
  extractStreamLast cnt stream = S.flatten mk step Unknown $ stream where
    mk (idx,as,vs) = return (idx,as:.0,vs)
    step (z:.l:.j,as:.a,vs) = do
      let x = PA.index cnt (Z:.l:.j)
      case (x VU.!? a) of
        Just v  -> v `seq` return $ S.Yield (z:.l:.j,as:.a,vs:.v) (z:.l:.j,as:.(a+1),vs)
        Nothing -> return $ S.Done
  {-# INLINE extractValue #-}
  {-# INLINE extractStream #-}
  {-# INLINE extractStreamLast #-}
-}

-- * Apply function 'f' with arguments on a stack 'x'.
--
-- NOTE look at the end of this part for mkApply before writing instances by
-- hand... ;-)

class Apply x where
  type Fun x :: *
  apply :: Fun x -> x

instance Apply (Z:.a -> res) where
  type Fun (Z:.a -> res) = a -> res
  apply fun (Z:.a) = fun a
  {-# INLINE apply #-}

instance Apply (Z:.a:.b -> res) where
  type Fun (Z:.a:.b -> res) = a->b -> res
  apply fun (Z:.a:.b) = fun a b
  {-# INLINE apply #-}

instance Apply (Z:.a:.b:.c -> res) where
  type Fun (Z:.a:.b:.c -> res) = a->b->c -> res
  apply fun (Z:.a:.b:.c) = fun a b c
  {-# INLINE apply #-}

instance Apply (Z:.a:.b:.c:.d -> res) where
  type Fun (Z:.a:.b:.c:.d -> res) = a->b->c->d -> res
  apply fun (Z:.a:.b:.c:.d) = fun a b c d
  {-# INLINE apply #-}

instance Apply (Z:.a:.b:.c:.d:.e -> res) where
  type Fun (Z:.a:.b:.c:.d:.e -> res) = a->b->c->d->e -> res
  apply fun (Z:.a:.b:.c:.d:.e) = fun a b c d e
  {-# INLINE apply #-}

instance Apply (Z:.a:.b:.c:.d:.e:.f -> res) where
  type Fun (Z:.a:.b:.c:.d:.e:.f -> res) = a->b->c->d->e->f -> res
  apply fun (Z:.a:.b:.c:.d:.e:.f) = fun a b c d e f
  {-# INLINE apply #-}

instance Apply (Z:.a:.b:.c:.d:.e:.f:.g -> res) where
  type Fun (Z:.a:.b:.c:.d:.e:.f:.g -> res) = a->b->c->d->e->f->g -> res
  apply fun (Z:.a:.b:.c:.d:.e:.f:.g) = fun a b c d e f g
  {-# INLINE apply #-}

instance Apply (Z:.a:.b:.c:.d:.e:.f:.g:.h -> res) where
  type Fun (Z:.a:.b:.c:.d:.e:.f:.g:.h -> res) = a->b->c->d->e->f->g->h -> res
  apply fun (Z:.a:.b:.c:.d:.e:.f:.g:.h) = fun a b c d e f g h
  {-# INLINE apply #-}

instance Apply (Z:.a:.b:.c:.d:.e:.f:.g:.h:.i -> res) where
  type Fun (Z:.a:.b:.c:.d:.e:.f:.g:.h:.i -> res) = a->b->c->d->e->f->g->h->i -> res
  apply fun (Z:.a:.b:.c:.d:.e:.f:.g:.h:.i) = fun a b c d e f g h i
  {-# INLINE apply #-}

instance Apply (Z:.a:.b:.c:.d:.e:.f:.g:.h:.i:.j -> res) where
  type Fun (Z:.a:.b:.c:.d:.e:.f:.g:.h:.i:.j -> res) = a->b->c->d->e->f->g->h->i->j -> res
  apply fun (Z:.a:.b:.c:.d:.e:.f:.g:.h:.i:.j) = fun a b c d e f g h i j
  {-# INLINE apply #-}

instance Apply (Z:.a:.b:.c:.d:.e:.f:.g:.h:.i:.j:.k -> res) where
  type Fun (Z:.a:.b:.c:.d:.e:.f:.g:.h:.i:.j:.k -> res) = a->b->c->d->e->f->g->h->i->j->k -> res
  apply fun (Z:.a:.b:.c:.d:.e:.f:.g:.h:.i:.j:.k) = fun a b c d e f g h i j k
  {-# INLINE apply #-}

instance Apply (Z:.a:.b:.c:.d:.e:.f:.g:.h:.i:.j:.k:.l -> res) where
  type Fun (Z:.a:.b:.c:.d:.e:.f:.g:.h:.i:.j:.k:.l -> res) = a->b->c->d->e->f->g->h->i->j->k->l -> res
  apply fun (Z:.a:.b:.c:.d:.e:.f:.g:.h:.i:.j:.k:.l) = fun a b c d e f g h i j k l
  {-# INLINE apply #-}

instance Apply (Z:.a:.b:.c:.d:.e:.f:.g:.h:.i:.j:.k:.l:.m -> res) where
  type Fun (Z:.a:.b:.c:.d:.e:.f:.g:.h:.i:.j:.k:.l:.m -> res) = a->b->c->d->e->f->g->h->i->j->k->l->m -> res
  apply fun (Z:.a:.b:.c:.d:.e:.f:.g:.h:.i:.j:.k:.l:.m) = fun a b c d e f g h i j k l m
  {-# INLINE apply #-}

instance Apply (Z:.a:.b:.c:.d:.e:.f:.g:.h:.i:.j:.k:.l:.m:.n -> res) where
  type Fun (Z:.a:.b:.c:.d:.e:.f:.g:.h:.i:.j:.k:.l:.m:.n -> res) = a->b->c->d->e->f->g->h->i->j->k->l->m->n -> res
  apply fun (Z:.a:.b:.c:.d:.e:.f:.g:.h:.i:.j:.k:.l:.m:.n) = fun a b c d e f g h i j k l m n
  {-# INLINE apply #-}

instance Apply (Z:.a:.b:.c:.d:.e:.f:.g:.h:.i:.j:.k:.l:.m:.n:.o -> res) where
  type Fun (Z:.a:.b:.c:.d:.e:.f:.g:.h:.i:.j:.k:.l:.m:.n:.o -> res) = a->b->c->d->e->f->g->h->i->j->k->l->m->n->o -> res
  apply fun (Z:.a:.b:.c:.d:.e:.f:.g:.h:.i:.j:.k:.l:.m:.n:.o) = fun a b c d e f g h i j k l m n o
  {-# INLINE apply #-}

{-
mkApply to = do
  let xs    = ['a' .. to]
  let args  = concat . (":.":) . intersperse ":." . map (:[]) $ xs
  let arga  = concat . intersperse "->" . map (:[]) $ xs
  let args' = intersperse ' ' xs
  printf "instance Apply (Z%s -> res) where\n" args
  printf "  type Fun (Z%s -> res) = %s -> res\n" args arga
  printf "  apply fun (Z%s) = fun %s\n" args args'
  printf "  {-# INLINE apply #-}\n"
-}



-- * helper stuff

data Box mk step xs ys = Box mk step xs ys

type Idx3 z = z:.Int:.Int:.Int

type Idx2 z = z:.Int:.Int



-- * wrappers for functions instead of arrays as arguments. It can be much
-- cheaper in terms of writing code to just provide a function @DIM2 -> Scalar
-- a@ instead of writing instances for your data structure.

newtype Scalar a = Scalar {unScalar :: a}

newtype ScalarM a = ScalarM {unScalarM :: a}

newtype Vect a = Vect {unVect :: a}

newtype VectM a = VectM {unVectM :: a}
