# 1 "/Users/skgchxngsxyz-osx/Downloads/lemon.c"
# 1 "<built-in>" 1
# 1 "<built-in>" 3
# 162 "<built-in>" 3
# 1 "<command line>" 1
# 1 "<built-in>" 2
# 1 "/Users/skgchxngsxyz-osx/Downloads/lemon.c" 2








# 1 "/usr/include/stdio.h" 1 3 4
# 64 "/usr/include/stdio.h" 3 4
# 1 "/usr/include/sys/cdefs.h" 1 3 4
# 406 "/usr/include/sys/cdefs.h" 3 4
# 1 "/usr/include/sys/_symbol_aliasing.h" 1 3 4
# 407 "/usr/include/sys/cdefs.h" 2 3 4
# 472 "/usr/include/sys/cdefs.h" 3 4
# 1 "/usr/include/sys/_posix_availability.h" 1 3 4
# 473 "/usr/include/sys/cdefs.h" 2 3 4
# 65 "/usr/include/stdio.h" 2 3 4
# 1 "/usr/include/Availability.h" 1 3 4
# 144 "/usr/include/Availability.h" 3 4
# 1 "/usr/include/AvailabilityInternal.h" 1 3 4
# 145 "/usr/include/Availability.h" 2 3 4
# 66 "/usr/include/stdio.h" 2 3 4

# 1 "/usr/include/_types.h" 1 3 4
# 27 "/usr/include/_types.h" 3 4
# 1 "/usr/include/sys/_types.h" 1 3 4
# 33 "/usr/include/sys/_types.h" 3 4
# 1 "/usr/include/machine/_types.h" 1 3 4
# 32 "/usr/include/machine/_types.h" 3 4
# 1 "/usr/include/i386/_types.h" 1 3 4
# 37 "/usr/include/i386/_types.h" 3 4
typedef signed char __int8_t;



typedef unsigned char __uint8_t;
typedef short __int16_t;
typedef unsigned short __uint16_t;
typedef int __int32_t;
typedef unsigned int __uint32_t;
typedef long long __int64_t;
typedef unsigned long long __uint64_t;

typedef long __darwin_intptr_t;
typedef unsigned int __darwin_natural_t;
# 70 "/usr/include/i386/_types.h" 3 4
typedef int __darwin_ct_rune_t;





typedef union {
 char __mbstate8[128];
 long long _mbstateL;
} __mbstate_t;

typedef __mbstate_t __darwin_mbstate_t;


typedef long int __darwin_ptrdiff_t;





typedef long unsigned int __darwin_size_t;





typedef __builtin_va_list __darwin_va_list;





typedef int __darwin_wchar_t;




typedef __darwin_wchar_t __darwin_rune_t;


typedef int __darwin_wint_t;




typedef unsigned long __darwin_clock_t;
typedef __uint32_t __darwin_socklen_t;
typedef long __darwin_ssize_t;
typedef long __darwin_time_t;
# 33 "/usr/include/machine/_types.h" 2 3 4
# 34 "/usr/include/sys/_types.h" 2 3 4
# 58 "/usr/include/sys/_types.h" 3 4
struct __darwin_pthread_handler_rec
{
 void (*__routine)(void *);
 void *__arg;
 struct __darwin_pthread_handler_rec *__next;
};
struct _opaque_pthread_attr_t { long __sig; char __opaque[56]; };
struct _opaque_pthread_cond_t { long __sig; char __opaque[40]; };
struct _opaque_pthread_condattr_t { long __sig; char __opaque[8]; };
struct _opaque_pthread_mutex_t { long __sig; char __opaque[56]; };
struct _opaque_pthread_mutexattr_t { long __sig; char __opaque[8]; };
struct _opaque_pthread_once_t { long __sig; char __opaque[8]; };
struct _opaque_pthread_rwlock_t { long __sig; char __opaque[192]; };
struct _opaque_pthread_rwlockattr_t { long __sig; char __opaque[16]; };
struct _opaque_pthread_t { long __sig; struct __darwin_pthread_handler_rec *__cleanup_stack; char __opaque[1168]; };
# 94 "/usr/include/sys/_types.h" 3 4
typedef __int64_t __darwin_blkcnt_t;
typedef __int32_t __darwin_blksize_t;
typedef __int32_t __darwin_dev_t;
typedef unsigned int __darwin_fsblkcnt_t;
typedef unsigned int __darwin_fsfilcnt_t;
typedef __uint32_t __darwin_gid_t;
typedef __uint32_t __darwin_id_t;
typedef __uint64_t __darwin_ino64_t;

typedef __darwin_ino64_t __darwin_ino_t;



typedef __darwin_natural_t __darwin_mach_port_name_t;
typedef __darwin_mach_port_name_t __darwin_mach_port_t;
typedef __uint16_t __darwin_mode_t;
typedef __int64_t __darwin_off_t;
typedef __int32_t __darwin_pid_t;
typedef struct _opaque_pthread_attr_t
   __darwin_pthread_attr_t;
typedef struct _opaque_pthread_cond_t
   __darwin_pthread_cond_t;
typedef struct _opaque_pthread_condattr_t
   __darwin_pthread_condattr_t;
typedef unsigned long __darwin_pthread_key_t;
typedef struct _opaque_pthread_mutex_t
   __darwin_pthread_mutex_t;
typedef struct _opaque_pthread_mutexattr_t
   __darwin_pthread_mutexattr_t;
typedef struct _opaque_pthread_once_t
   __darwin_pthread_once_t;
typedef struct _opaque_pthread_rwlock_t
   __darwin_pthread_rwlock_t;
typedef struct _opaque_pthread_rwlockattr_t
   __darwin_pthread_rwlockattr_t;
typedef struct _opaque_pthread_t
   *__darwin_pthread_t;
typedef __uint32_t __darwin_sigset_t;
typedef __int32_t __darwin_suseconds_t;
typedef __uint32_t __darwin_uid_t;
typedef __uint32_t __darwin_useconds_t;
typedef unsigned char __darwin_uuid_t[16];
typedef char __darwin_uuid_string_t[37];
# 28 "/usr/include/_types.h" 2 3 4
# 39 "/usr/include/_types.h" 3 4
typedef int __darwin_nl_item;
typedef int __darwin_wctrans_t;

typedef __uint32_t __darwin_wctype_t;
# 68 "/usr/include/stdio.h" 2 3 4





typedef __darwin_va_list va_list;




typedef __darwin_size_t size_t;






typedef __darwin_off_t fpos_t;
# 96 "/usr/include/stdio.h" 3 4
struct __sbuf {
 unsigned char *_base;
 int _size;
};


struct __sFILEX;
# 130 "/usr/include/stdio.h" 3 4
typedef struct __sFILE {
 unsigned char *_p;
 int _r;
 int _w;
 short _flags;
 short _file;
 struct __sbuf _bf;
 int _lbfsize;


 void *_cookie;
 int (*_close)(void *);
 int (*_read) (void *, char *, int);
 fpos_t (*_seek) (void *, fpos_t, int);
 int (*_write)(void *, const char *, int);


 struct __sbuf _ub;
 struct __sFILEX *_extra;
 int _ur;


 unsigned char _ubuf[3];
 unsigned char _nbuf[1];


 struct __sbuf _lb;


 int _blksize;
 fpos_t _offset;
} FILE;


extern FILE *__stdinp;
extern FILE *__stdoutp;
extern FILE *__stderrp;
# 239 "/usr/include/stdio.h" 3 4
void clearerr(FILE *);
int fclose(FILE *);
int feof(FILE *);
int ferror(FILE *);
int fflush(FILE *);
int fgetc(FILE *);
int fgetpos(FILE * restrict, fpos_t *);
char *fgets(char * restrict, int, FILE *);



FILE *fopen(const char * restrict, const char * restrict) __asm("_" "fopen" );

int fprintf(FILE * restrict, const char * restrict, ...) __attribute__((__format__ (__printf__, 2, 3)));
int fputc(int, FILE *);
int fputs(const char * restrict, FILE * restrict) __asm("_" "fputs" );
size_t fread(void * restrict, size_t, size_t, FILE * restrict);
FILE *freopen(const char * restrict, const char * restrict,
                 FILE * restrict) __asm("_" "freopen" );
int fscanf(FILE * restrict, const char * restrict, ...) __attribute__((__format__ (__scanf__, 2, 3)));
int fseek(FILE *, long, int);
int fsetpos(FILE *, const fpos_t *);
long ftell(FILE *);
size_t fwrite(const void * restrict, size_t, size_t, FILE * restrict) __asm("_" "fwrite" );
int getc(FILE *);
int getchar(void);
char *gets(char *);
void perror(const char *);
int printf(const char * restrict, ...) __attribute__((__format__ (__printf__, 1, 2)));
int putc(int, FILE *);
int putchar(int);
int puts(const char *);
int remove(const char *);
int rename (const char *, const char *);
void rewind(FILE *);
int scanf(const char * restrict, ...) __attribute__((__format__ (__scanf__, 1, 2)));
void setbuf(FILE * restrict, char * restrict);
int setvbuf(FILE * restrict, char * restrict, int, size_t);
int sprintf(char * restrict, const char * restrict, ...) __attribute__((__format__ (__printf__, 2, 3)));
int sscanf(const char * restrict, const char * restrict, ...) __attribute__((__format__ (__scanf__, 2, 3)));
FILE *tmpfile(void);
char *tmpnam(char *);
int ungetc(int, FILE *);
int vfprintf(FILE * restrict, const char * restrict, va_list) __attribute__((__format__ (__printf__, 2, 0)));
int vprintf(const char * restrict, va_list) __attribute__((__format__ (__printf__, 1, 0)));
int vsprintf(char * restrict, const char * restrict, va_list) __attribute__((__format__ (__printf__, 2, 0)));
# 300 "/usr/include/stdio.h" 3 4
char *ctermid(char *);





FILE *fdopen(int, const char *) __asm("_" "fdopen" );

int fileno(FILE *);
# 319 "/usr/include/stdio.h" 3 4
int pclose(FILE *);



FILE *popen(const char *, const char *) __asm("_" "popen" );
# 341 "/usr/include/stdio.h" 3 4
int __srget(FILE *);
int __svfscanf(FILE *, const char *, va_list) __attribute__((__format__ (__scanf__, 2, 0)));
int __swbuf(int, FILE *);
# 352 "/usr/include/stdio.h" 3 4
static __inline int __sputc(int _c, FILE *_p) {
 if (--_p->_w >= 0 || (_p->_w >= _p->_lbfsize && (char)_c != '\n'))
  return (*_p->_p++ = _c);
 else
  return (__swbuf(_c, _p));
}
# 378 "/usr/include/stdio.h" 3 4
void flockfile(FILE *);
int ftrylockfile(FILE *);
void funlockfile(FILE *);
int getc_unlocked(FILE *);
int getchar_unlocked(void);
int putc_unlocked(int, FILE *);
int putchar_unlocked(int);



int getw(FILE *);
int putw(int, FILE *);


char *tempnam(const char *, const char *) __asm("_" "tempnam" );
# 414 "/usr/include/stdio.h" 3 4
typedef __darwin_off_t off_t;



int fseeko(FILE *, off_t, int);
off_t ftello(FILE *);





int snprintf(char * restrict, size_t, const char * restrict, ...) __attribute__((__format__ (__printf__, 3, 4)));
int vfscanf(FILE * restrict, const char * restrict, va_list) __attribute__((__format__ (__scanf__, 2, 0)));
int vscanf(const char * restrict, va_list) __attribute__((__format__ (__scanf__, 1, 0)));
int vsnprintf(char * restrict, size_t, const char * restrict, va_list) __attribute__((__format__ (__printf__, 3, 0)));
int vsscanf(const char * restrict, const char * restrict, va_list) __attribute__((__format__ (__scanf__, 2, 0)));
# 442 "/usr/include/stdio.h" 3 4
typedef __darwin_ssize_t ssize_t;



int dprintf(int, const char * restrict, ...) __attribute__((__format__ (__printf__, 2, 3))) __attribute__((availability(macosx,introduced=10.7)));
int vdprintf(int, const char * restrict, va_list) __attribute__((__format__ (__printf__, 2, 0))) __attribute__((availability(macosx,introduced=10.7)));
ssize_t getdelim(char ** restrict, size_t * restrict, int, FILE * restrict) __attribute__((availability(macosx,introduced=10.7)));
ssize_t getline(char ** restrict, size_t * restrict, FILE * restrict) __attribute__((availability(macosx,introduced=10.7)));
# 459 "/usr/include/stdio.h" 3 4
extern const int sys_nerr;
extern const char *const sys_errlist[];

int asprintf(char **, const char *, ...) __attribute__((__format__ (__printf__, 2, 3)));
char *ctermid_r(char *);
char *fgetln(FILE *, size_t *);
const char *fmtcheck(const char *, const char *);
int fpurge(FILE *);
void setbuffer(FILE *, char *, int);
int setlinebuf(FILE *);
int vasprintf(char **, const char *, va_list) __attribute__((__format__ (__printf__, 2, 0)));
FILE *zopen(const char *, const char *, int);





FILE *funopen(const void *,
                 int (*)(void *, char *, int),
                 int (*)(void *, const char *, int),
                 fpos_t (*)(void *, fpos_t, int),
                 int (*)(void *));
# 499 "/usr/include/stdio.h" 3 4
# 1 "/usr/include/secure/_stdio.h" 1 3 4
# 31 "/usr/include/secure/_stdio.h" 3 4
# 1 "/usr/include/secure/_common.h" 1 3 4
# 32 "/usr/include/secure/_stdio.h" 2 3 4
# 45 "/usr/include/secure/_stdio.h" 3 4
extern int __sprintf_chk (char * restrict, int, size_t,
     const char * restrict, ...);




extern int __snprintf_chk (char * restrict, size_t, int, size_t,
      const char * restrict, ...);





extern int __vsprintf_chk (char * restrict, int, size_t,
      const char * restrict, va_list);




extern int __vsnprintf_chk (char * restrict, size_t, int, size_t,
       const char * restrict, va_list);
# 500 "/usr/include/stdio.h" 2 3 4
# 10 "/Users/skgchxngsxyz-osx/Downloads/lemon.c" 2
# 1 "/usr/bin/../lib/clang/5.0/include/stdarg.h" 1 3 4
# 48 "/usr/bin/../lib/clang/5.0/include/stdarg.h" 3 4
typedef __builtin_va_list __gnuc_va_list;
# 11 "/Users/skgchxngsxyz-osx/Downloads/lemon.c" 2
# 1 "/usr/include/string.h" 1 3 4
# 80 "/usr/include/string.h" 3 4
void *memchr(const void *, int, size_t);
int memcmp(const void *, const void *, size_t);
void *memcpy(void *, const void *, size_t);
void *memmove(void *, const void *, size_t);
void *memset(void *, int, size_t);
char *strcat(char *, const char *);
char *strchr(const char *, int);
int strcmp(const char *, const char *);
int strcoll(const char *, const char *);
char *strcpy(char *, const char *);
size_t strcspn(const char *, const char *);
char *strerror(int) __asm("_" "strerror" );
size_t strlen(const char *);
char *strncat(char *, const char *, size_t);
int strncmp(const char *, const char *, size_t);
char *strncpy(char *, const char *, size_t);
char *strpbrk(const char *, const char *);
char *strrchr(const char *, int);
size_t strspn(const char *, const char *);
char *strstr(const char *, const char *);
char *strtok(char *, const char *);
size_t strxfrm(char *, const char *, size_t);
# 114 "/usr/include/string.h" 3 4
char *strtok_r(char *, const char *, char **);
# 126 "/usr/include/string.h" 3 4
int strerror_r(int, char *, size_t);
char *strdup(const char *);
void *memccpy(void *, const void *, int, size_t);
# 140 "/usr/include/string.h" 3 4
char *stpcpy(char *, const char *);
char *stpncpy(char *, const char *, size_t) __attribute__((availability(macosx,introduced=10.7)));
char *strndup(const char *, size_t) __attribute__((availability(macosx,introduced=10.7)));
size_t strnlen(const char *, size_t) __attribute__((availability(macosx,introduced=10.7)));
char *strsignal(int sig);
# 159 "/usr/include/string.h" 3 4
void *memmem(const void *, size_t, const void *, size_t) __attribute__((availability(macosx,introduced=10.7)));
void memset_pattern4(void *, const void *, size_t) __attribute__((availability(macosx,introduced=10.5)));
void memset_pattern8(void *, const void *, size_t) __attribute__((availability(macosx,introduced=10.5)));
void memset_pattern16(void *, const void *, size_t) __attribute__((availability(macosx,introduced=10.5)));

char *strcasestr(const char *, const char *);
char *strnstr(const char *, const char *, size_t);
size_t strlcat(char *, const char *, size_t);
size_t strlcpy(char *, const char *, size_t);
void strmode(int, char *);
char *strsep(char **, const char *);


void swab(const void * restrict, void * restrict, ssize_t);








# 1 "/usr/include/strings.h" 1 3 4
# 74 "/usr/include/strings.h" 3 4
int bcmp(const void *, const void *, size_t) ;
void bcopy(const void *, void *, size_t) ;
void bzero(void *, size_t) ;
char *index(const char *, int) ;
char *rindex(const char *, int) ;


int ffs(int);
int strcasecmp(const char *, const char *);
int strncasecmp(const char *, const char *, size_t);





int ffsl(long) __attribute__((availability(macosx,introduced=10.5)));
int fls(int) __attribute__((availability(macosx,introduced=10.5)));
int flsl(long) __attribute__((availability(macosx,introduced=10.5)));



# 1 "/usr/include/string.h" 1 3 4
# 95 "/usr/include/strings.h" 2 3 4
# 181 "/usr/include/string.h" 2 3 4
# 190 "/usr/include/string.h" 3 4
# 1 "/usr/include/secure/_string.h" 1 3 4
# 58 "/usr/include/secure/_string.h" 3 4
static __inline void *
__inline_memcpy_chk (void *__dest, const void *__src, size_t __len)
{
  return __builtin___memcpy_chk (__dest, __src, __len, __builtin_object_size (__dest, 0));
}






static __inline void *
__inline_memmove_chk (void *__dest, const void *__src, size_t __len)
{
  return __builtin___memmove_chk (__dest, __src, __len, __builtin_object_size (__dest, 0));
}






static __inline void *
__inline_memset_chk (void *__dest, int __val, size_t __len)
{
  return __builtin___memset_chk (__dest, __val, __len, __builtin_object_size (__dest, 0));
}






static __inline char *
__inline_strcpy_chk (char *restrict __dest, const char *restrict __src)
{
  return __builtin___strcpy_chk (__dest, __src, __builtin_object_size (__dest, 2 > 1));
}







static __inline char *
__inline_stpcpy_chk (char *__dest, const char *__src)
{
  return __builtin___stpcpy_chk (__dest, __src, __builtin_object_size (__dest, 2 > 1));
}






static __inline char *
__inline_stpncpy_chk (char *restrict __dest, const char *restrict __src,
        size_t __len)
{
  return __builtin___stpncpy_chk (__dest, __src, __len, __builtin_object_size (__dest, 2 > 1));
}







static __inline char *
__inline_strncpy_chk (char *restrict __dest, const char *restrict __src,
        size_t __len)
{
  return __builtin___strncpy_chk (__dest, __src, __len, __builtin_object_size (__dest, 2 > 1));
}






static __inline char *
__inline_strcat_chk (char *restrict __dest, const char *restrict __src)
{
  return __builtin___strcat_chk (__dest, __src, __builtin_object_size (__dest, 2 > 1));
}







static __inline char *
__inline_strncat_chk (char *restrict __dest, const char *restrict __src,
        size_t __len)
{
  return __builtin___strncat_chk (__dest, __src, __len, __builtin_object_size (__dest, 2 > 1));
}
# 191 "/usr/include/string.h" 2 3 4
# 12 "/Users/skgchxngsxyz-osx/Downloads/lemon.c" 2
# 1 "/usr/include/ctype.h" 1 3 4
# 69 "/usr/include/ctype.h" 3 4
# 1 "/usr/include/runetype.h" 1 3 4
# 53 "/usr/include/runetype.h" 3 4
typedef __darwin_ct_rune_t ct_rune_t;




typedef __darwin_rune_t rune_t;





typedef __darwin_wchar_t wchar_t;





typedef __darwin_wint_t wint_t;
# 81 "/usr/include/runetype.h" 3 4
typedef struct {
 __darwin_rune_t __min;
 __darwin_rune_t __max;
 __darwin_rune_t __map;
 __uint32_t *__types;
} _RuneEntry;

typedef struct {
 int __nranges;
 _RuneEntry *__ranges;
} _RuneRange;

typedef struct {
 char __name[14];
 __uint32_t __mask;
} _RuneCharClass;

typedef struct {
 char __magic[8];
 char __encoding[32];

 __darwin_rune_t (*__sgetrune)(const char *, __darwin_size_t, char const **);
 int (*__sputrune)(__darwin_rune_t, char *, __darwin_size_t, char **);
 __darwin_rune_t __invalid_rune;

 __uint32_t __runetype[(1 <<8 )];
 __darwin_rune_t __maplower[(1 <<8 )];
 __darwin_rune_t __mapupper[(1 <<8 )];






 _RuneRange __runetype_ext;
 _RuneRange __maplower_ext;
 _RuneRange __mapupper_ext;

 void *__variable;
 int __variable_len;




 int __ncharclasses;
 _RuneCharClass *__charclasses;
} _RuneLocale;




extern _RuneLocale _DefaultRuneLocale;
extern _RuneLocale *_CurrentRuneLocale;
# 70 "/usr/include/ctype.h" 2 3 4
# 146 "/usr/include/ctype.h" 3 4
unsigned long ___runetype(__darwin_ct_rune_t);
__darwin_ct_rune_t ___tolower(__darwin_ct_rune_t);
__darwin_ct_rune_t ___toupper(__darwin_ct_rune_t);


static __inline int
isascii(int _c)
{
 return 0; /* return ((_c & ~0x7F) == 0); */
}
# 165 "/usr/include/ctype.h" 3 4
int __maskrune(__darwin_ct_rune_t, unsigned long);



static __inline int
__istype(__darwin_ct_rune_t _c, unsigned long _f)
{



 return (isascii(_c) ? !!(_DefaultRuneLocale.__runetype[_c] & _f)
  : !!__maskrune(_c, _f));

}

static __inline __darwin_ct_rune_t
__isctype(__darwin_ct_rune_t _c, unsigned long _f)
{



 return (_c < 0 || _c >= (1 <<8 )) ? 0 :
  !!(_DefaultRuneLocale.__runetype[_c] & _f);

}
# 205 "/usr/include/ctype.h" 3 4
__darwin_ct_rune_t __toupper(__darwin_ct_rune_t);
__darwin_ct_rune_t __tolower(__darwin_ct_rune_t);



static __inline int
__wcwidth(__darwin_ct_rune_t _c)
{
 unsigned int _x;

 if (_c == 0)
  return (0);
 _x = 0; /* _x = (unsigned int)__maskrune(_c, 0xe0000000L|0x00040000L); */
 if(1 != 0) /* if ((_x & 0xe0000000L) != 0) */
  return 0;  /* return ((_x & 0xe0000000L) >> 30); */
 return 0; /* return ((_x & 0x00040000L) != 0 ? 1 : -1); */
}






static __inline int
isalnum(int _c)
{
 return 0; /* return (__istype(_c, 0x00000100 | 0x00000400)); */
}

static __inline int
isalpha(int _c)
{
 return 0; //return (__istype(_c, 0x00000100));
}

static __inline int
isblank(int _c)
{
 return 12; //return (__istype(_c, 0x00020000));
}

static __inline int
iscntrl(int _c)
{
 return 0; //return (__istype(_c, 0x00000200));
}


static __inline int
isdigit(int _c)
{
 return (__isctype(_c, 0x00000400));
}

static __inline int
isgraph(int _c)
{
 return (__istype(_c, 0x00000800));
}

static __inline int
islower(int _c)
{
 return (__istype(_c, 0x00001000));
}

static __inline int
isprint(int _c)
{
 return (__istype(_c, 0x00040000));
}

static __inline int
ispunct(int _c)
{
 return (__istype(_c, 0x00002000));
}

static __inline int
isspace(int _c)
{
 return (__istype(_c, 0x00004000));
}

static __inline int
isupper(int _c)
{
 return (__istype(_c, 0x00008000));
}


static __inline int
isxdigit(int _c)
{
 return (__isctype(_c, 0x00010000));
}

static __inline int
toascii(int _c)
{
 return (_c & 0x7F);
}

static __inline int
tolower(int _c)
{
        return (__tolower(_c));
}

static __inline int
toupper(int _c)
{
        return (__toupper(_c));
}


static __inline int
digittoint(int _c)
{
 return (__maskrune(_c, 0x0F));
}

static __inline int
ishexnumber(int _c)
{
 return (__istype(_c, 0x00010000));
}

static __inline int
isideogram(int _c)
{
 return (__istype(_c, 0x00080000));
}

static __inline int
isnumber(int _c)
{
 return (__istype(_c, 0x00000400));
}

static __inline int
isphonogram(int _c)
{
 return (__istype(_c, 0x00200000));
}

static __inline int
isrune(int _c)
{
 return (__istype(_c, 0xFFFFFFF0));
}

static __inline int
isspecial(int _c)
{
 return (__istype(_c, 0x00100000));
}
# 13 "/Users/skgchxngsxyz-osx/Downloads/lemon.c" 2
# 1 "/usr/include/stdlib.h" 1 3 4
# 65 "/usr/include/stdlib.h" 3 4
# 1 "/usr/include/sys/wait.h" 1 3 4
# 79 "/usr/include/sys/wait.h" 3 4
typedef enum {
 P_ALL,
 P_PID,
 P_PGID
} idtype_t;






typedef __darwin_pid_t pid_t;




typedef __darwin_id_t id_t;
# 116 "/usr/include/sys/wait.h" 3 4
# 1 "/usr/include/sys/signal.h" 1 3 4
# 73 "/usr/include/sys/signal.h" 3 4
# 1 "/usr/include/sys/appleapiopts.h" 1 3 4
# 74 "/usr/include/sys/signal.h" 2 3 4







# 1 "/usr/include/machine/signal.h" 1 3 4
# 32 "/usr/include/machine/signal.h" 3 4
# 1 "/usr/include/i386/signal.h" 1 3 4
# 39 "/usr/include/i386/signal.h" 3 4
typedef int sig_atomic_t;
# 55 "/usr/include/i386/signal.h" 3 4
# 1 "/usr/include/i386/_structs.h" 1 3 4
# 56 "/usr/include/i386/signal.h" 2 3 4
# 33 "/usr/include/machine/signal.h" 2 3 4
# 82 "/usr/include/sys/signal.h" 2 3 4
# 148 "/usr/include/sys/signal.h" 3 4
# 1 "/usr/include/sys/_structs.h" 1 3 4
# 57 "/usr/include/sys/_structs.h" 3 4
# 1 "/usr/include/machine/_structs.h" 1 3 4
# 29 "/usr/include/machine/_structs.h" 3 4
# 1 "/usr/include/i386/_structs.h" 1 3 4
# 38 "/usr/include/i386/_structs.h" 3 4
# 1 "/usr/include/mach/i386/_structs.h" 1 3 4
# 43 "/usr/include/mach/i386/_structs.h" 3 4
struct __darwin_i386_thread_state
{
    unsigned int __eax;
    unsigned int __ebx;
    unsigned int __ecx;
    unsigned int __edx;
    unsigned int __edi;
    unsigned int __esi;
    unsigned int __ebp;
    unsigned int __esp;
    unsigned int __ss;
    unsigned int __eflags;
    unsigned int __eip;
    unsigned int __cs;
    unsigned int __ds;
    unsigned int __es;
    unsigned int __fs;
    unsigned int __gs;
};
# 89 "/usr/include/mach/i386/_structs.h" 3 4
struct __darwin_fp_control
{
    unsigned short __invalid :1,
        __denorm :1,
    __zdiv :1,
    __ovrfl :1,
    __undfl :1,
    __precis :1,
      :2,
    __pc :2,





    __rc :2,






             :1,
      :3;
};
typedef struct __darwin_fp_control __darwin_fp_control_t;
# 147 "/usr/include/mach/i386/_structs.h" 3 4
struct __darwin_fp_status
{
    unsigned short __invalid :1,
        __denorm :1,
    __zdiv :1,
    __ovrfl :1,
    __undfl :1,
    __precis :1,
    __stkflt :1,
    __errsumm :1,
    __c0 :1,
    __c1 :1,
    __c2 :1,
    __tos :3,
    __c3 :1,
    __busy :1;
};
typedef struct __darwin_fp_status __darwin_fp_status_t;
# 191 "/usr/include/mach/i386/_structs.h" 3 4
struct __darwin_mmst_reg
{
 char __mmst_reg[10];
 char __mmst_rsrv[6];
};
# 210 "/usr/include/mach/i386/_structs.h" 3 4
struct __darwin_xmm_reg
{
 char __xmm_reg[16];
};
# 232 "/usr/include/mach/i386/_structs.h" 3 4
struct __darwin_i386_float_state
{
 int __fpu_reserved[2];
 struct __darwin_fp_control __fpu_fcw;
 struct __darwin_fp_status __fpu_fsw;
 __uint8_t __fpu_ftw;
 __uint8_t __fpu_rsrv1;
 __uint16_t __fpu_fop;
 __uint32_t __fpu_ip;
 __uint16_t __fpu_cs;
 __uint16_t __fpu_rsrv2;
 __uint32_t __fpu_dp;
 __uint16_t __fpu_ds;
 __uint16_t __fpu_rsrv3;
 __uint32_t __fpu_mxcsr;
 __uint32_t __fpu_mxcsrmask;
 struct __darwin_mmst_reg __fpu_stmm0;
 struct __darwin_mmst_reg __fpu_stmm1;
 struct __darwin_mmst_reg __fpu_stmm2;
 struct __darwin_mmst_reg __fpu_stmm3;
 struct __darwin_mmst_reg __fpu_stmm4;
 struct __darwin_mmst_reg __fpu_stmm5;
 struct __darwin_mmst_reg __fpu_stmm6;
 struct __darwin_mmst_reg __fpu_stmm7;
 struct __darwin_xmm_reg __fpu_xmm0;
 struct __darwin_xmm_reg __fpu_xmm1;
 struct __darwin_xmm_reg __fpu_xmm2;
 struct __darwin_xmm_reg __fpu_xmm3;
 struct __darwin_xmm_reg __fpu_xmm4;
 struct __darwin_xmm_reg __fpu_xmm5;
 struct __darwin_xmm_reg __fpu_xmm6;
 struct __darwin_xmm_reg __fpu_xmm7;
 char __fpu_rsrv4[14*16];
 int __fpu_reserved1;
};


struct __darwin_i386_avx_state
{
 int __fpu_reserved[2];
 struct __darwin_fp_control __fpu_fcw;
 struct __darwin_fp_status __fpu_fsw;
 __uint8_t __fpu_ftw;
 __uint8_t __fpu_rsrv1;
 __uint16_t __fpu_fop;
 __uint32_t __fpu_ip;
 __uint16_t __fpu_cs;
 __uint16_t __fpu_rsrv2;
 __uint32_t __fpu_dp;
 __uint16_t __fpu_ds;
 __uint16_t __fpu_rsrv3;
 __uint32_t __fpu_mxcsr;
 __uint32_t __fpu_mxcsrmask;
 struct __darwin_mmst_reg __fpu_stmm0;
 struct __darwin_mmst_reg __fpu_stmm1;
 struct __darwin_mmst_reg __fpu_stmm2;
 struct __darwin_mmst_reg __fpu_stmm3;
 struct __darwin_mmst_reg __fpu_stmm4;
 struct __darwin_mmst_reg __fpu_stmm5;
 struct __darwin_mmst_reg __fpu_stmm6;
 struct __darwin_mmst_reg __fpu_stmm7;
 struct __darwin_xmm_reg __fpu_xmm0;
 struct __darwin_xmm_reg __fpu_xmm1;
 struct __darwin_xmm_reg __fpu_xmm2;
 struct __darwin_xmm_reg __fpu_xmm3;
 struct __darwin_xmm_reg __fpu_xmm4;
 struct __darwin_xmm_reg __fpu_xmm5;
 struct __darwin_xmm_reg __fpu_xmm6;
 struct __darwin_xmm_reg __fpu_xmm7;
 char __fpu_rsrv4[14*16];
 int __fpu_reserved1;
 char __avx_reserved1[64];
 struct __darwin_xmm_reg __fpu_ymmh0;
 struct __darwin_xmm_reg __fpu_ymmh1;
 struct __darwin_xmm_reg __fpu_ymmh2;
 struct __darwin_xmm_reg __fpu_ymmh3;
 struct __darwin_xmm_reg __fpu_ymmh4;
 struct __darwin_xmm_reg __fpu_ymmh5;
 struct __darwin_xmm_reg __fpu_ymmh6;
 struct __darwin_xmm_reg __fpu_ymmh7;
};
# 402 "/usr/include/mach/i386/_structs.h" 3 4
struct __darwin_i386_exception_state
{
 __uint16_t __trapno;
 __uint16_t __cpu;
 __uint32_t __err;
 __uint32_t __faultvaddr;
};
# 422 "/usr/include/mach/i386/_structs.h" 3 4
struct __darwin_x86_debug_state32
{
 unsigned int __dr0;
 unsigned int __dr1;
 unsigned int __dr2;
 unsigned int __dr3;
 unsigned int __dr4;
 unsigned int __dr5;
 unsigned int __dr6;
 unsigned int __dr7;
};
# 454 "/usr/include/mach/i386/_structs.h" 3 4
struct __darwin_x86_thread_state64
{
 __uint64_t __rax;
 __uint64_t __rbx;
 __uint64_t __rcx;
 __uint64_t __rdx;
 __uint64_t __rdi;
 __uint64_t __rsi;
 __uint64_t __rbp;
 __uint64_t __rsp;
 __uint64_t __r8;
 __uint64_t __r9;
 __uint64_t __r10;
 __uint64_t __r11;
 __uint64_t __r12;
 __uint64_t __r13;
 __uint64_t __r14;
 __uint64_t __r15;
 __uint64_t __rip;
 __uint64_t __rflags;
 __uint64_t __cs;
 __uint64_t __fs;
 __uint64_t __gs;
};
# 509 "/usr/include/mach/i386/_structs.h" 3 4
struct __darwin_x86_float_state64
{
 int __fpu_reserved[2];
 struct __darwin_fp_control __fpu_fcw;
 struct __darwin_fp_status __fpu_fsw;
 __uint8_t __fpu_ftw;
 __uint8_t __fpu_rsrv1;
 __uint16_t __fpu_fop;


 __uint32_t __fpu_ip;
 __uint16_t __fpu_cs;

 __uint16_t __fpu_rsrv2;


 __uint32_t __fpu_dp;
 __uint16_t __fpu_ds;

 __uint16_t __fpu_rsrv3;
 __uint32_t __fpu_mxcsr;
 __uint32_t __fpu_mxcsrmask;
 struct __darwin_mmst_reg __fpu_stmm0;
 struct __darwin_mmst_reg __fpu_stmm1;
 struct __darwin_mmst_reg __fpu_stmm2;
 struct __darwin_mmst_reg __fpu_stmm3;
 struct __darwin_mmst_reg __fpu_stmm4;
 struct __darwin_mmst_reg __fpu_stmm5;
 struct __darwin_mmst_reg __fpu_stmm6;
 struct __darwin_mmst_reg __fpu_stmm7;
 struct __darwin_xmm_reg __fpu_xmm0;
 struct __darwin_xmm_reg __fpu_xmm1;
 struct __darwin_xmm_reg __fpu_xmm2;
 struct __darwin_xmm_reg __fpu_xmm3;
 struct __darwin_xmm_reg __fpu_xmm4;
 struct __darwin_xmm_reg __fpu_xmm5;
 struct __darwin_xmm_reg __fpu_xmm6;
 struct __darwin_xmm_reg __fpu_xmm7;
 struct __darwin_xmm_reg __fpu_xmm8;
 struct __darwin_xmm_reg __fpu_xmm9;
 struct __darwin_xmm_reg __fpu_xmm10;
 struct __darwin_xmm_reg __fpu_xmm11;
 struct __darwin_xmm_reg __fpu_xmm12;
 struct __darwin_xmm_reg __fpu_xmm13;
 struct __darwin_xmm_reg __fpu_xmm14;
 struct __darwin_xmm_reg __fpu_xmm15;
 char __fpu_rsrv4[6*16];
 int __fpu_reserved1;
};


struct __darwin_x86_avx_state64
{
 int __fpu_reserved[2];
 struct __darwin_fp_control __fpu_fcw;
 struct __darwin_fp_status __fpu_fsw;
 __uint8_t __fpu_ftw;
 __uint8_t __fpu_rsrv1;
 __uint16_t __fpu_fop;


 __uint32_t __fpu_ip;
 __uint16_t __fpu_cs;

 __uint16_t __fpu_rsrv2;


 __uint32_t __fpu_dp;
 __uint16_t __fpu_ds;

 __uint16_t __fpu_rsrv3;
 __uint32_t __fpu_mxcsr;
 __uint32_t __fpu_mxcsrmask;
 struct __darwin_mmst_reg __fpu_stmm0;
 struct __darwin_mmst_reg __fpu_stmm1;
 struct __darwin_mmst_reg __fpu_stmm2;
 struct __darwin_mmst_reg __fpu_stmm3;
 struct __darwin_mmst_reg __fpu_stmm4;
 struct __darwin_mmst_reg __fpu_stmm5;
 struct __darwin_mmst_reg __fpu_stmm6;
 struct __darwin_mmst_reg __fpu_stmm7;
 struct __darwin_xmm_reg __fpu_xmm0;
 struct __darwin_xmm_reg __fpu_xmm1;
 struct __darwin_xmm_reg __fpu_xmm2;
 struct __darwin_xmm_reg __fpu_xmm3;
 struct __darwin_xmm_reg __fpu_xmm4;
 struct __darwin_xmm_reg __fpu_xmm5;
 struct __darwin_xmm_reg __fpu_xmm6;
 struct __darwin_xmm_reg __fpu_xmm7;
 struct __darwin_xmm_reg __fpu_xmm8;
 struct __darwin_xmm_reg __fpu_xmm9;
 struct __darwin_xmm_reg __fpu_xmm10;
 struct __darwin_xmm_reg __fpu_xmm11;
 struct __darwin_xmm_reg __fpu_xmm12;
 struct __darwin_xmm_reg __fpu_xmm13;
 struct __darwin_xmm_reg __fpu_xmm14;
 struct __darwin_xmm_reg __fpu_xmm15;
 char __fpu_rsrv4[6*16];
 int __fpu_reserved1;
 char __avx_reserved1[64];
 struct __darwin_xmm_reg __fpu_ymmh0;
 struct __darwin_xmm_reg __fpu_ymmh1;
 struct __darwin_xmm_reg __fpu_ymmh2;
 struct __darwin_xmm_reg __fpu_ymmh3;
 struct __darwin_xmm_reg __fpu_ymmh4;
 struct __darwin_xmm_reg __fpu_ymmh5;
 struct __darwin_xmm_reg __fpu_ymmh6;
 struct __darwin_xmm_reg __fpu_ymmh7;
 struct __darwin_xmm_reg __fpu_ymmh8;
 struct __darwin_xmm_reg __fpu_ymmh9;
 struct __darwin_xmm_reg __fpu_ymmh10;
 struct __darwin_xmm_reg __fpu_ymmh11;
 struct __darwin_xmm_reg __fpu_ymmh12;
 struct __darwin_xmm_reg __fpu_ymmh13;
 struct __darwin_xmm_reg __fpu_ymmh14;
 struct __darwin_xmm_reg __fpu_ymmh15;
};
# 751 "/usr/include/mach/i386/_structs.h" 3 4
struct __darwin_x86_exception_state64
{
    __uint16_t __trapno;
    __uint16_t __cpu;
    __uint32_t __err;
    __uint64_t __faultvaddr;
};
# 771 "/usr/include/mach/i386/_structs.h" 3 4
struct __darwin_x86_debug_state64
{
 __uint64_t __dr0;
 __uint64_t __dr1;
 __uint64_t __dr2;
 __uint64_t __dr3;
 __uint64_t __dr4;
 __uint64_t __dr5;
 __uint64_t __dr6;
 __uint64_t __dr7;
};
# 39 "/usr/include/i386/_structs.h" 2 3 4
# 48 "/usr/include/i386/_structs.h" 3 4
struct __darwin_mcontext32
{
 struct __darwin_i386_exception_state __es;
 struct __darwin_i386_thread_state __ss;
 struct __darwin_i386_float_state __fs;
};


struct __darwin_mcontext_avx32
{
 struct __darwin_i386_exception_state __es;
 struct __darwin_i386_thread_state __ss;
 struct __darwin_i386_avx_state __fs;
};
# 86 "/usr/include/i386/_structs.h" 3 4
struct __darwin_mcontext64
{
 struct __darwin_x86_exception_state64 __es;
 struct __darwin_x86_thread_state64 __ss;
 struct __darwin_x86_float_state64 __fs;
};


struct __darwin_mcontext_avx64
{
 struct __darwin_x86_exception_state64 __es;
 struct __darwin_x86_thread_state64 __ss;
 struct __darwin_x86_avx_state64 __fs;
};
# 127 "/usr/include/i386/_structs.h" 3 4
typedef struct __darwin_mcontext64 *mcontext_t;
# 30 "/usr/include/machine/_structs.h" 2 3 4
# 58 "/usr/include/sys/_structs.h" 2 3 4
# 75 "/usr/include/sys/_structs.h" 3 4
struct __darwin_sigaltstack
{
 void *ss_sp;
 __darwin_size_t ss_size;
 int ss_flags;
};
# 128 "/usr/include/sys/_structs.h" 3 4
struct __darwin_ucontext
{
 int uc_onstack;
 __darwin_sigset_t uc_sigmask;
 struct __darwin_sigaltstack uc_stack;
 struct __darwin_ucontext *uc_link;
 __darwin_size_t uc_mcsize;
 struct __darwin_mcontext64 *uc_mcontext;



};
# 218 "/usr/include/sys/_structs.h" 3 4
typedef struct __darwin_sigaltstack stack_t;
# 227 "/usr/include/sys/_structs.h" 3 4
typedef struct __darwin_ucontext ucontext_t;
# 149 "/usr/include/sys/signal.h" 2 3 4








typedef __darwin_pthread_attr_t pthread_attr_t;




typedef __darwin_sigset_t sigset_t;
# 172 "/usr/include/sys/signal.h" 3 4
typedef __darwin_uid_t uid_t;


union sigval {

 int sival_int;
 void *sival_ptr;
};





struct sigevent {
 int sigev_notify;
 int sigev_signo;
 union sigval sigev_value;
 void (*sigev_notify_function)(union sigval);
 pthread_attr_t *sigev_notify_attributes;
};


typedef struct __siginfo {
 int si_signo;
 int si_errno;
 int si_code;
 pid_t si_pid;
 uid_t si_uid;
 int si_status;
 void *si_addr;
 union sigval si_value;
 long si_band;
 unsigned long __pad[7];
} siginfo_t;
# 286 "/usr/include/sys/signal.h" 3 4
union __sigaction_u {
 void (*__sa_handler)(int);
 void (*__sa_sigaction)(int, struct __siginfo *,
         void *);
};


struct __sigaction {
 union __sigaction_u __sigaction_u;
 void (*sa_tramp)(void *, int, int, siginfo_t *, void *);
 sigset_t sa_mask;
 int sa_flags;
};




struct sigaction {
 union __sigaction_u __sigaction_u;
 sigset_t sa_mask;
 int sa_flags;
};
# 348 "/usr/include/sys/signal.h" 3 4
typedef void (*sig_t)(int);
# 365 "/usr/include/sys/signal.h" 3 4
struct sigvec {
 void (*sv_handler)(int);
 int sv_mask;
 int sv_flags;
};
# 384 "/usr/include/sys/signal.h" 3 4
struct sigstack {
 char *ss_sp;
 int ss_onstack;
};
# 407 "/usr/include/sys/signal.h" 3 4
void (*signal(int, void (*)(int)))(int);
# 117 "/usr/include/sys/wait.h" 2 3 4
# 1 "/usr/include/sys/resource.h" 1 3 4
# 77 "/usr/include/sys/resource.h" 3 4
# 1 "/usr/include/sys/_structs.h" 1 3 4
# 100 "/usr/include/sys/_structs.h" 3 4
struct timeval
{
 __darwin_time_t tv_sec;
 __darwin_suseconds_t tv_usec;
};
# 78 "/usr/include/sys/resource.h" 2 3 4
# 89 "/usr/include/sys/resource.h" 3 4
typedef __uint64_t rlim_t;
# 151 "/usr/include/sys/resource.h" 3 4
struct rusage {
 struct timeval ru_utime;
 struct timeval ru_stime;
# 162 "/usr/include/sys/resource.h" 3 4
 long ru_maxrss;

 long ru_ixrss;
 long ru_idrss;
 long ru_isrss;
 long ru_minflt;
 long ru_majflt;
 long ru_nswap;
 long ru_inblock;
 long ru_oublock;
 long ru_msgsnd;
 long ru_msgrcv;
 long ru_nsignals;
 long ru_nvcsw;
 long ru_nivcsw;


};
# 222 "/usr/include/sys/resource.h" 3 4
struct rlimit {
 rlim_t rlim_cur;
 rlim_t rlim_max;
};
# 246 "/usr/include/sys/resource.h" 3 4
int getpriority(int, id_t);

int getiopolicy_np(int, int) __attribute__((availability(macosx,introduced=10.5)));

int getrlimit(int, struct rlimit *) __asm("_" "getrlimit" );
int getrusage(int, struct rusage *);
int setpriority(int, id_t, int);

int setiopolicy_np(int, int, int) __attribute__((availability(macosx,introduced=10.5)));

int setrlimit(int, const struct rlimit *) __asm("_" "setrlimit" );
# 118 "/usr/include/sys/wait.h" 2 3 4
# 193 "/usr/include/sys/wait.h" 3 4
# 1 "/usr/include/machine/endian.h" 1 3 4
# 35 "/usr/include/machine/endian.h" 3 4
# 1 "/usr/include/i386/endian.h" 1 3 4
# 99 "/usr/include/i386/endian.h" 3 4
# 1 "/usr/include/sys/_endian.h" 1 3 4
# 124 "/usr/include/sys/_endian.h" 3 4
# 1 "/usr/include/libkern/_OSByteOrder.h" 1 3 4
# 66 "/usr/include/libkern/_OSByteOrder.h" 3 4
# 1 "/usr/include/libkern/i386/_OSByteOrder.h" 1 3 4
# 44 "/usr/include/libkern/i386/_OSByteOrder.h" 3 4
static inline
__uint16_t
_OSSwapInt16(
    __uint16_t _data
)
{
    return ((_data << 8) | (_data >> 8));
}

static inline
__uint32_t
_OSSwapInt32(
    __uint32_t _data
)
{

    return __builtin_bswap32(_data);




}


static inline
__uint64_t
_OSSwapInt64(
    __uint64_t _data
)
{
    return __builtin_bswap64(_data);
}
# 67 "/usr/include/libkern/_OSByteOrder.h" 2 3 4
# 125 "/usr/include/sys/_endian.h" 2 3 4
# 100 "/usr/include/i386/endian.h" 2 3 4
# 36 "/usr/include/machine/endian.h" 2 3 4
# 194 "/usr/include/sys/wait.h" 2 3 4







union wait {
 int w_status;



 struct {

  unsigned int w_Termsig:7,
    w_Coredump:1,
    w_Retcode:8,
    w_Filler:16;







 } w_T;





 struct {

  unsigned int w_Stopval:8,
    w_Stopsig:8,
    w_Filler:16;






 } w_S;
};
# 255 "/usr/include/sys/wait.h" 3 4
pid_t wait(int *) __asm("_" "wait" );
pid_t waitpid(pid_t, int *, int) __asm("_" "waitpid" );

int waitid(idtype_t, id_t, siginfo_t *, int) __asm("_" "waitid" );


pid_t wait3(int *, int, struct rusage *);
pid_t wait4(pid_t, int *, int, struct rusage *);
# 66 "/usr/include/stdlib.h" 2 3 4

# 1 "/usr/include/alloca.h" 1 3 4
# 36 "/usr/include/alloca.h" 3 4
void *alloca(size_t);
# 68 "/usr/include/stdlib.h" 2 3 4
# 97 "/usr/include/stdlib.h" 3 4
typedef struct {
 int quot;
 int rem;
} div_t;

typedef struct {
 long quot;
 long rem;
} ldiv_t;


typedef struct {
 long long quot;
 long long rem;
} lldiv_t;
# 134 "/usr/include/stdlib.h" 3 4
extern int __mb_cur_max;
# 145 "/usr/include/stdlib.h" 3 4
void abort(void) __attribute__((noreturn));
int abs(int) __attribute__((const));
int atexit(void (*)(void));
double atof(const char *);
int atoi(const char *);
long atol(const char *);

long long
  atoll(const char *);

void *bsearch(const void *, const void *, size_t,
     size_t, int (*)(const void *, const void *));
void *calloc(size_t, size_t);
div_t div(int, int) __attribute__((const));
void exit(int) __attribute__((noreturn));
void free(void *);
char *getenv(const char *);
long labs(long) __attribute__((const));
ldiv_t ldiv(long, long) __attribute__((const));

long long
  llabs(long long);
lldiv_t lldiv(long long, long long);

void *malloc(size_t);
int mblen(const char *, size_t);
size_t mbstowcs(wchar_t * restrict , const char * restrict, size_t);
int mbtowc(wchar_t * restrict, const char * restrict, size_t);
int posix_memalign(void **, size_t, size_t) __attribute__((availability(macosx,introduced=10.6)));
void qsort(void *, size_t, size_t,
     int (*)(const void *, const void *));
int rand(void);
void *realloc(void *, size_t);
void srand(unsigned);
double strtod(const char *, char **) __asm("_" "strtod" );
float strtof(const char *, char **) __asm("_" "strtof" );
long strtol(const char *, char **, int);
long double
  strtold(const char *, char **);

long long
  strtoll(const char *, char **, int);

unsigned long
  strtoul(const char *, char **, int);

unsigned long long
  strtoull(const char *, char **, int);

int system(const char *) __asm("_" "system" );
size_t wcstombs(char * restrict, const wchar_t * restrict, size_t);
int wctomb(char *, wchar_t);


void _Exit(int) __attribute__((noreturn));
long a64l(const char *);
double drand48(void);
char *ecvt(double, int, int *restrict, int *restrict);
double erand48(unsigned short[3]);
char *fcvt(double, int, int *restrict, int *restrict);
char *gcvt(double, int, char *);
int getsubopt(char **, char * const *, char **);
int grantpt(int);

char *initstate(unsigned, char *, size_t);



long jrand48(unsigned short[3]);
char *l64a(long);
void lcong48(unsigned short[7]);
long lrand48(void);
char *mktemp(char *);
int mkstemp(char *);
long mrand48(void);
long nrand48(unsigned short[3]);
int posix_openpt(int);
char *ptsname(int);
int putenv(char *) __asm("_" "putenv" );
long random(void);
int rand_r(unsigned *);

char *realpath(const char * restrict, char * restrict) __asm("_" "realpath" "$DARWIN_EXTSN");



unsigned short
 *seed48(unsigned short[3]);
int setenv(const char *, const char *, int) __asm("_" "setenv" );

void setkey(const char *) __asm("_" "setkey" );



char *setstate(const char *);
void srand48(long);

void srandom(unsigned);



int unlockpt(int);

int unsetenv(const char *) __asm("_" "unsetenv" );







# 1 "/usr/include/machine/types.h" 1 3 4
# 35 "/usr/include/machine/types.h" 3 4
# 1 "/usr/include/i386/types.h" 1 3 4
# 78 "/usr/include/i386/types.h" 3 4
typedef signed char int8_t;

typedef unsigned char u_int8_t;


typedef short int16_t;

typedef unsigned short u_int16_t;


typedef int int32_t;

typedef unsigned int u_int32_t;


typedef long long int64_t;

typedef unsigned long long u_int64_t;


typedef int64_t register_t;






typedef __darwin_intptr_t intptr_t;



typedef unsigned long uintptr_t;




typedef u_int64_t user_addr_t;
typedef u_int64_t user_size_t;
typedef int64_t user_ssize_t;
typedef int64_t user_long_t;
typedef u_int64_t user_ulong_t;
typedef int64_t user_time_t;
typedef int64_t user_off_t;







typedef u_int64_t syscall_arg_t;
# 36 "/usr/include/machine/types.h" 2 3 4
# 256 "/usr/include/stdlib.h" 2 3 4


typedef __darwin_dev_t dev_t;




typedef __darwin_mode_t mode_t;



u_int32_t
  arc4random(void);
void arc4random_addrandom(unsigned char * , int );
void arc4random_buf(void * , size_t ) __attribute__((availability(macosx,introduced=10.7)));
void arc4random_stir(void);
u_int32_t
  arc4random_uniform(u_int32_t ) __attribute__((availability(macosx,introduced=10.7)));

int atexit_b(void (^)(void)) __attribute__((availability(macosx,introduced=10.6)));
void *bsearch_b(const void *, const void *, size_t,
     size_t, int (^)(const void *, const void *)) __attribute__((availability(macosx,introduced=10.6)));



char *cgetcap(char *, const char *, int);
int cgetclose(void);
int cgetent(char **, char **, const char *);
int cgetfirst(char **, char **);
int cgetmatch(const char *, const char *);
int cgetnext(char **, char **);
int cgetnum(char *, const char *, long *);
int cgetset(const char *);
int cgetstr(char *, const char *, char **);
int cgetustr(char *, const char *, char **);

int daemon(int, int) __asm("_" "daemon" "$1050") __attribute__((availability(macosx,introduced=10.0,deprecated=10.5)));
char *devname(dev_t, mode_t);
char *devname_r(dev_t, mode_t, char *buf, int len);
char *getbsize(int *, long *);
int getloadavg(double [], int);
const char
 *getprogname(void);

int heapsort(void *, size_t, size_t,
     int (*)(const void *, const void *));

int heapsort_b(void *, size_t, size_t,
     int (^)(const void *, const void *)) __attribute__((availability(macosx,introduced=10.6)));

int mergesort(void *, size_t, size_t,
     int (*)(const void *, const void *));

int mergesort_b(void *, size_t, size_t,
     int (^)(const void *, const void *)) __attribute__((availability(macosx,introduced=10.6)));

void psort(void *, size_t, size_t,
     int (*)(const void *, const void *)) __attribute__((availability(macosx,introduced=10.6)));

void psort_b(void *, size_t, size_t,
     int (^)(const void *, const void *)) __attribute__((availability(macosx,introduced=10.6)));

void psort_r(void *, size_t, size_t, void *,
     int (*)(void *, const void *, const void *)) __attribute__((availability(macosx,introduced=10.6)));

void qsort_b(void *, size_t, size_t,
     int (^)(const void *, const void *)) __attribute__((availability(macosx,introduced=10.6)));

void qsort_r(void *, size_t, size_t, void *,
     int (*)(void *, const void *, const void *));
int radixsort(const unsigned char **, int, const unsigned char *,
     unsigned);
void setprogname(const char *);
int sradixsort(const unsigned char **, int, const unsigned char *,
     unsigned);
void sranddev(void);
void srandomdev(void);
void *reallocf(void *, size_t);

long long
  strtoq(const char *, char **, int);
unsigned long long
  strtouq(const char *, char **, int);

extern char *suboptarg;
void *valloc(size_t);
# 14 "/Users/skgchxngsxyz-osx/Downloads/lemon.c" 2
# 1 "/usr/include/assert.h" 1 3 4
# 76 "/usr/include/assert.h" 3 4
void __assert_rtn(const char *, const char *, int, const char *) __attribute__((noreturn));
# 15 "/Users/skgchxngsxyz-osx/Downloads/lemon.c" 2
# 31 "/Users/skgchxngsxyz-osx/Downloads/lemon.c"
# 1 "/usr/include/unistd.h" 1 3 4
# 72 "/usr/include/unistd.h" 3 4
# 1 "/usr/include/sys/unistd.h" 1 3 4
# 138 "/usr/include/sys/unistd.h" 3 4
struct accessx_descriptor {
 unsigned int ad_name_offset;
 int ad_flags;
 int ad_pad[2];
};
# 73 "/usr/include/unistd.h" 2 3 4




typedef __darwin_gid_t gid_t;
# 114 "/usr/include/unistd.h" 3 4
typedef __darwin_useconds_t useconds_t;
# 459 "/usr/include/unistd.h" 3 4
void _exit(int) __attribute__((noreturn));
int access(const char *, int);
unsigned int
  alarm(unsigned int);
int chdir(const char *);
int chown(const char *, uid_t, gid_t);

int close(int) __asm("_" "close" );

int dup(int);
int dup2(int, int);
int execl(const char *, const char *, ...);
int execle(const char *, const char *, ...);
int execlp(const char *, const char *, ...);
int execv(const char *, char * const *);
int execve(const char *, char * const *, char * const *);
int execvp(const char *, char * const *);
pid_t fork(void);
long fpathconf(int, int);
char *getcwd(char *, size_t);
gid_t getegid(void);
uid_t geteuid(void);
gid_t getgid(void);



int getgroups(int, gid_t []);

char *getlogin(void);
pid_t getpgrp(void);
pid_t getpid(void);
pid_t getppid(void);
uid_t getuid(void);
int isatty(int);
int link(const char *, const char *);
off_t lseek(int, off_t, int);
long pathconf(const char *, int);

int pause(void) __asm("_" "pause" );

int pipe(int [2]);

ssize_t read(int, void *, size_t) __asm("_" "read" );

int rmdir(const char *);
int setgid(gid_t);
int setpgid(pid_t, pid_t);
pid_t setsid(void);
int setuid(uid_t);

unsigned int
  sleep(unsigned int) __asm("_" "sleep" );

long sysconf(int);
pid_t tcgetpgrp(int);
int tcsetpgrp(int, pid_t);
char *ttyname(int);


int ttyname_r(int, char *, size_t) __asm("_" "ttyname_r" );




int unlink(const char *);

ssize_t write(int, const void *, size_t) __asm("_" "write" );
# 536 "/usr/include/unistd.h" 3 4
size_t confstr(int, char *, size_t) __asm("_" "confstr" );

int getopt(int, char * const [], const char *) __asm("_" "getopt" );

extern char *optarg;
extern int optind, opterr, optopt;
# 565 "/usr/include/unistd.h" 3 4
void *brk(const void *);
int chroot(const char *) ;


char *crypt(const char *, const char *);






void encrypt(char *, int) __asm("_" "encrypt" );



int fchdir(int);
long gethostid(void);
pid_t getpgid(pid_t);
pid_t getsid(pid_t);



int getdtablesize(void) ;
int getpagesize(void) __attribute__((const)) ;
char *getpass(const char *) ;




char *getwd(char *) ;


int lchown(const char *, uid_t, gid_t) __asm("_" "lchown" );

int lockf(int, int, off_t) __asm("_" "lockf" );

int nice(int) __asm("_" "nice" );

ssize_t pread(int, void *, size_t, off_t) __asm("_" "pread" );

ssize_t pwrite(int, const void *, size_t, off_t) __asm("_" "pwrite" );





void *sbrk(int);



pid_t setpgrp(void) __asm("_" "setpgrp" );




int setregid(gid_t, gid_t) __asm("_" "setregid" );

int setreuid(uid_t, uid_t) __asm("_" "setreuid" );

void swab(const void * restrict, void * restrict, ssize_t);
void sync(void);
int truncate(const char *, off_t);
useconds_t ualarm(useconds_t, useconds_t);
int usleep(useconds_t) __asm("_" "usleep" );
pid_t vfork(void);


int fsync(int) __asm("_" "fsync" );

int ftruncate(int, off_t);
int getlogin_r(char *, size_t);
# 648 "/usr/include/unistd.h" 3 4
int fchown(int, uid_t, gid_t);
int gethostname(char *, size_t);
ssize_t readlink(const char * restrict, char * restrict, size_t);
int setegid(gid_t);
int seteuid(uid_t);
int symlink(const char *, const char *);
# 662 "/usr/include/unistd.h" 3 4
# 1 "/usr/include/sys/select.h" 1 3 4
# 78 "/usr/include/sys/select.h" 3 4
# 1 "/usr/include/sys/_structs.h" 1 3 4
# 88 "/usr/include/sys/_structs.h" 3 4
struct timespec
{
 __darwin_time_t tv_sec;
 long tv_nsec;
};
# 184 "/usr/include/sys/_structs.h" 3 4
typedef struct fd_set {
 __int32_t fds_bits[((((1024) % ((sizeof(__int32_t) * 8))) == 0) ? ((1024) / ((sizeof(__int32_t) * 8))) : (((1024) / ((sizeof(__int32_t) * 8))) + 1))];
} fd_set;



static __inline int
__darwin_fd_isset(int _n, const struct fd_set *_p)
{
 return (_p->fds_bits[_n/(sizeof(__int32_t) * 8)] & (1<<(_n % (sizeof(__int32_t) * 8))));
}
# 79 "/usr/include/sys/select.h" 2 3 4








typedef __darwin_time_t time_t;




typedef __darwin_suseconds_t suseconds_t;
# 137 "/usr/include/sys/select.h" 3 4
int pselect(int, fd_set * restrict, fd_set * restrict,
  fd_set * restrict, const struct timespec * restrict,
  const sigset_t * restrict)




  __asm("_" "pselect" "$1050")




  ;



# 1 "/usr/include/sys/_select.h" 1 3 4
# 39 "/usr/include/sys/_select.h" 3 4
int select(int, fd_set * restrict, fd_set * restrict,
  fd_set * restrict, struct timeval * restrict)




  __asm("_" "select" "$1050")




  ;
# 153 "/usr/include/sys/select.h" 2 3 4
# 663 "/usr/include/unistd.h" 2 3 4
# 676 "/usr/include/unistd.h" 3 4
typedef __darwin_uuid_t uuid_t;



void _Exit(int) __attribute__((noreturn));
int accessx_np(const struct accessx_descriptor *, size_t, int *, uid_t);
int acct(const char *);
int add_profil(char *, size_t, unsigned long, unsigned int);
void endusershell(void);
int execvP(const char *, const char *, char * const *);
char *fflagstostr(unsigned long);
int getdomainname(char *, int);
int getgrouplist(const char *, int, int *, int *);
int gethostuuid(uuid_t, const struct timespec *) __attribute__((availability(macosx,introduced=10.5)));
mode_t getmode(const void *, mode_t);
int getpeereid(int, uid_t *, gid_t *);
int getsgroups_np(int *, uuid_t);
char *getusershell(void);
int getwgroups_np(int *, uuid_t);
int initgroups(const char *, int);
int iruserok(unsigned long, int, const char *, const char *);
int iruserok_sa(const void *, int, int, const char *, const char *);
int issetugid(void);
char *mkdtemp(char *);
int mknod(const char *, mode_t, dev_t);
int mkpath_np(const char *path, mode_t omode) __attribute__((availability(macosx,introduced=10.8)));
int mkstemp(char *);
int mkstemps(char *, int);
char *mktemp(char *);
int nfssvc(int, void *);
int profil(char *, size_t, unsigned long, unsigned int);
int pthread_setugid_np(uid_t, gid_t);
int pthread_getugid_np( uid_t *, gid_t *);
int rcmd(char **, int, const char *, const char *, const char *, int *);
int rcmd_af(char **, int, const char *, const char *, const char *, int *,
  int);
int reboot(int);
int revoke(const char *);
int rresvport(int *);
int rresvport_af(int *, int);
int ruserok(const char *, int, const char *, const char *);
int setdomainname(const char *, int);
int setgroups(int, const gid_t *);
void sethostid(long);
int sethostname(const char *, int);

void setkey(const char *) __asm("_" "setkey" );



int setlogin(const char *);
void *setmode(const char *) __asm("_" "setmode" );
int setrgid(gid_t);
int setruid(uid_t);
int setsgroups_np(int, const uuid_t);
void setusershell(void);
int setwgroups_np(int, const uuid_t);
int strtofflags(char **, unsigned long *, unsigned long *);
int swapon(const char *);
int syscall(int, ...);
int ttyslot(void);
int undelete(const char *);
int unwhiteout(const char *);
void *valloc(size_t);

extern char *suboptarg;
int getsubopt(char **, char * const *, char **);



int fgetattrlist(int,void*,void*,size_t,unsigned int) __attribute__((availability(macosx,introduced=10.6)));
int fsetattrlist(int,void*,void*,size_t,unsigned int) __attribute__((availability(macosx,introduced=10.6)));
int getattrlist(const char*,void*,void*,size_t,unsigned int) __asm("_" "getattrlist" );
int setattrlist(const char*,void*,void*,size_t,unsigned int) __asm("_" "setattrlist" );
int exchangedata(const char*,const char*,unsigned int);
int getdirentriesattr(int,void*,void*,size_t,unsigned int*,unsigned int*,unsigned int*,unsigned int);
# 763 "/usr/include/unistd.h" 3 4
struct fssearchblock;
struct searchstate;

int searchfs(const char *, struct fssearchblock *, unsigned long *, unsigned int, unsigned int, struct searchstate *);
int fsctl(const char *,unsigned long,void*,unsigned int);
int ffsctl(int,unsigned long,void*,unsigned int) __attribute__((availability(macosx,introduced=10.6)));




int fsync_volume_np(int, int) __attribute__((availability(macosx,introduced=10.8)));
int sync_volume_np(const char *, int) __attribute__((availability(macosx,introduced=10.8)));

extern int optreset;
# 32 "/Users/skgchxngsxyz-osx/Downloads/lemon.c" 2
# 43 "/Users/skgchxngsxyz-osx/Downloads/lemon.c"
static int showPrecedenceConflict = 0;
static char *msort(char*,char**,int(*)(const char*,const char*));
# 70 "/Users/skgchxngsxyz-osx/Downloads/lemon.c"
static void lemon_addtext(
  char *zBuf,
  int *pnUsed,
  const char *zIn,
  int nIn,
  int iWidth
){
  if( nIn<0 ) for(nIn=0; zIn[nIn]; nIn++){}
  while( iWidth>nIn ){ zBuf[(*pnUsed)++] = ' '; iWidth--; }
  if( nIn==0 ) return;
  ((__builtin_object_size (&zBuf[*pnUsed], 0) != (size_t) -1) ? __builtin___memcpy_chk (&zBuf[*pnUsed], zIn, nIn, __builtin_object_size (&zBuf[*pnUsed], 0)) : __inline_memcpy_chk (&zBuf[*pnUsed], zIn, nIn));
  *pnUsed += nIn;
  while( (-iWidth)>nIn ){ zBuf[(*pnUsed)++] = ' '; iWidth++; }
  zBuf[*pnUsed] = 0;
}
static int lemon_vsprintf(char *str, const char *zFormat, va_list ap){
  int i, j, k, c;
  int nUsed = 0;
  const char *z;
  char zTemp[50];
  str[0] = 0;
  for(i=j=0; (c = zFormat[i])!=0; i++){
    if( c=='%' ){
      int iWidth = 0;
      lemon_addtext(str, &nUsed, &zFormat[j], i-j, 0);
      c = zFormat[++i];
      if( isdigit(c) || (c=='-' && isdigit(zFormat[i+1])) ){
        if( c=='-' ) i++;
        while( isdigit(zFormat[i]) ) iWidth = iWidth*10 + zFormat[i++] - '0';
        if( c=='-' ) iWidth = -iWidth;
        c = zFormat[i];
      }
      if( c=='d' ){
        int v = 32; /* int v = __builtin_va_arg(ap, int); */
        if( v<0 ){
          lemon_addtext(str, &nUsed, "-", 1, iWidth);
          v = -v;
        }else if( v==0 ){
          lemon_addtext(str, &nUsed, "0", 1, iWidth);
        }
        k = 0;
        while( v>0 ){
          k++;
          zTemp[sizeof(zTemp)-k] = (v%10) + '0';
          v /= 10;
        }
        lemon_addtext(str, &nUsed, &zTemp[sizeof(zTemp)-k], k, iWidth);
      }else if( c=='s' ){
        z = 12; /* z = __builtin_va_arg(ap, const char*); */
        lemon_addtext(str, &nUsed, z, -1, iWidth);
      }else if( c=='.' && memcmp(&zFormat[i], ".*s", 3)==0 ){
        i += 2;
        /* k = __builtin_va_arg(ap, int); */
        /* z = __builtin_va_arg(ap, const char*); */
        lemon_addtext(str, &nUsed, z, k, iWidth);
      }else if( c=='%' ){
        lemon_addtext(str, &nUsed, "%", 1, 0);
      }else{
        fprintf(__stderrp, "illegal format\n");
        exit(1);
      }
      j = i+1;
    }
  }
  lemon_addtext(str, &nUsed, &zFormat[j], i-j, 0);
  return nUsed;
}
static int lemon_sprintf(char *str, const char *format, ...){
  va_list ap;
  int rc;
  __builtin_va_start(ap, format);
  rc = lemon_vsprintf(str, format, ap);
  __builtin_va_end(ap);
  return rc;
}
static void lemon_strcpy(char *dest, const char *src){
  while( (*(dest++) = *(src++))!=0 ){}
}
static void lemon_strcat(char *dest, const char *src){
  while( *dest ) dest++;
  lemon_strcpy(dest, src);
}



struct rule;
struct lemon;
struct action;

static struct action *Action_new(void);
static struct action *Action_sort(struct action *);


void FindRulePrecedences();
void FindFirstSets();
void FindStates();
void FindLinks();
void FindFollowSets();
void FindActions();


void Configlist_init(void);
struct config *Configlist_add(struct rule *, int);
struct config *Configlist_addbasis(struct rule *, int);
void Configlist_closure(struct lemon *);
void Configlist_sort(void);
void Configlist_sortbasis(void);
struct config *Configlist_return(void);
struct config *Configlist_basis(void);
void Configlist_eat(struct config *);
void Configlist_reset(void);


void ErrorMsg(const char *, int,const char *, ...);


enum option_type { OPT_FLAG=1, OPT_INT, OPT_DBL, OPT_STR,
         OPT_FFLAG, OPT_FINT, OPT_FDBL, OPT_FSTR};
struct s_options {
  enum option_type type;
  const char *label;
  char *arg;
  const char *message;
};
int OptInit(char**,struct s_options*,FILE*);
int OptNArgs(void);
char *OptArg(int);
void OptErr(int);
void OptPrint(void);


void Parse(struct lemon *lemp);


struct plink *Plink_new(void);
void Plink_add(struct plink **, struct config *);
void Plink_copy(struct plink **, struct plink *);
void Plink_delete(struct plink *);


void Reprint(struct lemon *);
void ReportOutput(struct lemon *);
void ReportTable(struct lemon *, int);
void ReportHeader(struct lemon *);
void CompressTables(struct lemon *);
void ResortStates(struct lemon *);


void SetSize(int);
char *SetNew(void);
void SetFree(char*);
int SetAdd(char*,int);
int SetUnion(char *,char *);







typedef enum {LEMON_FALSE=0, LEMON_TRUE} Boolean;



enum symbol_type {
  TERMINAL,
  NONTERMINAL,
  MULTITERMINAL
};
enum e_assoc {
    LEFT,
    RIGHT,
    NONE,
    UNK
};
struct symbol {
  const char *name;
  int index;
  enum symbol_type type;
  struct rule *rule;
  struct symbol *fallback;
  int prec;
  enum e_assoc assoc;
  char *firstset;
  Boolean lambda;
  int useCnt;
  char *destructor;

  int destLineno;
  char *datatype;

  int dtnum;



  int nsubsym;
  struct symbol **subsym;
};



struct rule {
  struct symbol *lhs;
  const char *lhsalias;
  int lhsStart;
  int ruleline;
  int nrhs;
  struct symbol **rhs;
  const char **rhsalias;
  int line;
  const char *code;
  struct symbol *precsym;
  int index;
  Boolean canReduce;
  struct rule *nextlhs;
  struct rule *next;
};






enum cfgstatus {
  COMPLETE,
  INCOMPLETE
};
struct config {
  struct rule *rp;
  int dot;
  char *fws;
  struct plink *fplp;
  struct plink *bplp;
  struct state *stp;
  enum cfgstatus status;
  struct config *next;
  struct config *bp;
};

enum e_action {
  SHIFT,
  ACCEPT,
  REDUCE,
  ERROR,
  SSCONFLICT,
  SRCONFLICT,
  RRCONFLICT,
  SH_RESOLVED,
  RD_RESOLVED,
  NOT_USED
};


struct action {
  struct symbol *sp;
  enum e_action type;
  union {
    struct state *stp;
    struct rule *rp;
  } x;
  struct action *next;
  struct action *collide;
};



struct state {
  struct config *bp;
  struct config *cfp;
  int statenum;
  struct action *ap;
  int nTknAct, nNtAct;
  int iTknOfst, iNtOfst;
  int iDflt;
};





struct plink {
  struct config *cfp;
  struct plink *next;
};





struct lemon {
  struct state **sorted;
  struct rule *rule;
  int nstate;
  int nrule;
  int nsymbol;
  int nterminal;
  struct symbol **symbols;
  int errorcnt;
  struct symbol *errsym;
  struct symbol *wildcard;
  char *name;
  char *arg;
  char *tokentype;
  char *vartype;
  char *start;
  char *stacksize;
  char *include;
  char *error;
  char *overflow;
  char *failure;
  char *accept;
  char *extracode;
  char *tokendest;
  char *vardest;
  char *filename;
  char *outname;
  char *tokenprefix;
  int nconflict;
  int tablesize;
  int basisflag;
  int has_fallback;
  int nolinenosflag;
  char *argv0;
};
# 414 "/Users/skgchxngsxyz-osx/Downloads/lemon.c"
const char *Strsafe(const char *);

void Strsafe_init(void);
int Strsafe_insert(const char *);
const char *Strsafe_find(const char *);



struct symbol *Symbol_new(const char *);
int Symbolcmpp(const void *, const void *);
void Symbol_init(void);
int Symbol_insert(struct symbol *, const char *);
struct symbol *Symbol_find(const char *);
struct symbol *Symbol_Nth(int);
int Symbol_count(void);
struct symbol **Symbol_arrayof(void);



int Configcmp(const char *, const char *);
struct state *State_new(void);
void State_init(void);
int State_insert(struct state *, struct config *);
struct state *State_find(struct config *);
struct state **State_arrayof( );



void Configtable_init(void);
int Configtable_insert(struct config *);
struct config *Configtable_find(struct config *);
void Configtable_clear(int(*)(struct config *));







static struct action *Action_new(void){
  static struct action *freelist = 0;
  struct action *newaction;

  if( freelist==0 ){
    int i;
    int amt = 100;
    freelist = (struct action *)calloc(amt, sizeof(struct action));
    if( freelist==0 ){
      fprintf(__stderrp,"Unable to allocate memory for a new parser action.");
      exit(1);
    }
    for(i=0; i<amt-1; i++) freelist[i].next = &freelist[i+1];
    freelist[amt-1].next = 0;
  }
  newaction = freelist;
  freelist = freelist->next;
  return newaction;
}





static int actioncmp(
  struct action *ap1,
  struct action *ap2
){
  int rc;
  rc = ap1->sp->index - ap2->sp->index;
  if( rc==0 ){
    rc = (int)ap1->type - (int)ap2->type;
  }
  if( rc==0 && ap1->type==REDUCE ){
    rc = ap1->x.rp->index - ap2->x.rp->index;
  }
  if( rc==0 ){
    rc = (int) (ap2 - ap1);
  }
  return rc;
}


static struct action *Action_sort(
  struct action *ap
){
  ap = (struct action *)msort((char *)ap,(char **)&ap->next,
                              (int(*)(const char*,const char*))actioncmp);
  return ap;
}

void Action_add(
  struct action **app,
  enum e_action type,
  struct symbol *sp,
  char *arg
){
  struct action *newaction;
  newaction = Action_new();
  newaction->next = *app;
  *app = newaction;
  newaction->type = type;
  newaction->sp = sp;
  if( type==SHIFT ){
    newaction->x.stp = (struct state *)arg;
  }else{
    newaction->x.rp = (struct rule *)arg;
  }
}
# 547 "/Users/skgchxngsxyz-osx/Downloads/lemon.c"
struct lookahead_action {
  int lookahead;
  int action;
};
typedef struct acttab acttab;
struct acttab {
  int nAction;
  int nActionAlloc;
  struct lookahead_action
    *aAction,
    *aLookahead;
  int mnLookahead;
  int mnAction;
  int mxLookahead;
  int nLookahead;
  int nLookaheadAlloc;
};
# 575 "/Users/skgchxngsxyz-osx/Downloads/lemon.c"
void acttab_free(acttab *p){
  free( p->aAction );
  free( p->aLookahead );
  free( p );
}


acttab *acttab_alloc(void){
  acttab *p = (acttab *) calloc( 1, sizeof(*p) );
  if( p==0 ){
    fprintf(__stderrp,"Unable to allocate memory for a new acttab.");
    exit(1);
  }
  ((__builtin_object_size (p, 0) != (size_t) -1) ? __builtin___memset_chk (p, 0, sizeof(*p), __builtin_object_size (p, 0)) : __inline_memset_chk (p, 0, sizeof(*p)));
  return p;
}






void acttab_action(acttab *p, int lookahead, int action){
  if( p->nLookahead>=p->nLookaheadAlloc ){
    p->nLookaheadAlloc += 25;
    p->aLookahead = (struct lookahead_action *) realloc( p->aLookahead,
                             sizeof(p->aLookahead[0])*p->nLookaheadAlloc );
    if( p->aLookahead==0 ){
      fprintf(__stderrp,"malloc failed\n");
      exit(1);
    }
  }
  if( p->nLookahead==0 ){
    p->mxLookahead = lookahead;
    p->mnLookahead = lookahead;
    p->mnAction = action;
  }else{
    if( p->mxLookahead<lookahead ) p->mxLookahead = lookahead;
    if( p->mnLookahead>lookahead ){
      p->mnLookahead = lookahead;
      p->mnAction = action;
    }
  }
  p->aLookahead[p->nLookahead].lookahead = lookahead;
  p->aLookahead[p->nLookahead].action = action;
  p->nLookahead++;
}
# 630 "/Users/skgchxngsxyz-osx/Downloads/lemon.c"
int acttab_insert(acttab *p){
  int i, j, k, n;
  (__builtin_expect(!(p->nLookahead>0), 0) ? __assert_rtn(__func__, "/Users/skgchxngsxyz-osx/Downloads/lemon.c", 632, "p->nLookahead>0") : (void)0);





  n = p->mxLookahead + 1;
  if( p->nAction + n >= p->nActionAlloc ){
    int oldAlloc = p->nActionAlloc;
    p->nActionAlloc = p->nAction + n + p->nActionAlloc + 20;
    p->aAction = (struct lookahead_action *) realloc( p->aAction,
                          sizeof(p->aAction[0])*p->nActionAlloc);
    if( p->aAction==0 ){
      fprintf(__stderrp,"malloc failed\n");
      exit(1);
    }
    for(i=oldAlloc; i<p->nActionAlloc; i++){
      p->aAction[i].lookahead = -1;
      p->aAction[i].action = -1;
    }
  }







  for(i=p->nAction-1; i>=0; i--){
    if( p->aAction[i].lookahead==p->mnLookahead ){


      if( p->aAction[i].action!=p->mnAction ) continue;
      for(j=0; j<p->nLookahead; j++){
        k = p->aLookahead[j].lookahead - p->mnLookahead + i;
        if( k<0 || k>=p->nAction ) break;
        if( p->aLookahead[j].lookahead!=p->aAction[k].lookahead ) break;
        if( p->aLookahead[j].action!=p->aAction[k].action ) break;
      }
      if( j<p->nLookahead ) continue;



      n = 0;
      for(j=0; j<p->nAction; j++){
        if( p->aAction[j].lookahead<0 ) continue;
        if( p->aAction[j].lookahead==j+p->mnLookahead-i ) n++;
      }
      if( n==p->nLookahead ){
        break;
      }
    }
  }





  if( i<0 ){




    for(i=0; i<p->nActionAlloc - p->mxLookahead; i++){
      if( p->aAction[i].lookahead<0 ){
        for(j=0; j<p->nLookahead; j++){
          k = p->aLookahead[j].lookahead - p->mnLookahead + i;
          if( k<0 ) break;
          if( p->aAction[k].lookahead>=0 ) break;
        }
        if( j<p->nLookahead ) continue;
        for(j=0; j<p->nAction; j++){
          if( p->aAction[j].lookahead==j+p->mnLookahead-i ) break;
        }
        if( j==p->nAction ){
          break;
        }
      }
    }
  }

  for(j=0; j<p->nLookahead; j++){
    k = p->aLookahead[j].lookahead - p->mnLookahead + i;
    p->aAction[k] = p->aLookahead[j];
    if( k>=p->nAction ) p->nAction = k+1;
  }
  p->nLookahead = 0;



  return i - p->mnLookahead;
}
# 740 "/Users/skgchxngsxyz-osx/Downloads/lemon.c"
void FindRulePrecedences(struct lemon *xp)
{
  struct rule *rp;
  for(rp=xp->rule; rp; rp=rp->next){
    if( rp->precsym==0 ){
      int i, j;
      for(i=0; i<rp->nrhs && rp->precsym==0; i++){
        struct symbol *sp = rp->rhs[i];
        if( sp->type==MULTITERMINAL ){
          for(j=0; j<sp->nsubsym; j++){
            if( sp->subsym[j]->prec>=0 ){
              rp->precsym = sp->subsym[j];
              break;
            }
          }
        }else if( sp->prec>=0 ){
          rp->precsym = rp->rhs[i];
        }
      }
    }
  }
  return;
}






void FindFirstSets(struct lemon *lemp)
{
  int i, j;
  struct rule *rp;
  int progress;

  for(i=0; i<lemp->nsymbol; i++){
    lemp->symbols[i]->lambda = LEMON_FALSE;
  }
  for(i=lemp->nterminal; i<lemp->nsymbol; i++){
    lemp->symbols[i]->firstset = SetNew();
  }


  do{
    progress = 0;
    for(rp=lemp->rule; rp; rp=rp->next){
      if( rp->lhs->lambda ) continue;
      for(i=0; i<rp->nrhs; i++){
        struct symbol *sp = rp->rhs[i];
        (__builtin_expect(!(sp->type==NONTERMINAL || sp->lambda==LEMON_FALSE), 0) ? __assert_rtn(__func__, "/Users/skgchxngsxyz-osx/Downloads/lemon.c", 789, "sp->type==NONTERMINAL || sp->lambda==LEMON_FALSE") : (void)0);
        if( sp->lambda==LEMON_FALSE ) break;
      }
      if( i==rp->nrhs ){
        rp->lhs->lambda = LEMON_TRUE;
        progress = 1;
      }
    }
  }while( progress );


  do{
    struct symbol *s1, *s2;
    progress = 0;
    for(rp=lemp->rule; rp; rp=rp->next){
      s1 = rp->lhs;
      for(i=0; i<rp->nrhs; i++){
        s2 = rp->rhs[i];
        if( s2->type==TERMINAL ){
          progress += SetAdd(s1->firstset,s2->index);
          break;
        }else if( s2->type==MULTITERMINAL ){
          for(j=0; j<s2->nsubsym; j++){
            progress += SetAdd(s1->firstset,s2->subsym[j]->index);
          }
          break;
        }else if( s1==s2 ){
          if( s1->lambda==LEMON_FALSE ) break;
        }else{
          progress += SetUnion(s1->firstset,s2->firstset);
          if( s2->lambda==LEMON_FALSE ) break;
        }
      }
    }
  }while( progress );
  return;
}





        struct state *getstate(struct lemon *);
void FindStates(struct lemon *lemp)
{
  struct symbol *sp;
  struct rule *rp;

  Configlist_init();


  if( lemp->start ){
    sp = Symbol_find(lemp->start);
    if( sp==0 ){
      ErrorMsg(lemp->filename,0,
"The specified start symbol \"%s\" is not in a nonterminal of the grammar.  \"%s\" will be used as the start symbol instead.",lemp->start,lemp->rule->lhs->name);


      lemp->errorcnt++;
      sp = lemp->rule->lhs;
    }
  }else{
    sp = lemp->rule->lhs;
  }




  for(rp=lemp->rule; rp; rp=rp->next){
    int i;
    for(i=0; i<rp->nrhs; i++){
      if( rp->rhs[i]==sp ){
        ErrorMsg(lemp->filename,0,
"The start symbol \"%s\" occurs on the right-hand side of a rule. This will result in a parser which does not work properly.",sp->name);


        lemp->errorcnt++;
      }
    }
  }




  for(rp=sp->rule; rp; rp=rp->nextlhs){
    struct config *newcfp;
    rp->lhsStart = 1;
    newcfp = Configlist_addbasis(rp,0);
    SetAdd(newcfp->fws,0);
  }




  (void)getstate(lemp);
  return;
}




        void buildshifts(struct lemon *, struct state *);
        struct state *getstate(struct lemon *lemp)
{
  struct config *cfp, *bp;
  struct state *stp;



  Configlist_sortbasis();
  bp = Configlist_basis();


  stp = State_find(bp);
  if( stp ){



    struct config *x, *y;
    for(x=bp, y=stp->bp; x && y; x=x->bp, y=y->bp){
      Plink_copy(&y->bplp,x->bplp);
      Plink_delete(x->fplp);
      x->fplp = x->bplp = 0;
    }
    cfp = Configlist_return();
    Configlist_eat(cfp);
  }else{

    Configlist_closure(lemp);
    Configlist_sort();
    cfp = Configlist_return();
    stp = State_new();
    if((stp)==0){ extern void memory_error(); memory_error(); };
    stp->bp = bp;
    stp->cfp = cfp;
    stp->statenum = lemp->nstate++;
    stp->ap = 0;
    State_insert(stp,stp->bp);
    buildshifts(lemp,stp);
  }
  return stp;
}




int same_symbol(struct symbol *a, struct symbol *b)
{
  int i;
  if( a==b ) return 1;
  if( a->type!=MULTITERMINAL ) return 0;
  if( b->type!=MULTITERMINAL ) return 0;
  if( a->nsubsym!=b->nsubsym ) return 0;
  for(i=0; i<a->nsubsym; i++){
    if( a->subsym[i]!=b->subsym[i] ) return 0;
  }
  return 1;
}




        void buildshifts(struct lemon *lemp, struct state *stp)
{
  struct config *cfp;
  struct config *bcfp;
  struct config *newcfg;
  struct symbol *sp;
  struct symbol *bsp;
  struct state *newstp;



  for(cfp=stp->cfp; cfp; cfp=cfp->next) cfp->status = INCOMPLETE;


  for(cfp=stp->cfp; cfp; cfp=cfp->next){
    if( cfp->status==COMPLETE ) continue;
    if( cfp->dot>=cfp->rp->nrhs ) continue;
    Configlist_reset();
    sp = cfp->rp->rhs[cfp->dot];




    for(bcfp=cfp; bcfp; bcfp=bcfp->next){
      if( bcfp->status==COMPLETE ) continue;
      if( bcfp->dot>=bcfp->rp->nrhs ) continue;
      bsp = bcfp->rp->rhs[bcfp->dot];
      if( !same_symbol(bsp,sp) ) continue;
      bcfp->status = COMPLETE;
      newcfg = Configlist_addbasis(bcfp->rp,bcfp->dot+1);
      Plink_add(&newcfg->bplp,bcfp);
    }



    newstp = getstate(lemp);



    if( sp->type==MULTITERMINAL ){
      int i;
      for(i=0; i<sp->nsubsym; i++){
        Action_add(&stp->ap,SHIFT,sp->subsym[i],(char*)newstp);
      }
    }else{
      Action_add(&stp->ap,SHIFT,sp,(char *)newstp);
    }
  }
}




void FindLinks(struct lemon *lemp)
{
  int i;
  struct config *cfp, *other;
  struct state *stp;
  struct plink *plp;




  for(i=0; i<lemp->nstate; i++){
    stp = lemp->sorted[i];
    for(cfp=stp->cfp; cfp; cfp=cfp->next){
      cfp->stp = stp;
    }
  }



  for(i=0; i<lemp->nstate; i++){
    stp = lemp->sorted[i];
    for(cfp=stp->cfp; cfp; cfp=cfp->next){
      for(plp=cfp->bplp; plp; plp=plp->next){
        other = plp->cfp;
        Plink_add(&other->fplp,cfp);
      }
    }
  }
}






void FindFollowSets(struct lemon *lemp)
{
  int i;
  struct config *cfp;
  struct plink *plp;
  int progress;
  int change;

  for(i=0; i<lemp->nstate; i++){
    for(cfp=lemp->sorted[i]->cfp; cfp; cfp=cfp->next){
      cfp->status = INCOMPLETE;
    }
  }

  do{
    progress = 0;
    for(i=0; i<lemp->nstate; i++){
      for(cfp=lemp->sorted[i]->cfp; cfp; cfp=cfp->next){
        if( cfp->status==COMPLETE ) continue;
        for(plp=cfp->fplp; plp; plp=plp->next){
          change = SetUnion(plp->cfp->fws,cfp->fws);
          if( change ){
            plp->cfp->status = INCOMPLETE;
            progress = 1;
          }
        }
        cfp->status = COMPLETE;
      }
    }
  }while( progress );
}

static int resolve_conflict(struct action *,struct action *);



void FindActions(struct lemon *lemp)
{
  int i,j;
  struct config *cfp;
  struct state *stp;
  struct symbol *sp;
  struct rule *rp;





  for(i=0; i<lemp->nstate; i++){
    stp = lemp->sorted[i];
    for(cfp=stp->cfp; cfp; cfp=cfp->next){
      if( cfp->rp->nrhs==cfp->dot ){
        for(j=0; j<lemp->nterminal; j++){
          if( (cfp->fws[j]) ){


            Action_add(&stp->ap,REDUCE,lemp->symbols[j],(char *)cfp->rp);
          }
        }
      }
    }
  }


  if( lemp->start ){
    sp = Symbol_find(lemp->start);
    if( sp==0 ) sp = lemp->rule->lhs;
  }else{
    sp = lemp->rule->lhs;
  }



  Action_add(&lemp->sorted[0]->ap,ACCEPT,sp,0);


  for(i=0; i<lemp->nstate; i++){
    struct action *ap, *nap;
    struct state *stp;
    stp = lemp->sorted[i];

    stp->ap = Action_sort(stp->ap);
    for(ap=stp->ap; ap && ap->next; ap=ap->next){
      for(nap=ap->next; nap && nap->sp==ap->sp; nap=nap->next){


         lemp->nconflict += resolve_conflict(ap,nap);
      }
    }
  }


  for(rp=lemp->rule; rp; rp=rp->next) rp->canReduce = LEMON_FALSE;
  for(i=0; i<lemp->nstate; i++){
    struct action *ap;
    for(ap=lemp->sorted[i]->ap; ap; ap=ap->next){
      if( ap->type==REDUCE ) ap->x.rp->canReduce = LEMON_TRUE;
    }
  }
  for(rp=lemp->rule; rp; rp=rp->next){
    if( rp->canReduce ) continue;
    ErrorMsg(lemp->filename,rp->ruleline,"This rule can not be reduced.\n");
    lemp->errorcnt++;
  }
}
# 1158 "/Users/skgchxngsxyz-osx/Downloads/lemon.c"
static int resolve_conflict(
  struct action *apx,
  struct action *apy
){
  struct symbol *spx, *spy;
  int errcnt = 0;
  (__builtin_expect(!(apx->sp==apy->sp), 0) ? __assert_rtn(__func__, "/Users/skgchxngsxyz-osx/Downloads/lemon.c", 1164, "apx->sp==apy->sp") : (void)0);
  if( apx->type==SHIFT && apy->type==SHIFT ){
    apy->type = SSCONFLICT;
    errcnt++;
  }
  if( apx->type==SHIFT && apy->type==REDUCE ){
    spx = apx->sp;
    spy = apy->x.rp->precsym;
    if( spy==0 || spx->prec<0 || spy->prec<0 ){

      apy->type = SRCONFLICT;
      errcnt++;
    }else if( spx->prec>spy->prec ){
      apy->type = RD_RESOLVED;
    }else if( spx->prec<spy->prec ){
      apx->type = SH_RESOLVED;
    }else if( spx->prec==spy->prec && spx->assoc==RIGHT ){
      apy->type = RD_RESOLVED;
    }else if( spx->prec==spy->prec && spx->assoc==LEFT ){
      apx->type = SH_RESOLVED;
    }else{
      (__builtin_expect(!(spx->prec==spy->prec && spx->assoc==NONE), 0) ? __assert_rtn(__func__, "/Users/skgchxngsxyz-osx/Downloads/lemon.c", 1185, "spx->prec==spy->prec && spx->assoc==NONE") : (void)0);
      apx->type = ERROR;
    }
  }else if( apx->type==REDUCE && apy->type==REDUCE ){
    spx = apx->x.rp->precsym;
    spy = apy->x.rp->precsym;
    if( spx==0 || spy==0 || spx->prec<0 ||
    spy->prec<0 || spx->prec==spy->prec ){
      apy->type = RRCONFLICT;
      errcnt++;
    }else if( spx->prec>spy->prec ){
      apy->type = RD_RESOLVED;
    }else if( spx->prec<spy->prec ){
      apx->type = RD_RESOLVED;
    }
  }else{
    (__builtin_expect(!(apx->type==SH_RESOLVED || apx->type==RD_RESOLVED || apx->type==SSCONFLICT || apx->type==SRCONFLICT || apx->type==RRCONFLICT || apy->type==SH_RESOLVED || apy->type==RD_RESOLVED || apy->type==SSCONFLICT || apy->type==SRCONFLICT || apy->type==RRCONFLICT), 0) ? __assert_rtn(__func__, "/Users/skgchxngsxyz-osx/Downloads/lemon.c", 1212, "apx->type==SH_RESOLVED || apx->type==RD_RESOLVED || apx->type==SSCONFLICT || apx->type==SRCONFLICT || apx->type==RRCONFLICT || apy->type==SH_RESOLVED || apy->type==RD_RESOLVED || apy->type==SSCONFLICT || apy->type==SRCONFLICT || apy->type==RRCONFLICT") : (void)0);
# 1216 "/Users/skgchxngsxyz-osx/Downloads/lemon.c"
  }
  return errcnt;
}






static struct config *freelist = 0;
static struct config *current = 0;
static struct config **currentend = 0;
static struct config *basis = 0;
static struct config **basisend = 0;


        struct config *newconfig(){
  struct config *newcfg;
  if( freelist==0 ){
    int i;
    int amt = 3;
    freelist = (struct config *)calloc( amt, sizeof(struct config) );
    if( freelist==0 ){
      fprintf(__stderrp,"Unable to allocate memory for a new configuration.");
      exit(1);
    }
    for(i=0; i<amt-1; i++) freelist[i].next = &freelist[i+1];
    freelist[amt-1].next = 0;
  }
  newcfg = freelist;
  freelist = freelist->next;
  return newcfg;
}


        void deleteconfig(struct config *old)
{
  old->next = freelist;
  freelist = old;
}


void Configlist_init(){
  current = 0;
  currentend = &current;
  basis = 0;
  basisend = &basis;
  Configtable_init();
  return;
}


void Configlist_reset(){
  current = 0;
  currentend = &current;
  basis = 0;
  basisend = &basis;
  Configtable_clear(0);
  return;
}


struct config *Configlist_add(
  struct rule *rp,
  int dot
){
  struct config *cfp, model;

  (__builtin_expect(!(currentend!=0), 0) ? __assert_rtn(__func__, "/Users/skgchxngsxyz-osx/Downloads/lemon.c", 1284, "currentend!=0") : (void)0);
  model.rp = rp;
  model.dot = dot;
  cfp = Configtable_find(&model);
  if( cfp==0 ){
    cfp = newconfig();
    cfp->rp = rp;
    cfp->dot = dot;
    cfp->fws = SetNew();
    cfp->stp = 0;
    cfp->fplp = cfp->bplp = 0;
    cfp->next = 0;
    cfp->bp = 0;
    *currentend = cfp;
    currentend = &cfp->next;
    Configtable_insert(cfp);
  }
  return cfp;
}


struct config *Configlist_addbasis(struct rule *rp, int dot)
{
  struct config *cfp, model;

  (__builtin_expect(!(basisend!=0), 0) ? __assert_rtn(__func__, "/Users/skgchxngsxyz-osx/Downloads/lemon.c", 1309, "basisend!=0") : (void)0);
  (__builtin_expect(!(currentend!=0), 0) ? __assert_rtn(__func__, "/Users/skgchxngsxyz-osx/Downloads/lemon.c", 1310, "currentend!=0") : (void)0);
  model.rp = rp;
  model.dot = dot;
  cfp = Configtable_find(&model);
  if( cfp==0 ){
    cfp = newconfig();
    cfp->rp = rp;
    cfp->dot = dot;
    cfp->fws = SetNew();
    cfp->stp = 0;
    cfp->fplp = cfp->bplp = 0;
    cfp->next = 0;
    cfp->bp = 0;
    *currentend = cfp;
    currentend = &cfp->next;
    *basisend = cfp;
    basisend = &cfp->bp;
    Configtable_insert(cfp);
  }
  return cfp;
}


void Configlist_closure(struct lemon *lemp)
{
  struct config *cfp, *newcfp;
  struct rule *rp, *newrp;
  struct symbol *sp, *xsp;
  int i, dot;

  (__builtin_expect(!(currentend!=0), 0) ? __assert_rtn(__func__, "/Users/skgchxngsxyz-osx/Downloads/lemon.c", 1340, "currentend!=0") : (void)0);
  for(cfp=current; cfp; cfp=cfp->next){
    rp = cfp->rp;
    dot = cfp->dot;
    if( dot>=rp->nrhs ) continue;
    sp = rp->rhs[dot];
    if( sp->type==NONTERMINAL ){
      if( sp->rule==0 && sp!=lemp->errsym ){
        ErrorMsg(lemp->filename,rp->line,"Nonterminal \"%s\" has no rules.",
          sp->name);
        lemp->errorcnt++;
      }
      for(newrp=sp->rule; newrp; newrp=newrp->nextlhs){
        newcfp = Configlist_add(newrp,0);
        for(i=dot+1; i<rp->nrhs; i++){
          xsp = rp->rhs[i];
          if( xsp->type==TERMINAL ){
            SetAdd(newcfp->fws,xsp->index);
            break;
          }else if( xsp->type==MULTITERMINAL ){
            int k;
            for(k=0; k<xsp->nsubsym; k++){
              SetAdd(newcfp->fws, xsp->subsym[k]->index);
            }
            break;
          }else{
            SetUnion(newcfp->fws,xsp->firstset);
            if( xsp->lambda==LEMON_FALSE ) break;
          }
        }
        if( i==rp->nrhs ) Plink_add(&cfp->fplp,newcfp);
      }
    }
  }
  return;
}


void Configlist_sort(){
  current = (struct config *)msort((char *)current,(char **)&(current->next),Configcmp);
  currentend = 0;
  return;
}


void Configlist_sortbasis(){
  basis = (struct config *)msort((char *)current,(char **)&(current->bp),Configcmp);
  basisend = 0;
  return;
}



struct config *Configlist_return(){
  struct config *old;
  old = current;
  current = 0;
  currentend = 0;
  return old;
}



struct config *Configlist_basis(){
  struct config *old;
  old = basis;
  basis = 0;
  basisend = 0;
  return old;
}


void Configlist_eat(struct config *cfp)
{
  struct config *nextcfp;
  for(; cfp; cfp=nextcfp){
    nextcfp = cfp->next;
    (__builtin_expect(!(cfp->fplp==0), 0) ? __assert_rtn(__func__, "/Users/skgchxngsxyz-osx/Downloads/lemon.c", 1417, "cfp->fplp==0") : (void)0);
    (__builtin_expect(!(cfp->bplp==0), 0) ? __assert_rtn(__func__, "/Users/skgchxngsxyz-osx/Downloads/lemon.c", 1418, "cfp->bplp==0") : (void)0);
    if( cfp->fws ) SetFree(cfp->fws);
    deleteconfig(cfp);
  }
  return;
}





void ErrorMsg(const char *filename, int lineno, const char *format, ...){
  va_list ap;
  fprintf(__stderrp, "%s:%d: ", filename, lineno);
  __builtin_va_start(ap, format);
  vfprintf(__stderrp,format,ap);
  __builtin_va_end(ap);
  fprintf(__stderrp, "\n");
}
# 1445 "/Users/skgchxngsxyz-osx/Downloads/lemon.c"
void memory_error(){
  fprintf(__stderrp,"Out of memory.  Aborting...\n");
  exit(1);
}

static int nDefine = 0;
static char **azDefine = 0;




static void handle_D_option(char *z){
  char **paz;
  nDefine++;
  azDefine = (char **) realloc(azDefine, sizeof(azDefine[0])*nDefine);
  if( azDefine==0 ){
    fprintf(__stderrp,"out of memory\n");
    exit(1);
  }
  paz = &azDefine[nDefine-1];
  *paz = (char *) malloc( ((int)strlen(z))+1 );
  if( *paz==0 ){
    fprintf(__stderrp,"out of memory\n");
    exit(1);
  }
  lemon_strcpy(*paz, z);
  for(z=*paz; *z && *z!='='; z++){}
  *z = 0;
}

static char *user_templatename = ((void *)0);
static void handle_T_option(char *z){
  user_templatename = (char *) malloc( ((int)strlen(z))+1 );
  if( user_templatename==0 ){
    memory_error();
  }
  lemon_strcpy(user_templatename, z);
}


int main(int argc, char **argv)
{
  static int version = 0;
  static int rpflag = 0;
  static int basisflag = 0;
  static int compress = 0;
  static int quiet = 0;
  static int statistics = 0;
  static int mhflag = 0;
  static int nolinenosflag = 0;
  static int noResort = 0;
  static struct s_options options[] = {
    {OPT_FLAG, "b", (char*)&basisflag, "Print only the basis in report."},
    {OPT_FLAG, "c", (char*)&compress, "Don't compress the action table."},
    {OPT_FSTR, "D", (char*)handle_D_option, "Define an %ifdef macro."},
    {OPT_FSTR, "T", (char*)handle_T_option, "Specify a template file."},
    {OPT_FLAG, "g", (char*)&rpflag, "Print grammar without actions."},
    {OPT_FLAG, "m", (char*)&mhflag, "Output a makeheaders compatible file."},
    {OPT_FLAG, "l", (char*)&nolinenosflag, "Do not print #line statements."},
    {OPT_FLAG, "p", (char*)&showPrecedenceConflict,
                    "Show conflicts resolved by precedence rules"},
    {OPT_FLAG, "q", (char*)&quiet, "(Quiet) Don't print the report file."},
    {OPT_FLAG, "r", (char*)&noResort, "Do not sort or renumber states"},
    {OPT_FLAG, "s", (char*)&statistics,
                                   "Print parser stats to standard output."},
    {OPT_FLAG, "x", (char*)&version, "Print the version number."},
    {OPT_FLAG,0,0,0}
  };
  int i;
  int exitcode;
  struct lemon lem;

  OptInit(argv,options,__stderrp);
  if( version ){
     printf("Lemon version 1.0\n");
     exit(0);
  }
  if( OptNArgs()!=1 ){
    fprintf(__stderrp,"Exactly one filename argument is required.\n");
    exit(1);
  }
  ((__builtin_object_size (&lem, 0) != (size_t) -1) ? __builtin___memset_chk (&lem, 0, sizeof(lem), __builtin_object_size (&lem, 0)) : __inline_memset_chk (&lem, 0, sizeof(lem)));
  lem.errorcnt = 0;


  Strsafe_init();
  Symbol_init();
  State_init();
  lem.argv0 = argv[0];
  lem.filename = OptArg(0);
  lem.basisflag = basisflag;
  lem.nolinenosflag = nolinenosflag;
  Symbol_new("$");
  lem.errsym = Symbol_new("error");
  lem.errsym->useCnt = 0;


  Parse(&lem);
  if( lem.errorcnt ) exit(lem.errorcnt);
  if( lem.nrule==0 ){
    fprintf(__stderrp,"Empty grammar.\n");
    exit(1);
  }


  Symbol_new("{default}");
  lem.nsymbol = Symbol_count();
  lem.symbols = Symbol_arrayof();
  for(i=0; i<lem.nsymbol; i++) lem.symbols[i]->index = i;
  qsort(lem.symbols,lem.nsymbol,sizeof(struct symbol*), Symbolcmpp);
  for(i=0; i<lem.nsymbol; i++) lem.symbols[i]->index = i;
  while( lem.symbols[i-1]->type==MULTITERMINAL ){ i--; }
  (__builtin_expect(!(strcmp(lem.symbols[i-1]->name,"{default}")==0), 0) ? __assert_rtn(__func__, "/Users/skgchxngsxyz-osx/Downloads/lemon.c", 1557, "strcmp(lem.symbols[i-1]->name,\"{default}\")==0") : (void)0);
  lem.nsymbol = i - 1;
  for(i=1; isupper(lem.symbols[i]->name[0]); i++);
  lem.nterminal = i;


  if( rpflag ){
    Reprint(&lem);
  }else{

    SetSize(lem.nterminal+1);


    FindRulePrecedences(&lem);



    FindFirstSets(&lem);



    lem.nstate = 0;
    FindStates(&lem);
    lem.sorted = State_arrayof();


    FindLinks(&lem);


    FindFollowSets(&lem);


    FindActions(&lem);


    if( compress==0 ) CompressTables(&lem);




    if( noResort==0 ) ResortStates(&lem);


    if( !quiet ) ReportOutput(&lem);


    ReportTable(&lem, mhflag);




    if( !mhflag ) ReportHeader(&lem);
  }
  if( statistics ){
    printf("Parser statistics: %d terminals, %d nonterminals, %d rules\n",
      lem.nterminal, lem.nsymbol - lem.nterminal, lem.nrule);
    printf("                   %d states, %d parser table entries, %d conflicts\n",
      lem.nstate, lem.tablesize, lem.nconflict);
  }
  if( lem.nconflict > 0 ){
    fprintf(__stderrp,"%d parsing conflicts.\n",lem.nconflict);
  }


  exitcode = ((lem.errorcnt > 0) || (lem.nconflict > 0)) ? 1 : 0;
  exit(exitcode);
  return (exitcode);
}
# 1669 "/Users/skgchxngsxyz-osx/Downloads/lemon.c"
static char *merge(
  char *a,
  char *b,
  int (*cmp)(const char*,const char*),
  int offset
){
  char *ptr, *head;

  if( a==0 ){
    head = b;
  }else if( b==0 ){
    head = a;
  }else{
    if( (*cmp)(a,b)<=0 ){
      ptr = a;
      a = (*(char**)(((char*)a)+offset));
    }else{
      ptr = b;
      b = (*(char**)(((char*)b)+offset));
    }
    head = ptr;
    while( a && b ){
      if( (*cmp)(a,b)<=0 ){
        (*(char**)(((char*)ptr)+offset)) = a;
        ptr = a;
        a = (*(char**)(((char*)a)+offset));
      }else{
        (*(char**)(((char*)ptr)+offset)) = b;
        ptr = b;
        b = (*(char**)(((char*)b)+offset));
      }
    }
    if( a ) (*(char**)(((char*)ptr)+offset)) = a;
    else (*(char**)(((char*)ptr)+offset)) = b;
  }
  return head;
}
# 1721 "/Users/skgchxngsxyz-osx/Downloads/lemon.c"
static char *msort(
  char *list,
  char **next,
  int (*cmp)(const char*,const char*)
){
  unsigned long offset;
  char *ep;
  char *set[30];
  int i;
  offset = (unsigned long)next - (unsigned long)list;
  for(i=0; i<30; i++) set[i] = 0;
  while( list ){
    ep = list;
    list = (*(char**)(((char*)list)+offset));
    (*(char**)(((char*)ep)+offset)) = 0;
    for(i=0; i<30 -1 && set[i]!=0; i++){
      ep = merge(ep,set[i],cmp,offset);
      set[i] = 0;
    }
    set[i] = ep;
  }
  ep = 0;
  for(i=0; i<30; i++) if( set[i] ) ep = merge(set[i],ep,cmp,offset);
  return ep;
}

static char **argv;
static struct s_options *op;
static FILE *errstream;







static void errline(int n, int k, FILE *err)
{
  int spcnt, i;
  if( argv[0] ) fprintf(err,"%s",argv[0]);
  spcnt = ((int)strlen(argv[0])) + 1;
  for(i=1; i<n && argv[i]; i++){
    fprintf(err," %s",argv[i]);
    spcnt += ((int)strlen(argv[i]))+1;
  }
  spcnt += k;
  for(; argv[i]; i++) fprintf(err," %s",argv[i]);
  if( spcnt<20 ){
    fprintf(err,"\n%*s^-- here\n",spcnt,"");
  }else{
    fprintf(err,"\n%*shere --^\n",spcnt-7,"");
  }
}





static int argindex(int n)
{
  int i;
  int dashdash = 0;
  if( argv!=0 && *argv!=0 ){
    for(i=1; argv[i]; i++){
      if( dashdash || !((argv[i])[0]=='-'||(argv[i])[0]=='+'||strchr((argv[i]),'=')!=0) ){
        if( n==0 ) return i;
        n--;
      }
      if( strcmp(argv[i],"--")==0 ) dashdash = 1;
    }
  }
  return -1;
}

static char emsg[] = "Command line syntax error: ";




static int handleflags(int i, FILE *err)
{
  int v;
  int errcnt = 0;
  int j;
  for(j=0; op[j].label; j++){
    if( strncmp(&argv[i][1],op[j].label,((int)strlen(op[j].label)))==0 ) break;
  }
  v = argv[i][0]=='-' ? 1 : 0;
  if( op[j].label==0 ){
    if( err ){
      fprintf(err,"%sundefined option.\n",emsg);
      errline(i,1,err);
    }
    errcnt++;
  }else if( op[j].type==OPT_FLAG ){
    *((int*)op[j].arg) = v;
  }else if( op[j].type==OPT_FFLAG ){
    (*(void(*)(int))(op[j].arg))(v);
  }else if( op[j].type==OPT_FSTR ){
    (*(void(*)(char *))(op[j].arg))(&argv[i][2]);
  }else{
    if( err ){
      fprintf(err,"%smissing argument on switch.\n",emsg);
      errline(i,1,err);
    }
    errcnt++;
  }
  return errcnt;
}




static int handleswitch(int i, FILE *err)
{
  int lv = 0;
  double dv = 0.0;
  char *sv = 0, *end;
  char *cp;
  int j;
  int errcnt = 0;
  cp = strchr(argv[i],'=');
  (__builtin_expect(!(cp!=0), 0) ? __assert_rtn(__func__, "/Users/skgchxngsxyz-osx/Downloads/lemon.c", 1843, "cp!=0") : (void)0);
  *cp = 0;
  for(j=0; op[j].label; j++){
    if( strcmp(argv[i],op[j].label)==0 ) break;
  }
  *cp = '=';
  if( op[j].label==0 ){
    if( err ){
      fprintf(err,"%sundefined option.\n",emsg);
      errline(i,0,err);
    }
    errcnt++;
  }else{
    cp++;
    switch( op[j].type ){
      case OPT_FLAG:
      case OPT_FFLAG:
        if( err ){
          fprintf(err,"%soption requires an argument.\n",emsg);
          errline(i,0,err);
        }
        errcnt++;
        break;
      case OPT_DBL:
      case OPT_FDBL:
        dv = strtod(cp,&end);
        if( *end ){
          if( err ){
            fprintf(err,"%sillegal character in floating-point argument.\n",emsg);
            errline(i,((unsigned long)end)-(unsigned long)argv[i],err);
          }
          errcnt++;
        }
        break;
      case OPT_INT:
      case OPT_FINT:
        lv = strtol(cp,&end,0);
        if( *end ){
          if( err ){
            fprintf(err,"%sillegal character in integer argument.\n",emsg);
            errline(i,((unsigned long)end)-(unsigned long)argv[i],err);
          }
          errcnt++;
        }
        break;
      case OPT_STR:
      case OPT_FSTR:
        sv = cp;
        break;
    }
    switch( op[j].type ){
      case OPT_FLAG:
      case OPT_FFLAG:
        break;
      case OPT_DBL:
        *(double*)(op[j].arg) = dv;
        break;
      case OPT_FDBL:
        (*(void(*)(double))(op[j].arg))(dv);
        break;
      case OPT_INT:
        *(int*)(op[j].arg) = lv;
        break;
      case OPT_FINT:
        (*(void(*)(int))(op[j].arg))((int)lv);
        break;
      case OPT_STR:
        *(char**)(op[j].arg) = sv;
        break;
      case OPT_FSTR:
        (*(void(*)(char *))(op[j].arg))(sv);
        break;
    }
  }
  return errcnt;
}

int OptInit(char **a, struct s_options *o, FILE *err)
{
  int errcnt = 0;
  argv = a;
  op = o;
  errstream = err;
  if( argv && *argv && op ){
    int i;
    for(i=1; argv[i]; i++){
      if( argv[i][0]=='+' || argv[i][0]=='-' ){
        errcnt += handleflags(i,err);
      }else if( strchr(argv[i],'=') ){
        errcnt += handleswitch(i,err);
      }
    }
  }
  if( errcnt>0 ){
    fprintf(err,"Valid command line options for \"%s\" are:\n",*a);
    OptPrint();
    exit(1);
  }
  return 0;
}

int OptNArgs(){
  int cnt = 0;
  int dashdash = 0;
  int i;
  if( argv!=0 && argv[0]!=0 ){
    for(i=1; argv[i]; i++){
      if( dashdash || !((argv[i])[0]=='-'||(argv[i])[0]=='+'||strchr((argv[i]),'=')!=0) ) cnt++;
      if( strcmp(argv[i],"--")==0 ) dashdash = 1;
    }
  }
  return cnt;
}

char *OptArg(int n)
{
  int i;
  i = argindex(n);
  return i>=0 ? argv[i] : 0;
}

void OptErr(int n)
{
  int i;
  i = argindex(n);
  if( i>=0 ) errline(i,0,errstream);
}

void OptPrint(){
  int i;
  int max, len;
  max = 0;
  for(i=0; op[i].label; i++){
    len = ((int)strlen(op[i].label)) + 1;
    switch( op[i].type ){
      case OPT_FLAG:
      case OPT_FFLAG:
        break;
      case OPT_INT:
      case OPT_FINT:
        len += 9;
        break;
      case OPT_DBL:
      case OPT_FDBL:
        len += 6;
        break;
      case OPT_STR:
      case OPT_FSTR:
        len += 8;
        break;
    }
    if( len>max ) max = len;
  }
  for(i=0; op[i].label; i++){
    switch( op[i].type ){
      case OPT_FLAG:
      case OPT_FFLAG:
        fprintf(errstream,"  -%-*s  %s\n",max,op[i].label,op[i].message);
        break;
      case OPT_INT:
      case OPT_FINT:
        fprintf(errstream,"  %s=<integer>%*s  %s\n",op[i].label,
          (int)(max-((int)strlen(op[i].label))-9),"",op[i].message);
        break;
      case OPT_DBL:
      case OPT_FDBL:
        fprintf(errstream,"  %s=<real>%*s  %s\n",op[i].label,
          (int)(max-((int)strlen(op[i].label))-6),"",op[i].message);
        break;
      case OPT_STR:
      case OPT_FSTR:
        fprintf(errstream,"  %s=<string>%*s  %s\n",op[i].label,
          (int)(max-((int)strlen(op[i].label))-8),"",op[i].message);
        break;
    }
  }
}






enum e_state {
  INITIALIZE,
  WAITING_FOR_DECL_OR_RULE,
  WAITING_FOR_DECL_KEYWORD,
  WAITING_FOR_DECL_ARG,
  WAITING_FOR_PRECEDENCE_SYMBOL,
  WAITING_FOR_ARROW,
  IN_RHS,
  LHS_ALIAS_1,
  LHS_ALIAS_2,
  LHS_ALIAS_3,
  RHS_ALIAS_1,
  RHS_ALIAS_2,
  PRECEDENCE_MARK_1,
  PRECEDENCE_MARK_2,
  RESYNC_AFTER_RULE_ERROR,
  RESYNC_AFTER_DECL_ERROR,
  WAITING_FOR_DESTRUCTOR_SYMBOL,
  WAITING_FOR_DATATYPE_SYMBOL,
  WAITING_FOR_FALLBACK_ID,
  WAITING_FOR_WILDCARD_ID,
  WAITING_FOR_CLASS_ID,
  WAITING_FOR_CLASS_TOKEN
};
struct pstate {
  char *filename;
  int tokenlineno;
  int errorcnt;
  char *tokenstart;
  struct lemon *gp;
  enum e_state state;
  struct symbol *fallback;
  struct symbol *tkclass;
  struct symbol *lhs;
  const char *lhsalias;
  int nrhs;
  struct symbol *rhs[1000];
  const char *alias[1000];
  struct rule *prevrule;
  const char *declkeyword;
  char **declargslot;
  int insertLineMacro;
  int *decllinenoslot;
  enum e_assoc declassoc;
  int preccounter;
  struct rule *firstrule;
  struct rule *lastrule;
};


static void parseonetoken(struct pstate *psp)
{
  const char *x;
  x = Strsafe(psp->tokenstart);




  switch( psp->state ){
    case INITIALIZE:
      psp->prevrule = 0;
      psp->preccounter = 0;
      psp->firstrule = psp->lastrule = 0;
      psp->gp->nrule = 0;

    case WAITING_FOR_DECL_OR_RULE:
      if( x[0]=='%' ){
        psp->state = WAITING_FOR_DECL_KEYWORD;
      }else if( islower(x[0]) ){
        psp->lhs = Symbol_new(x);
        psp->nrhs = 0;
        psp->lhsalias = 0;
        psp->state = WAITING_FOR_ARROW;
      }else if( x[0]=='{' ){
        if( psp->prevrule==0 ){
          ErrorMsg(psp->filename,psp->tokenlineno,
"There is no prior rule upon which to attach the code fragment which begins on this line.");

          psp->errorcnt++;
        }else if( psp->prevrule->code!=0 ){
          ErrorMsg(psp->filename,psp->tokenlineno,
"Code fragment beginning on this line is not the first to follow the previous rule.");

          psp->errorcnt++;
        }else{
          psp->prevrule->line = psp->tokenlineno;
          psp->prevrule->code = &x[1];
        }
      }else if( x[0]=='[' ){
        psp->state = PRECEDENCE_MARK_1;
      }else{
        ErrorMsg(psp->filename,psp->tokenlineno,
          "Token \"%s\" should be either \"%%\" or a nonterminal name.",
          x);
        psp->errorcnt++;
      }
      break;
    case PRECEDENCE_MARK_1:
      if( !isupper(x[0]) ){
        ErrorMsg(psp->filename,psp->tokenlineno,
          "The precedence symbol must be a terminal.");
        psp->errorcnt++;
      }else if( psp->prevrule==0 ){
        ErrorMsg(psp->filename,psp->tokenlineno,
          "There is no prior rule to assign precedence \"[%s]\".",x);
        psp->errorcnt++;
      }else if( psp->prevrule->precsym!=0 ){
        ErrorMsg(psp->filename,psp->tokenlineno,
"Precedence mark on this line is not the first to follow the previous rule.");

        psp->errorcnt++;
      }else{
        psp->prevrule->precsym = Symbol_new(x);
      }
      psp->state = PRECEDENCE_MARK_2;
      break;
    case PRECEDENCE_MARK_2:
      if( x[0]!=']' ){
        ErrorMsg(psp->filename,psp->tokenlineno,
          "Missing \"]\" on precedence mark.");
        psp->errorcnt++;
      }
      psp->state = WAITING_FOR_DECL_OR_RULE;
      break;
    case WAITING_FOR_ARROW:
      if( x[0]==':' && x[1]==':' && x[2]=='=' ){
        psp->state = IN_RHS;
      }else if( x[0]=='(' ){
        psp->state = LHS_ALIAS_1;
      }else{
        ErrorMsg(psp->filename,psp->tokenlineno,
          "Expected to see a \":\" following the LHS symbol \"%s\".",
          psp->lhs->name);
        psp->errorcnt++;
        psp->state = RESYNC_AFTER_RULE_ERROR;
      }
      break;
    case LHS_ALIAS_1:
      if( isalpha(x[0]) ){
        psp->lhsalias = x;
        psp->state = LHS_ALIAS_2;
      }else{
        ErrorMsg(psp->filename,psp->tokenlineno,
          "\"%s\" is not a valid alias for the LHS \"%s\"\n",
          x,psp->lhs->name);
        psp->errorcnt++;
        psp->state = RESYNC_AFTER_RULE_ERROR;
      }
      break;
    case LHS_ALIAS_2:
      if( x[0]==')' ){
        psp->state = LHS_ALIAS_3;
      }else{
        ErrorMsg(psp->filename,psp->tokenlineno,
          "Missing \")\" following LHS alias name \"%s\".",psp->lhsalias);
        psp->errorcnt++;
        psp->state = RESYNC_AFTER_RULE_ERROR;
      }
      break;
    case LHS_ALIAS_3:
      if( x[0]==':' && x[1]==':' && x[2]=='=' ){
        psp->state = IN_RHS;
      }else{
        ErrorMsg(psp->filename,psp->tokenlineno,
          "Missing \"->\" following: \"%s(%s)\".",
           psp->lhs->name,psp->lhsalias);
        psp->errorcnt++;
        psp->state = RESYNC_AFTER_RULE_ERROR;
      }
      break;
    case IN_RHS:
      if( x[0]=='.' ){
        struct rule *rp;
        rp = (struct rule *)calloc( sizeof(struct rule) +
             sizeof(struct symbol*)*psp->nrhs + sizeof(char*)*psp->nrhs, 1);
        if( rp==0 ){
          ErrorMsg(psp->filename,psp->tokenlineno,
            "Can't allocate enough memory for this rule.");
          psp->errorcnt++;
          psp->prevrule = 0;
        }else{
          int i;
          rp->ruleline = psp->tokenlineno;
          rp->rhs = (struct symbol**)&rp[1];
          rp->rhsalias = (const char**)&(rp->rhs[psp->nrhs]);
          for(i=0; i<psp->nrhs; i++){
            rp->rhs[i] = psp->rhs[i];
            rp->rhsalias[i] = psp->alias[i];
          }
          rp->lhs = psp->lhs;
          rp->lhsalias = psp->lhsalias;
          rp->nrhs = psp->nrhs;
          rp->code = 0;
          rp->precsym = 0;
          rp->index = psp->gp->nrule++;
          rp->nextlhs = rp->lhs->rule;
          rp->lhs->rule = rp;
          rp->next = 0;
          if( psp->firstrule==0 ){
            psp->firstrule = psp->lastrule = rp;
          }else{
            psp->lastrule->next = rp;
            psp->lastrule = rp;
          }
          psp->prevrule = rp;
        }
        psp->state = WAITING_FOR_DECL_OR_RULE;
      }else if( isalpha(x[0]) ){
        if( psp->nrhs>=1000 ){
          ErrorMsg(psp->filename,psp->tokenlineno,
            "Too many symbols on RHS of rule beginning at \"%s\".",
            x);
          psp->errorcnt++;
          psp->state = RESYNC_AFTER_RULE_ERROR;
        }else{
          psp->rhs[psp->nrhs] = Symbol_new(x);
          psp->alias[psp->nrhs] = 0;
          psp->nrhs++;
        }
      }else if( (x[0]=='|' || x[0]=='/') && psp->nrhs>0 ){
        struct symbol *msp = psp->rhs[psp->nrhs-1];
        if( msp->type!=MULTITERMINAL ){
          struct symbol *origsp = msp;
          msp = (struct symbol *) calloc(1,sizeof(*msp));
          ((__builtin_object_size (msp, 0) != (size_t) -1) ? __builtin___memset_chk (msp, 0, sizeof(*msp), __builtin_object_size (msp, 0)) : __inline_memset_chk (msp, 0, sizeof(*msp)));
          msp->type = MULTITERMINAL;
          msp->nsubsym = 1;
          msp->subsym = (struct symbol **) calloc(1,sizeof(struct symbol*));
          msp->subsym[0] = origsp;
          msp->name = origsp->name;
          psp->rhs[psp->nrhs-1] = msp;
        }
        msp->nsubsym++;
        msp->subsym = (struct symbol **) realloc(msp->subsym,
          sizeof(struct symbol*)*msp->nsubsym);
        msp->subsym[msp->nsubsym-1] = Symbol_new(&x[1]);
        if( islower(x[1]) || islower(msp->subsym[0]->name[0]) ){
          ErrorMsg(psp->filename,psp->tokenlineno,
            "Cannot form a compound containing a non-terminal");
          psp->errorcnt++;
        }
      }else if( x[0]=='(' && psp->nrhs>0 ){
        psp->state = RHS_ALIAS_1;
      }else{
        ErrorMsg(psp->filename,psp->tokenlineno,
          "Illegal character on RHS of rule: \"%s\".",x);
        psp->errorcnt++;
        psp->state = RESYNC_AFTER_RULE_ERROR;
      }
      break;
    case RHS_ALIAS_1:
      if( isalpha(x[0]) ){
        psp->alias[psp->nrhs-1] = x;
        psp->state = RHS_ALIAS_2;
      }else{
        ErrorMsg(psp->filename,psp->tokenlineno,
          "\"%s\" is not a valid alias for the RHS symbol \"%s\"\n",
          x,psp->rhs[psp->nrhs-1]->name);
        psp->errorcnt++;
        psp->state = RESYNC_AFTER_RULE_ERROR;
      }
      break;
    case RHS_ALIAS_2:
      if( x[0]==')' ){
        psp->state = IN_RHS;
      }else{
        ErrorMsg(psp->filename,psp->tokenlineno,
          "Missing \")\" following LHS alias name \"%s\".",psp->lhsalias);
        psp->errorcnt++;
        psp->state = RESYNC_AFTER_RULE_ERROR;
      }
      break;
    case WAITING_FOR_DECL_KEYWORD:
      if( isalpha(x[0]) ){
        psp->declkeyword = x;
        psp->declargslot = 0;
        psp->decllinenoslot = 0;
        psp->insertLineMacro = 1;
        psp->state = WAITING_FOR_DECL_ARG;
        if( strcmp(x,"name")==0 ){
          psp->declargslot = &(psp->gp->name);
          psp->insertLineMacro = 0;
        }else if( strcmp(x,"include")==0 ){
          psp->declargslot = &(psp->gp->include);
        }else if( strcmp(x,"code")==0 ){
          psp->declargslot = &(psp->gp->extracode);
        }else if( strcmp(x,"token_destructor")==0 ){
          psp->declargslot = &psp->gp->tokendest;
        }else if( strcmp(x,"default_destructor")==0 ){
          psp->declargslot = &psp->gp->vardest;
        }else if( strcmp(x,"token_prefix")==0 ){
          psp->declargslot = &psp->gp->tokenprefix;
          psp->insertLineMacro = 0;
        }else if( strcmp(x,"syntax_error")==0 ){
          psp->declargslot = &(psp->gp->error);
        }else if( strcmp(x,"parse_accept")==0 ){
          psp->declargslot = &(psp->gp->accept);
        }else if( strcmp(x,"parse_failure")==0 ){
          psp->declargslot = &(psp->gp->failure);
        }else if( strcmp(x,"stack_overflow")==0 ){
          psp->declargslot = &(psp->gp->overflow);
        }else if( strcmp(x,"extra_argument")==0 ){
          psp->declargslot = &(psp->gp->arg);
          psp->insertLineMacro = 0;
        }else if( strcmp(x,"token_type")==0 ){
          psp->declargslot = &(psp->gp->tokentype);
          psp->insertLineMacro = 0;
        }else if( strcmp(x,"default_type")==0 ){
          psp->declargslot = &(psp->gp->vartype);
          psp->insertLineMacro = 0;
        }else if( strcmp(x,"stack_size")==0 ){
          psp->declargslot = &(psp->gp->stacksize);
          psp->insertLineMacro = 0;
        }else if( strcmp(x,"start_symbol")==0 ){
          psp->declargslot = &(psp->gp->start);
          psp->insertLineMacro = 0;
        }else if( strcmp(x,"left")==0 ){
          psp->preccounter++;
          psp->declassoc = LEFT;
          psp->state = WAITING_FOR_PRECEDENCE_SYMBOL;
        }else if( strcmp(x,"right")==0 ){
          psp->preccounter++;
          psp->declassoc = RIGHT;
          psp->state = WAITING_FOR_PRECEDENCE_SYMBOL;
        }else if( strcmp(x,"nonassoc")==0 ){
          psp->preccounter++;
          psp->declassoc = NONE;
          psp->state = WAITING_FOR_PRECEDENCE_SYMBOL;
        }else if( strcmp(x,"destructor")==0 ){
          psp->state = WAITING_FOR_DESTRUCTOR_SYMBOL;
        }else if( strcmp(x,"type")==0 ){
          psp->state = WAITING_FOR_DATATYPE_SYMBOL;
        }else if( strcmp(x,"fallback")==0 ){
          psp->fallback = 0;
          psp->state = WAITING_FOR_FALLBACK_ID;
        }else if( strcmp(x,"wildcard")==0 ){
          psp->state = WAITING_FOR_WILDCARD_ID;
        }else if( strcmp(x,"token_class")==0 ){
          psp->state = WAITING_FOR_CLASS_ID;
        }else{
          ErrorMsg(psp->filename,psp->tokenlineno,
            "Unknown declaration keyword: \"%%%s\".",x);
          psp->errorcnt++;
          psp->state = RESYNC_AFTER_DECL_ERROR;
        }
      }else{
        ErrorMsg(psp->filename,psp->tokenlineno,
          "Illegal declaration keyword: \"%s\".",x);
        psp->errorcnt++;
        psp->state = RESYNC_AFTER_DECL_ERROR;
      }
      break;
    case WAITING_FOR_DESTRUCTOR_SYMBOL:
      if( !isalpha(x[0]) ){
        ErrorMsg(psp->filename,psp->tokenlineno,
          "Symbol name missing after %%destructor keyword");
        psp->errorcnt++;
        psp->state = RESYNC_AFTER_DECL_ERROR;
      }else{
        struct symbol *sp = Symbol_new(x);
        psp->declargslot = &sp->destructor;
        psp->decllinenoslot = &sp->destLineno;
        psp->insertLineMacro = 1;
        psp->state = WAITING_FOR_DECL_ARG;
      }
      break;
    case WAITING_FOR_DATATYPE_SYMBOL:
      if( !isalpha(x[0]) ){
        ErrorMsg(psp->filename,psp->tokenlineno,
          "Symbol name missing after %%type keyword");
        psp->errorcnt++;
        psp->state = RESYNC_AFTER_DECL_ERROR;
      }else{
        struct symbol *sp = Symbol_find(x);
        if((sp) && (sp->datatype)){
          ErrorMsg(psp->filename,psp->tokenlineno,
            "Symbol %%type \"%s\" already defined", x);
          psp->errorcnt++;
          psp->state = RESYNC_AFTER_DECL_ERROR;
        }else{
          if (!sp){
            sp = Symbol_new(x);
          }
          psp->declargslot = &sp->datatype;
          psp->insertLineMacro = 0;
          psp->state = WAITING_FOR_DECL_ARG;
        }
      }
      break;
    case WAITING_FOR_PRECEDENCE_SYMBOL:
      if( x[0]=='.' ){
        psp->state = WAITING_FOR_DECL_OR_RULE;
      }else if( isupper(x[0]) ){
        struct symbol *sp;
        sp = Symbol_new(x);
        if( sp->prec>=0 ){
          ErrorMsg(psp->filename,psp->tokenlineno,
            "Symbol \"%s\" has already be given a precedence.",x);
          psp->errorcnt++;
        }else{
          sp->prec = psp->preccounter;
          sp->assoc = psp->declassoc;
        }
      }else{
        ErrorMsg(psp->filename,psp->tokenlineno,
          "Can't assign a precedence to \"%s\".",x);
        psp->errorcnt++;
      }
      break;
    case WAITING_FOR_DECL_ARG:
      if( x[0]=='{' || x[0]=='\"' || isalnum(x[0]) ){
        const char *zOld, *zNew;
        char *zBuf, *z;
        int nOld, n, nLine, nNew, nBack;
        int addLineMacro;
        char zLine[50];
        zNew = x;
        if( zNew[0]=='"' || zNew[0]=='{' ) zNew++;
        nNew = ((int)strlen(zNew));
        if( *psp->declargslot ){
          zOld = *psp->declargslot;
        }else{
          zOld = "";
        }
        nOld = ((int)strlen(zOld));
        n = nOld + nNew + 20;
        addLineMacro = !psp->gp->nolinenosflag && psp->insertLineMacro &&
                        (psp->decllinenoslot==0 || psp->decllinenoslot[0]!=0);
        if( addLineMacro ){
          for(z=psp->filename, nBack=0; *z; z++){
            if( *z=='\\' ) nBack++;
          }
          lemon_sprintf(zLine, "#line %d ", psp->tokenlineno);
          nLine = ((int)strlen(zLine));
          n += nLine + ((int)strlen(psp->filename)) + nBack;
        }
        *psp->declargslot = (char *) realloc(*psp->declargslot, n);
        zBuf = *psp->declargslot + nOld;
        if( addLineMacro ){
          if( nOld && zBuf[-1]!='\n' ){
            *(zBuf++) = '\n';
          }
          ((__builtin_object_size (zBuf, 0) != (size_t) -1) ? __builtin___memcpy_chk (zBuf, zLine, nLine, __builtin_object_size (zBuf, 0)) : __inline_memcpy_chk (zBuf, zLine, nLine));
          zBuf += nLine;
          *(zBuf++) = '"';
          for(z=psp->filename; *z; z++){
            if( *z=='\\' ){
              *(zBuf++) = '\\';
            }
            *(zBuf++) = *z;
          }
          *(zBuf++) = '"';
          *(zBuf++) = '\n';
        }
        if( psp->decllinenoslot && psp->decllinenoslot[0]==0 ){
          psp->decllinenoslot[0] = psp->tokenlineno;
        }
        ((__builtin_object_size (zBuf, 0) != (size_t) -1) ? __builtin___memcpy_chk (zBuf, zNew, nNew, __builtin_object_size (zBuf, 0)) : __inline_memcpy_chk (zBuf, zNew, nNew));
        zBuf += nNew;
        *zBuf = 0;
        psp->state = WAITING_FOR_DECL_OR_RULE;
      }else{
        ErrorMsg(psp->filename,psp->tokenlineno,
          "Illegal argument to %%%s: %s",psp->declkeyword,x);
        psp->errorcnt++;
        psp->state = RESYNC_AFTER_DECL_ERROR;
      }
      break;
    case WAITING_FOR_FALLBACK_ID:
      if( x[0]=='.' ){
        psp->state = WAITING_FOR_DECL_OR_RULE;
      }else if( !isupper(x[0]) ){
        ErrorMsg(psp->filename, psp->tokenlineno,
          "%%fallback argument \"%s\" should be a token", x);
        psp->errorcnt++;
      }else{
        struct symbol *sp = Symbol_new(x);
        if( psp->fallback==0 ){
          psp->fallback = sp;
        }else if( sp->fallback ){
          ErrorMsg(psp->filename, psp->tokenlineno,
            "More than one fallback assigned to token %s", x);
          psp->errorcnt++;
        }else{
          sp->fallback = psp->fallback;
          psp->gp->has_fallback = 1;
        }
      }
      break;
    case WAITING_FOR_WILDCARD_ID:
      if( x[0]=='.' ){
        psp->state = WAITING_FOR_DECL_OR_RULE;
      }else if( !isupper(x[0]) ){
        ErrorMsg(psp->filename, psp->tokenlineno,
          "%%wildcard argument \"%s\" should be a token", x);
        psp->errorcnt++;
      }else{
        struct symbol *sp = Symbol_new(x);
        if( psp->gp->wildcard==0 ){
          psp->gp->wildcard = sp;
        }else{
          ErrorMsg(psp->filename, psp->tokenlineno,
            "Extra wildcard to token: %s", x);
          psp->errorcnt++;
        }
      }
      break;
    case WAITING_FOR_CLASS_ID:
      if( !islower(x[0]) ){
        ErrorMsg(psp->filename, psp->tokenlineno,
          "%%token_class must be followed by an identifier: ", x);
        psp->errorcnt++;
        psp->state = RESYNC_AFTER_DECL_ERROR;
     }else if( Symbol_find(x) ){
        ErrorMsg(psp->filename, psp->tokenlineno,
          "Symbol \"%s\" already used", x);
        psp->errorcnt++;
        psp->state = RESYNC_AFTER_DECL_ERROR;
      }else{
        psp->tkclass = Symbol_new(x);
        psp->tkclass->type = MULTITERMINAL;
        psp->state = WAITING_FOR_CLASS_TOKEN;
      }
      break;
    case WAITING_FOR_CLASS_TOKEN:
      if( x[0]=='.' ){
        psp->state = WAITING_FOR_DECL_OR_RULE;
      }else if( isupper(x[0]) || ((x[0]=='|' || x[0]=='/') && isupper(x[1])) ){
        struct symbol *msp = psp->tkclass;
        msp->nsubsym++;
        msp->subsym = (struct symbol **) realloc(msp->subsym,
          sizeof(struct symbol*)*msp->nsubsym);
        if( !isupper(x[0]) ) x++;
        msp->subsym[msp->nsubsym-1] = Symbol_new(x);
      }else{
        ErrorMsg(psp->filename, psp->tokenlineno,
          "%%token_class argument \"%s\" should be a token", x);
        psp->errorcnt++;
        psp->state = RESYNC_AFTER_DECL_ERROR;
      }
      break;
    case RESYNC_AFTER_RULE_ERROR:


    case RESYNC_AFTER_DECL_ERROR:
      if( x[0]=='.' ) psp->state = WAITING_FOR_DECL_OR_RULE;
      if( x[0]=='%' ) psp->state = WAITING_FOR_DECL_KEYWORD;
      break;
  }
}






static void preprocess_input(char *z){
  int i, j, k, n;
  int exclude = 0;
  int start = 0;
  int lineno = 1;
  int start_lineno = 1;
  for(i=0; z[i]; i++){
    if( z[i]=='\n' ) lineno++;
    if( z[i]!='%' || (i>0 && z[i-1]!='\n') ) continue;
    if( strncmp(&z[i],"%endif",6)==0 && isspace(z[i+6]) ){
      if( exclude ){
        exclude--;
        if( exclude==0 ){
          for(j=start; j<i; j++) if( z[j]!='\n' ) z[j] = ' ';
        }
      }
      for(j=i; z[j] && z[j]!='\n'; j++) z[j] = ' ';
    }else if( (strncmp(&z[i],"%ifdef",6)==0 && isspace(z[i+6]))
          || (strncmp(&z[i],"%ifndef",7)==0 && isspace(z[i+7])) ){
      if( exclude ){
        exclude++;
      }else{
        for(j=i+7; isspace(z[j]); j++){}
        for(n=0; z[j+n] && !isspace(z[j+n]); n++){}
        exclude = 1;
        for(k=0; k<nDefine; k++){
          if( strncmp(azDefine[k],&z[j],n)==0 && ((int)strlen(azDefine[k]))==n ){
            exclude = 0;
            break;
          }
        }
        if( z[i+3]=='n' ) exclude = !exclude;
        if( exclude ){
          start = i;
          start_lineno = lineno;
        }
      }
      for(j=i; z[j] && z[j]!='\n'; j++) z[j] = ' ';
    }
  }
  if( exclude ){
    fprintf(__stderrp,"unterminated %%ifdef starting on line %d\n", start_lineno);
    exit(1);
  }
}






void Parse(struct lemon *gp)
{
  struct pstate ps;
  FILE *fp;
  char *filebuf;
  int filesize;
  int lineno;
  int c;
  char *cp, *nextcp;
  int startline = 0;

  ((__builtin_object_size (&ps, 0) != (size_t) -1) ? __builtin___memset_chk (&ps, '\0', sizeof(ps), __builtin_object_size (&ps, 0)) : __inline_memset_chk (&ps, '\0', sizeof(ps)));
  ps.gp = gp;
  ps.filename = gp->filename;
  ps.errorcnt = 0;
  ps.state = INITIALIZE;


  fp = fopen(ps.filename,"rb");
  if( fp==0 ){
    ErrorMsg(ps.filename,0,"Can't open this file for reading.");
    gp->errorcnt++;
    return;
  }
  fseek(fp,0,2);
  filesize = ftell(fp);
  rewind(fp);
  filebuf = (char *)malloc( filesize+1 );
  if( filesize>100000000 || filebuf==0 ){
    ErrorMsg(ps.filename,0,"Input file too large.");
    gp->errorcnt++;
    fclose(fp);
    return;
  }
  if( fread(filebuf,1,filesize,fp)!=filesize ){
    ErrorMsg(ps.filename,0,"Can't read in all %d bytes of this file.",
      filesize);
    free(filebuf);
    gp->errorcnt++;
    fclose(fp);
    return;
  }
  fclose(fp);
  filebuf[filesize] = 0;


  preprocess_input(filebuf);


  lineno = 1;
  for(cp=filebuf; (c= *cp)!=0; ){
    if( c=='\n' ) lineno++;
    if( isspace(c) ){ cp++; continue; }
    if( c=='/' && cp[1]=='/' ){
      cp+=2;
      while( (c= *cp)!=0 && c!='\n' ) cp++;
      continue;
    }
    if( c=='/' && cp[1]=='*' ){
      cp+=2;
      while( (c= *cp)!=0 && (c!='/' || cp[-1]!='*') ){
        if( c=='\n' ) lineno++;
        cp++;
      }
      if( c ) cp++;
      continue;
    }
    ps.tokenstart = cp;
    ps.tokenlineno = lineno;
    if( c=='\"' ){
      cp++;
      while( (c= *cp)!=0 && c!='\"' ){
        if( c=='\n' ) lineno++;
        cp++;
      }
      if( c==0 ){
        ErrorMsg(ps.filename,startline,
"String starting on this line is not terminated before the end of the file.");
        ps.errorcnt++;
        nextcp = cp;
      }else{
        nextcp = cp+1;
      }
    }else if( c=='{' ){
      int level;
      cp++;
      for(level=1; (c= *cp)!=0 && (level>1 || c!='}'); cp++){
        if( c=='\n' ) lineno++;
        else if( c=='{' ) level++;
        else if( c=='}' ) level--;
        else if( c=='/' && cp[1]=='*' ){
          int prevc;
          cp = &cp[2];
          prevc = 0;
          while( (c= *cp)!=0 && (c!='/' || prevc!='*') ){
            if( c=='\n' ) lineno++;
            prevc = c;
            cp++;
          }
        }else if( c=='/' && cp[1]=='/' ){
          cp = &cp[2];
          while( (c= *cp)!=0 && c!='\n' ) cp++;
          if( c ) lineno++;
        }else if( c=='\'' || c=='\"' ){
          int startchar, prevc;
          startchar = c;
          prevc = 0;
          for(cp++; (c= *cp)!=0 && (c!=startchar || prevc=='\\'); cp++){
            if( c=='\n' ) lineno++;
            if( prevc=='\\' ) prevc = 0;
            else prevc = c;
          }
        }
      }
      if( c==0 ){
        ErrorMsg(ps.filename,ps.tokenlineno,
"C code starting on this line is not terminated before the end of the file.");
        ps.errorcnt++;
        nextcp = cp;
      }else{
        nextcp = cp+1;
      }
    }else if( isalnum(c) ){
      while( (c= *cp)!=0 && (isalnum(c) || c=='_') ) cp++;
      nextcp = cp;
    }else if( c==':' && cp[1]==':' && cp[2]=='=' ){
      cp += 3;
      nextcp = cp;
    }else if( (c=='/' || c=='|') && isalpha(cp[1]) ){
      cp += 2;
      while( (c = *cp)!=0 && (isalnum(c) || c=='_') ) cp++;
      nextcp = cp;
    }else{
      cp++;
      nextcp = cp;
    }
    c = *cp;
    *cp = 0;
    parseonetoken(&ps);
    *cp = c;
    cp = nextcp;
  }
  free(filebuf);
  gp->rule = ps.firstrule;
  gp->errorcnt = ps.errorcnt;
}





static struct plink *plink_freelist = 0;


struct plink *Plink_new(){
  struct plink *newlink;

  if( plink_freelist==0 ){
    int i;
    int amt = 100;
    plink_freelist = (struct plink *)calloc( amt, sizeof(struct plink) );
    if( plink_freelist==0 ){
      fprintf(__stderrp,
      "Unable to allocate memory for a new follow-set propagation link.\n");
      exit(1);
    }
    for(i=0; i<amt-1; i++) plink_freelist[i].next = &plink_freelist[i+1];
    plink_freelist[amt-1].next = 0;
  }
  newlink = plink_freelist;
  plink_freelist = plink_freelist->next;
  return newlink;
}


void Plink_add(struct plink **plpp, struct config *cfp)
{
  struct plink *newlink;
  newlink = Plink_new();
  newlink->next = *plpp;
  *plpp = newlink;
  newlink->cfp = cfp;
}


void Plink_copy(struct plink **to, struct plink *from)
{
  struct plink *nextpl;
  while( from ){
    nextpl = from->next;
    from->next = *to;
    *to = from;
    from = nextpl;
  }
}


void Plink_delete(struct plink *plp)
{
  struct plink *nextpl;

  while( plp ){
    nextpl = plp->next;
    plp->next = plink_freelist;
    plink_freelist = plp;
    plp = nextpl;
  }
}
# 2850 "/Users/skgchxngsxyz-osx/Downloads/lemon.c"
        char *file_makename(struct lemon *lemp, const char *suffix)
{
  char *name;
  char *cp;

  name = (char*)malloc( ((int)strlen(lemp->filename)) + ((int)strlen(suffix)) + 5 );
  if( name==0 ){
    fprintf(__stderrp,"Can't allocate space for a filename.\n");
    exit(1);
  }
  lemon_strcpy(name,lemp->filename);
  cp = strrchr(name,'.');
  if( cp ) *cp = 0;
  lemon_strcat(name,suffix);
  return name;
}




        FILE *file_open(
  struct lemon *lemp,
  const char *suffix,
  const char *mode
){
  FILE *fp;

  if( lemp->outname ) free(lemp->outname);
  lemp->outname = file_makename(lemp, suffix);
  fp = fopen(lemp->outname,mode);
  if( fp==0 && *mode=='w' ){
    fprintf(__stderrp,"Can't open file \"%s\".\n",lemp->outname);
    lemp->errorcnt++;
    return 0;
  }
  return fp;
}



void Reprint(struct lemon *lemp)
{
  struct rule *rp;
  struct symbol *sp;
  int i, j, maxlen, len, ncolumns, skip;
  printf("// Reprint of input file \"%s\".\n// Symbols:\n",lemp->filename);
  maxlen = 10;
  for(i=0; i<lemp->nsymbol; i++){
    sp = lemp->symbols[i];
    len = ((int)strlen(sp->name));
    if( len>maxlen ) maxlen = len;
  }
  ncolumns = 76/(maxlen+5);
  if( ncolumns<1 ) ncolumns = 1;
  skip = (lemp->nsymbol + ncolumns - 1)/ncolumns;
  for(i=0; i<skip; i++){
    printf("//");
    for(j=i; j<lemp->nsymbol; j+=skip){
      sp = lemp->symbols[j];
      (__builtin_expect(!(sp->index==j), 0) ? __assert_rtn(__func__, "/Users/skgchxngsxyz-osx/Downloads/lemon.c", 2909, "sp->index==j") : (void)0);
      printf(" %3d %-*.*s",j,maxlen,maxlen,sp->name);
    }
    printf("\n");
  }
  for(rp=lemp->rule; rp; rp=rp->next){
    printf("%s",rp->lhs->name);

    printf(" ::=");
    for(i=0; i<rp->nrhs; i++){
      sp = rp->rhs[i];
      if( sp->type==MULTITERMINAL ){
        printf(" %s", sp->subsym[0]->name);
        for(j=1; j<sp->nsubsym; j++){
          printf("|%s", sp->subsym[j]->name);
        }
      }else{
        printf(" %s", sp->name);
      }

    }
    printf(".");
    if( rp->precsym ) printf(" [%s]",rp->precsym->name);

    printf("\n");
  }
}

void ConfigPrint(FILE *fp, struct config *cfp)
{
  struct rule *rp;
  struct symbol *sp;
  int i, j;
  rp = cfp->rp;
  fprintf(fp,"%s ::=",rp->lhs->name);
  for(i=0; i<=rp->nrhs; i++){
    if( i==cfp->dot ) fprintf(fp," *");
    if( i==rp->nrhs ) break;
    sp = rp->rhs[i];
    if( sp->type==MULTITERMINAL ){
      fprintf(fp," %s", sp->subsym[0]->name);
      for(j=1; j<sp->nsubsym; j++){
        fprintf(fp,"|%s",sp->subsym[j]->name);
      }
    }else{
      fprintf(fp," %s", sp->name);
    }
  }
}
# 2998 "/Users/skgchxngsxyz-osx/Downloads/lemon.c"
int PrintAction(struct action *ap, FILE *fp, int indent){
  int result = 1;
  switch( ap->type ){
    case SHIFT:
      fprintf(fp,"%*s shift  %d",indent,ap->sp->name,ap->x.stp->statenum);
      break;
    case REDUCE:
      fprintf(fp,"%*s reduce %d",indent,ap->sp->name,ap->x.rp->index);
      break;
    case ACCEPT:
      fprintf(fp,"%*s accept",indent,ap->sp->name);
      break;
    case ERROR:
      fprintf(fp,"%*s error",indent,ap->sp->name);
      break;
    case SRCONFLICT:
    case RRCONFLICT:
      fprintf(fp,"%*s reduce %-3d ** Parsing conflict **",
        indent,ap->sp->name,ap->x.rp->index);
      break;
    case SSCONFLICT:
      fprintf(fp,"%*s shift  %-3d ** Parsing conflict **",
        indent,ap->sp->name,ap->x.stp->statenum);
      break;
    case SH_RESOLVED:
      if( showPrecedenceConflict ){
        fprintf(fp,"%*s shift  %-3d -- dropped by precedence",
                indent,ap->sp->name,ap->x.stp->statenum);
      }else{
        result = 0;
      }
      break;
    case RD_RESOLVED:
      if( showPrecedenceConflict ){
        fprintf(fp,"%*s reduce %-3d -- dropped by precedence",
                indent,ap->sp->name,ap->x.rp->index);
      }else{
        result = 0;
      }
      break;
    case NOT_USED:
      result = 0;
      break;
  }
  return result;
}


void ReportOutput(struct lemon *lemp)
{
  int i;
  struct state *stp;
  struct config *cfp;
  struct action *ap;
  FILE *fp;

  fp = file_open(lemp,".out","wb");
  if( fp==0 ) return;
  for(i=0; i<lemp->nstate; i++){
    stp = lemp->sorted[i];
    fprintf(fp,"State %d:\n",stp->statenum);
    if( lemp->basisflag ) cfp=stp->bp;
    else cfp=stp->cfp;
    while( cfp ){
      char buf[20];
      if( cfp->dot==cfp->rp->nrhs ){
        lemon_sprintf(buf,"(%d)",cfp->rp->index);
        fprintf(fp,"    %5s ",buf);
      }else{
        fprintf(fp,"          ");
      }
      ConfigPrint(fp,cfp);
      fprintf(fp,"\n");





      if( lemp->basisflag ) cfp=cfp->bp;
      else cfp=cfp->next;
    }
    fprintf(fp,"\n");
    for(ap=stp->ap; ap; ap=ap->next){
      if( PrintAction(ap,fp,30) ) fprintf(fp,"\n");
    }
    fprintf(fp,"\n");
  }
  fprintf(fp, "----------------------------------------------------\n");
  fprintf(fp, "Symbols:\n");
  for(i=0; i<lemp->nsymbol; i++){
    int j;
    struct symbol *sp;

    sp = lemp->symbols[i];
    fprintf(fp, "  %3d: %s", i, sp->name);
    if( sp->type==NONTERMINAL ){
      fprintf(fp, ":");
      if( sp->lambda ){
        fprintf(fp, " <lambda>");
      }
      for(j=0; j<lemp->nterminal; j++){
        if( sp->firstset && (sp->firstset[j]) ){
          fprintf(fp, " %s", lemp->symbols[j]->name);
        }
      }
    }
    fprintf(fp, "\n");
  }
  fclose(fp);
  return;
}



        char *pathsearch(char *argv0, char *name, int modemask)
{
  const char *pathlist;
  char *pathbufptr;
  char *pathbuf;
  char *path,*cp;
  char c;




  cp = strrchr(argv0,'/');

  if( cp ){
    c = *cp;
    *cp = 0;
    path = (char *)malloc( ((int)strlen(argv0)) + ((int)strlen(name)) + 2 );
    if( path ) lemon_sprintf(path,"%s/%s",argv0,name);
    *cp = c;
  }else{
    pathlist = getenv("PATH");
    if( pathlist==0 ) pathlist = ".:/bin:/usr/bin";
    pathbuf = (char *) malloc( ((int)strlen(pathlist)) + 1 );
    path = (char *)malloc( ((int)strlen(pathlist))+((int)strlen(name))+2 );
    if( (pathbuf != 0) && (path!=0) ){
      pathbufptr = pathbuf;
      lemon_strcpy(pathbuf, pathlist);
      while( *pathbuf ){
        cp = strchr(pathbuf,':');
        if( cp==0 ) cp = &pathbuf[((int)strlen(pathbuf))];
        c = *cp;
        *cp = 0;
        lemon_sprintf(path,"%s/%s",pathbuf,name);
        *cp = c;
        if( c==0 ) pathbuf[0] = 0;
        else pathbuf = &cp[1];
        if( access(path,modemask)==0 ) break;
      }
      free(pathbufptr);
    }
  }
  return path;
}





        int compute_action(struct lemon *lemp, struct action *ap)
{
  int act;
  switch( ap->type ){
    case SHIFT: act = ap->x.stp->statenum; break;
    case REDUCE: act = ap->x.rp->index + lemp->nstate; break;
    case ERROR: act = lemp->nstate + lemp->nrule; break;
    case ACCEPT: act = lemp->nstate + lemp->nrule + 1; break;
    default: act = -1; break;
  }
  return act;
}
# 3183 "/Users/skgchxngsxyz-osx/Downloads/lemon.c"
        void tplt_xfer(char *name, FILE *in, FILE *out, int *lineno)
{
  int i, iStart;
  char line[1000];
  while( fgets(line,1000,in) && (line[0]!='%' || line[1]!='%') ){
    (*lineno)++;
    iStart = 0;
    if( name ){
      for(i=0; line[i]; i++){
        if( line[i]=='P' && strncmp(&line[i],"Parse",5)==0
          && (i==0 || !isalpha(line[i-1]))
        ){
          if( i>iStart ) fprintf(out,"%.*s",i-iStart,&line[iStart]);
          fprintf(out,"%s",name);
          i += 4;
          iStart = i+1;
        }
      }
    }
    fprintf(out,"%s",&line[iStart]);
  }
}



        FILE *tplt_open(struct lemon *lemp)
{
  static char templatename[] = "lempar.c";
  char buf[1000];
  FILE *in;
  char *tpltname;
  char *cp;


  if (user_templatename != 0) {
    if( access(user_templatename,004)==-1 ){
      fprintf(__stderrp,"Can't find the parser driver template file \"%s\".\n",
        user_templatename);
      lemp->errorcnt++;
      return 0;
    }
    in = fopen(user_templatename,"rb");
    if( in==0 ){
      fprintf(__stderrp,"Can't open the template file \"%s\".\n",user_templatename);
      lemp->errorcnt++;
      return 0;
    }
    return in;
  }

  cp = strrchr(lemp->filename,'.');
  if( cp ){
    lemon_sprintf(buf,"%.*s.lt",(int)(cp-lemp->filename),lemp->filename);
  }else{
    lemon_sprintf(buf,"%s.lt",lemp->filename);
  }
  if( access(buf,004)==0 ){
    tpltname = buf;
  }else if( access(templatename,004)==0 ){
    tpltname = templatename;
  }else{
    tpltname = pathsearch(lemp->argv0,templatename,0);
  }
  if( tpltname==0 ){
    fprintf(__stderrp,"Can't find the parser driver template file \"%s\".\n",
    templatename);
    lemp->errorcnt++;
    return 0;
  }
  in = fopen(tpltname,"rb");
  if( in==0 ){
    fprintf(__stderrp,"Can't open the template file \"%s\".\n",templatename);
    lemp->errorcnt++;
    return 0;
  }
  return in;
}


        void tplt_linedir(FILE *out, int lineno, char *filename)
{
  fprintf(out,"#line %d \"",lineno);
  while( *filename ){
    if( *filename == '\\' ) putc('\\',out);
    putc(*filename,out);
    filename++;
  }
  fprintf(out,"\"\n");
}


        void tplt_print(FILE *out, struct lemon *lemp, char *str, int *lineno)
{
  if( str==0 ) return;
  while( *str ){
    putc(*str,out);
    if( *str=='\n' ) (*lineno)++;
    str++;
  }
  if( str[-1]!='\n' ){
    putc('\n',out);
    (*lineno)++;
  }
  if (!lemp->nolinenosflag) {
    (*lineno)++; tplt_linedir(out,*lineno,lemp->outname);
  }
  return;
}





void emit_destructor_code(
  FILE *out,
  struct symbol *sp,
  struct lemon *lemp,
  int *lineno
){
 char *cp = 0;

 if( sp->type==TERMINAL ){
   cp = lemp->tokendest;
   if( cp==0 ) return;
   fprintf(out,"{\n"); (*lineno)++;
 }else if( sp->destructor ){
   cp = sp->destructor;
   fprintf(out,"{\n"); (*lineno)++;
   if (!lemp->nolinenosflag) { (*lineno)++; tplt_linedir(out,sp->destLineno,lemp->filename); }
 }else if( lemp->vardest ){
   cp = lemp->vardest;
   if( cp==0 ) return;
   fprintf(out,"{\n"); (*lineno)++;
 }else{
   (__builtin_expect(!(0), 0) ? __assert_rtn(__func__, "/Users/skgchxngsxyz-osx/Downloads/lemon.c", 3317, "0") : (void)0);
 }
 for(; *cp; cp++){
   if( *cp=='$' && cp[1]=='$' ){
     fprintf(out,"(yypminor->yy%d)",sp->dtnum);
     cp++;
     continue;
   }
   if( *cp=='\n' ) (*lineno)++;
   fputc(*cp,out);
 }
 fprintf(out,"\n"); (*lineno)++;
 if (!lemp->nolinenosflag) {
   (*lineno)++; tplt_linedir(out,*lineno,lemp->outname);
 }
 fprintf(out,"}\n"); (*lineno)++;
 return;
}




int has_destructor(struct symbol *sp, struct lemon *lemp)
{
  int ret;
  if( sp->type==TERMINAL ){
    ret = lemp->tokendest!=0;
  }else{
    ret = lemp->vardest!=0 || sp->destructor!=0;
  }
  return ret;
}
# 3362 "/Users/skgchxngsxyz-osx/Downloads/lemon.c"
        char *append_str(const char *zText, int n, int p1, int p2){
  static char empty[1] = { 0 };
  static char *z = 0;
  static int alloced = 0;
  static int used = 0;
  int c;
  char zInt[40];
  if( zText==0 ){
    used = 0;
    return z;
  }
  if( n<=0 ){
    if( n<0 ){
      used += n;
      (__builtin_expect(!(used>=0), 0) ? __assert_rtn(__func__, "/Users/skgchxngsxyz-osx/Downloads/lemon.c", 3376, "used>=0") : (void)0);
    }
    n = ((int)strlen(zText));
  }
  if( (int) (n+sizeof(zInt)*2+used) >= alloced ){
    alloced = n + sizeof(zInt)*2 + used + 200;
    z = (char *) realloc(z, alloced);
  }
  if( z==0 ) return empty;
  while( n-- > 0 ){
    c = *(zText++);
    if( c=='%' && n>0 && zText[0]=='d' ){
      lemon_sprintf(zInt, "%d", p1);
      p1 = p2;
      lemon_strcpy(&z[used], zInt);
      used += ((int)strlen(&z[used]));
      zText++;
      n--;
    }else{
      z[used++] = c;
    }
  }
  z[used] = 0;
  return z;
}






        void translate_code(struct lemon *lemp, struct rule *rp){
  char *cp, *xp;
  int i;
  char lhsused = 0;
  char used[1000];

  for(i=0; i<rp->nrhs; i++) used[i] = 0;
  lhsused = 0;

  if( rp->code==0 ){
    static char newlinestr[2] = { '\n', '\0' };
    rp->code = newlinestr;
    rp->line = rp->ruleline;
  }

  append_str(0,0,0,0);


  for(cp=(char *)rp->code; *cp; cp++){
    if( isalpha(*cp) && (cp==rp->code || (!isalnum(cp[-1]) && cp[-1]!='_')) ){
      char saved;
      for(xp= &cp[1]; isalnum(*xp) || *xp=='_'; xp++);
      saved = *xp;
      *xp = 0;
      if( rp->lhsalias && strcmp(cp,rp->lhsalias)==0 ){
        append_str("yygotominor.yy%d",0,rp->lhs->dtnum,0);
        cp = xp;
        lhsused = 1;
      }else{
        for(i=0; i<rp->nrhs; i++){
          if( rp->rhsalias[i] && strcmp(cp,rp->rhsalias[i])==0 ){
            if( cp!=rp->code && cp[-1]=='@' ){


              append_str("yymsp[%d].major",-1,i-rp->nrhs+1,0);
            }else{
              struct symbol *sp = rp->rhs[i];
              int dtnum;
              if( sp->type==MULTITERMINAL ){
                dtnum = sp->subsym[0]->dtnum;
              }else{
                dtnum = sp->dtnum;
              }
              append_str("yymsp[%d].minor.yy%d",0,i-rp->nrhs+1, dtnum);
            }
            cp = xp;
            used[i] = 1;
            break;
          }
        }
      }
      *xp = saved;
    }
    append_str(cp, 1, 0, 0);
  }


  if( rp->lhsalias && !lhsused ){
    ErrorMsg(lemp->filename,rp->ruleline,
      "Label \"%s\" for \"%s(%s)\" is never used.",
        rp->lhsalias,rp->lhs->name,rp->lhsalias);
    lemp->errorcnt++;
  }



  for(i=0; i<rp->nrhs; i++){
    if( rp->rhsalias[i] && !used[i] ){
      ErrorMsg(lemp->filename,rp->ruleline,
        "Label %s for \"%s(%s)\" is never used.",
        rp->rhsalias[i],rp->rhs[i]->name,rp->rhsalias[i]);
      lemp->errorcnt++;
    }else if( rp->rhsalias[i]==0 ){
      if( has_destructor(rp->rhs[i],lemp) ){
        append_str("  yy_destructor(yypParser,%d,&yymsp[%d].minor);\n", 0,
           rp->rhs[i]->index,i-rp->nrhs+1);
      }else{

      }
    }
  }
  if( rp->code ){
    cp = append_str(0,0,0,0);
    rp->code = Strsafe(cp?cp:"");
  }
}





        void emit_code(
  FILE *out,
  struct rule *rp,
  struct lemon *lemp,
  int *lineno
){
 const char *cp;


 if( rp->code ){
   if (!lemp->nolinenosflag) { (*lineno)++; tplt_linedir(out,rp->line,lemp->filename); }
   fprintf(out,"{%s",rp->code);
   for(cp=rp->code; *cp; cp++){
     if( *cp=='\n' ) (*lineno)++;
   }
   fprintf(out,"}\n"); (*lineno)++;
   if (!lemp->nolinenosflag) { (*lineno)++; tplt_linedir(out,*lineno,lemp->outname); }
 }

 return;
}
# 3527 "/Users/skgchxngsxyz-osx/Downloads/lemon.c"
void print_stack_union(
  FILE *out,
  struct lemon *lemp,
  int *plineno,
  int mhflag
){
  int lineno = *plineno;
  char **types;
  int arraysize;
  int maxdtlength;
  char *stddt;
  int i,j;
  unsigned hash;
  const char *name;


  arraysize = lemp->nsymbol * 2;
  types = (char**)calloc( arraysize, sizeof(char*) );
  if( types==0 ){
    fprintf(__stderrp,"Out of memory.\n");
    exit(1);
  }
  for(i=0; i<arraysize; i++) types[i] = 0;
  maxdtlength = 0;
  if( lemp->vartype ){
    maxdtlength = ((int)strlen(lemp->vartype));
  }
  for(i=0; i<lemp->nsymbol; i++){
    int len;
    struct symbol *sp = lemp->symbols[i];
    if( sp->datatype==0 ) continue;
    len = ((int)strlen(sp->datatype));
    if( len>maxdtlength ) maxdtlength = len;
  }
  stddt = (char*)malloc( maxdtlength*2 + 1 );
  if( stddt==0 ){
    fprintf(__stderrp,"Out of memory.\n");
    exit(1);
  }







  for(i=0; i<lemp->nsymbol; i++){
    struct symbol *sp = lemp->symbols[i];
    char *cp;
    if( sp==lemp->errsym ){
      sp->dtnum = arraysize+1;
      continue;
    }
    if( sp->type!=NONTERMINAL || (sp->datatype==0 && lemp->vartype==0) ){
      sp->dtnum = 0;
      continue;
    }
    cp = sp->datatype;
    if( cp==0 ) cp = lemp->vartype;
    j = 0;
    while( isspace(*cp) ) cp++;
    while( *cp ) stddt[j++] = *cp++;
    while( j>0 && isspace(stddt[j-1]) ) j--;
    stddt[j] = 0;
    if( lemp->tokentype && strcmp(stddt, lemp->tokentype)==0 ){
      sp->dtnum = 0;
      continue;
    }
    hash = 0;
    for(j=0; stddt[j]; j++){
      hash = hash*53 + stddt[j];
    }
    hash = (hash & 0x7fffffff)%arraysize;
    while( types[hash] ){
      if( strcmp(types[hash],stddt)==0 ){
        sp->dtnum = hash + 1;
        break;
      }
      hash++;
      if( hash>=(unsigned)arraysize ) hash = 0;
    }
    if( types[hash]==0 ){
      sp->dtnum = hash + 1;
      types[hash] = (char*)malloc( ((int)strlen(stddt))+1 );
      if( types[hash]==0 ){
        fprintf(__stderrp,"Out of memory.\n");
        exit(1);
      }
      lemon_strcpy(types[hash],stddt);
    }
  }


  name = lemp->name ? lemp->name : "Parse";
  lineno = *plineno;
  if( mhflag ){ fprintf(out,"#if INTERFACE\n"); lineno++; }
  fprintf(out,"#define %sTOKENTYPE %s\n",name,
    lemp->tokentype?lemp->tokentype:"void*"); lineno++;
  if( mhflag ){ fprintf(out,"#endif\n"); lineno++; }
  fprintf(out,"typedef union {\n"); lineno++;
  fprintf(out,"  int yyinit;\n"); lineno++;
  fprintf(out,"  %sTOKENTYPE yy0;\n",name); lineno++;
  for(i=0; i<arraysize; i++){
    if( types[i]==0 ) continue;
    fprintf(out,"  %s yy%d;\n",types[i],i+1); lineno++;
    free(types[i]);
  }
  if( lemp->errsym->useCnt ){
    fprintf(out,"  int yy%d;\n",lemp->errsym->dtnum); lineno++;
  }
  free(stddt);
  free(types);
  fprintf(out,"} YYMINORTYPE;\n"); lineno++;
  *plineno = lineno;
}





static const char *minimum_size_type(int lwr, int upr){
  if( lwr>=0 ){
    if( upr<=255 ){
      return "unsigned char";
    }else if( upr<65535 ){
      return "unsigned short int";
    }else{
      return "unsigned int";
    }
  }else if( lwr>=-127 && upr<=127 ){
    return "signed char";
  }else if( lwr>=-32767 && upr<32767 ){
    return "short";
  }else{
    return "int";
  }
}







struct axset {
  struct state *stp;
  int isTkn;
  int nAction;
  int iOrder;
};




static int axset_compare(const void *a, const void *b){
  struct axset *p1 = (struct axset*)a;
  struct axset *p2 = (struct axset*)b;
  int c;
  c = p2->nAction - p1->nAction;
  if( c==0 ){
    c = p2->iOrder - p1->iOrder;
  }
  (__builtin_expect(!(c!=0 || p1==p2), 0) ? __assert_rtn(__func__, "/Users/skgchxngsxyz-osx/Downloads/lemon.c", 3689, "c!=0 || p1==p2") : (void)0);
  return c;
}




static void writeRuleText(FILE *out, struct rule *rp){
  int j;
  fprintf(out,"%s ::=", rp->lhs->name);
  for(j=0; j<rp->nrhs; j++){
    struct symbol *sp = rp->rhs[j];
    if( sp->type!=MULTITERMINAL ){
      fprintf(out," %s", sp->name);
    }else{
      int k;
      fprintf(out," %s", sp->subsym[0]->name);
      for(k=1; k<sp->nsubsym; k++){
        fprintf(out,"|%s",sp->subsym[k]->name);
      }
    }
  }
}



void ReportTable(
  struct lemon *lemp,
  int mhflag
){
  FILE *out, *in;
  char line[1000];
  int lineno;
  struct state *stp;
  struct action *ap;
  struct rule *rp;
  struct acttab *pActtab;
  int i, j, n;
  const char *name;
  int mnTknOfst, mxTknOfst;
  int mnNtOfst, mxNtOfst;
  struct axset *ax;

  in = tplt_open(lemp);
  if( in==0 ) return;
  out = file_open(lemp,".c","wb");
  if( out==0 ){
    fclose(in);
    return;
  }
  lineno = 1;
  tplt_xfer(lemp->name,in,out,&lineno);


  tplt_print(out,lemp,lemp->include,&lineno);
  if( mhflag ){
    char *name = file_makename(lemp, ".h");
    fprintf(out,"#include \"%s\"\n", name); lineno++;
    free(name);
  }
  tplt_xfer(lemp->name,in,out,&lineno);


  if( mhflag ){
    const char *prefix;
    fprintf(out,"#if INTERFACE\n"); lineno++;
    if( lemp->tokenprefix ) prefix = lemp->tokenprefix;
    else prefix = "";
    for(i=1; i<lemp->nterminal; i++){
      fprintf(out,"#define %s%-30s %2d\n",prefix,lemp->symbols[i]->name,i);
      lineno++;
    }
    fprintf(out,"#endif\n"); lineno++;
  }
  tplt_xfer(lemp->name,in,out,&lineno);


  fprintf(out,"#define YYCODETYPE %s\n",
    minimum_size_type(0, lemp->nsymbol+1)); lineno++;
  fprintf(out,"#define YYNOCODE %d\n",lemp->nsymbol+1); lineno++;
  fprintf(out,"#define YYACTIONTYPE %s\n",
    minimum_size_type(0, lemp->nstate+lemp->nrule+5)); lineno++;
  if( lemp->wildcard ){
    fprintf(out,"#define YYWILDCARD %d\n",
       lemp->wildcard->index); lineno++;
  }
  print_stack_union(out,lemp,&lineno,mhflag);
  fprintf(out, "#ifndef YYSTACKDEPTH\n"); lineno++;
  if( lemp->stacksize ){
    fprintf(out,"#define YYSTACKDEPTH %s\n",lemp->stacksize); lineno++;
  }else{
    fprintf(out,"#define YYSTACKDEPTH 100\n"); lineno++;
  }
  fprintf(out, "#endif\n"); lineno++;
  if( mhflag ){
    fprintf(out,"#if INTERFACE\n"); lineno++;
  }
  name = lemp->name ? lemp->name : "Parse";
  if( lemp->arg && lemp->arg[0] ){
    int i;
    i = ((int)strlen(lemp->arg));
    while( i>=1 && isspace(lemp->arg[i-1]) ) i--;
    while( i>=1 && (isalnum(lemp->arg[i-1]) || lemp->arg[i-1]=='_') ) i--;
    fprintf(out,"#define %sARG_SDECL %s;\n",name,lemp->arg); lineno++;
    fprintf(out,"#define %sARG_PDECL ,%s\n",name,lemp->arg); lineno++;
    fprintf(out,"#define %sARG_FETCH %s = yypParser->%s\n",
                 name,lemp->arg,&lemp->arg[i]); lineno++;
    fprintf(out,"#define %sARG_STORE yypParser->%s = %s\n",
                 name,&lemp->arg[i],&lemp->arg[i]); lineno++;
  }else{
    fprintf(out,"#define %sARG_SDECL\n",name); lineno++;
    fprintf(out,"#define %sARG_PDECL\n",name); lineno++;
    fprintf(out,"#define %sARG_FETCH\n",name); lineno++;
    fprintf(out,"#define %sARG_STORE\n",name); lineno++;
  }
  if( mhflag ){
    fprintf(out,"#endif\n"); lineno++;
  }
  fprintf(out,"#define YYNSTATE %d\n",lemp->nstate); lineno++;
  fprintf(out,"#define YYNRULE %d\n",lemp->nrule); lineno++;
  if( lemp->errsym->useCnt ){
    fprintf(out,"#define YYERRORSYMBOL %d\n",lemp->errsym->index); lineno++;
    fprintf(out,"#define YYERRSYMDT yy%d\n",lemp->errsym->dtnum); lineno++;
  }
  if( lemp->has_fallback ){
    fprintf(out,"#define YYFALLBACK 1\n"); lineno++;
  }
  tplt_xfer(lemp->name,in,out,&lineno);
# 3831 "/Users/skgchxngsxyz-osx/Downloads/lemon.c"
  ax = (struct axset *) calloc(lemp->nstate*2, sizeof(ax[0]));
  if( ax==0 ){
    fprintf(__stderrp,"malloc failed\n");
    exit(1);
  }
  for(i=0; i<lemp->nstate; i++){
    stp = lemp->sorted[i];
    ax[i*2].stp = stp;
    ax[i*2].isTkn = 1;
    ax[i*2].nAction = stp->nTknAct;
    ax[i*2+1].stp = stp;
    ax[i*2+1].isTkn = 0;
    ax[i*2+1].nAction = stp->nNtAct;
  }
  mxTknOfst = mnTknOfst = 0;
  mxNtOfst = mnNtOfst = 0;





  for(i=0; i<lemp->nstate*2; i++) ax[i].iOrder = i;
  qsort(ax, lemp->nstate*2, sizeof(ax[0]), axset_compare);
  pActtab = acttab_alloc();
  for(i=0; i<lemp->nstate*2 && ax[i].nAction>0; i++){
    stp = ax[i].stp;
    if( ax[i].isTkn ){
      for(ap=stp->ap; ap; ap=ap->next){
        int action;
        if( ap->sp->index>=lemp->nterminal ) continue;
        action = compute_action(lemp, ap);
        if( action<0 ) continue;
        acttab_action(pActtab, ap->sp->index, action);
      }
      stp->iTknOfst = acttab_insert(pActtab);
      if( stp->iTknOfst<mnTknOfst ) mnTknOfst = stp->iTknOfst;
      if( stp->iTknOfst>mxTknOfst ) mxTknOfst = stp->iTknOfst;
    }else{
      for(ap=stp->ap; ap; ap=ap->next){
        int action;
        if( ap->sp->index<lemp->nterminal ) continue;
        if( ap->sp->index==lemp->nsymbol ) continue;
        action = compute_action(lemp, ap);
        if( action<0 ) continue;
        acttab_action(pActtab, ap->sp->index, action);
      }
      stp->iNtOfst = acttab_insert(pActtab);
      if( stp->iNtOfst<mnNtOfst ) mnNtOfst = stp->iNtOfst;
      if( stp->iNtOfst>mxNtOfst ) mxNtOfst = stp->iNtOfst;
    }
  }
  free(ax);


  n = ((pActtab)->nAction);
  fprintf(out,"#define YY_ACTTAB_COUNT (%d)\n", n); lineno++;
  fprintf(out,"static const YYACTIONTYPE yy_action[] = {\n"); lineno++;
  for(i=j=0; i<n; i++){
    int action = ((pActtab)->aAction[i].action);
    if( action<0 ) action = lemp->nstate + lemp->nrule + 2;
    if( j==0 ) fprintf(out," /* %5d */ ", i);
    fprintf(out, " %4d,", action);
    if( j==9 || i==n-1 ){
      fprintf(out, "\n"); lineno++;
      j = 0;
    }else{
      j++;
    }
  }
  fprintf(out, "};\n"); lineno++;


  fprintf(out,"static const YYCODETYPE yy_lookahead[] = {\n"); lineno++;
  for(i=j=0; i<n; i++){
    int la = ((pActtab)->aAction[i].lookahead);
    if( la<0 ) la = lemp->nsymbol;
    if( j==0 ) fprintf(out," /* %5d */ ", i);
    fprintf(out, " %4d,", la);
    if( j==9 || i==n-1 ){
      fprintf(out, "\n"); lineno++;
      j = 0;
    }else{
      j++;
    }
  }
  fprintf(out, "};\n"); lineno++;


  fprintf(out, "#define YY_SHIFT_USE_DFLT (%d)\n", mnTknOfst-1); lineno++;
  n = lemp->nstate;
  while( n>0 && lemp->sorted[n-1]->iTknOfst==(-2147483647) ) n--;
  fprintf(out, "#define YY_SHIFT_COUNT (%d)\n", n-1); lineno++;
  fprintf(out, "#define YY_SHIFT_MIN   (%d)\n", mnTknOfst); lineno++;
  fprintf(out, "#define YY_SHIFT_MAX   (%d)\n", mxTknOfst); lineno++;
  fprintf(out, "static const %s yy_shift_ofst[] = {\n",
          minimum_size_type(mnTknOfst-1, mxTknOfst)); lineno++;
  for(i=j=0; i<n; i++){
    int ofst;
    stp = lemp->sorted[i];
    ofst = stp->iTknOfst;
    if( ofst==(-2147483647) ) ofst = mnTknOfst - 1;
    if( j==0 ) fprintf(out," /* %5d */ ", i);
    fprintf(out, " %4d,", ofst);
    if( j==9 || i==n-1 ){
      fprintf(out, "\n"); lineno++;
      j = 0;
    }else{
      j++;
    }
  }
  fprintf(out, "};\n"); lineno++;


  fprintf(out, "#define YY_REDUCE_USE_DFLT (%d)\n", mnNtOfst-1); lineno++;
  n = lemp->nstate;
  while( n>0 && lemp->sorted[n-1]->iNtOfst==(-2147483647) ) n--;
  fprintf(out, "#define YY_REDUCE_COUNT (%d)\n", n-1); lineno++;
  fprintf(out, "#define YY_REDUCE_MIN   (%d)\n", mnNtOfst); lineno++;
  fprintf(out, "#define YY_REDUCE_MAX   (%d)\n", mxNtOfst); lineno++;
  fprintf(out, "static const %s yy_reduce_ofst[] = {\n",
          minimum_size_type(mnNtOfst-1, mxNtOfst)); lineno++;
  for(i=j=0; i<n; i++){
    int ofst;
    stp = lemp->sorted[i];
    ofst = stp->iNtOfst;
    if( ofst==(-2147483647) ) ofst = mnNtOfst - 1;
    if( j==0 ) fprintf(out," /* %5d */ ", i);
    fprintf(out, " %4d,", ofst);
    if( j==9 || i==n-1 ){
      fprintf(out, "\n"); lineno++;
      j = 0;
    }else{
      j++;
    }
  }
  fprintf(out, "};\n"); lineno++;


  fprintf(out, "static const YYACTIONTYPE yy_default[] = {\n"); lineno++;
  n = lemp->nstate;
  for(i=j=0; i<n; i++){
    stp = lemp->sorted[i];
    if( j==0 ) fprintf(out," /* %5d */ ", i);
    fprintf(out, " %4d,", stp->iDflt);
    if( j==9 || i==n-1 ){
      fprintf(out, "\n"); lineno++;
      j = 0;
    }else{
      j++;
    }
  }
  fprintf(out, "};\n"); lineno++;
  tplt_xfer(lemp->name,in,out,&lineno);



  if( lemp->has_fallback ){
    int mx = lemp->nterminal - 1;
    while( mx>0 && lemp->symbols[mx]->fallback==0 ){ mx--; }
    for(i=0; i<=mx; i++){
      struct symbol *p = lemp->symbols[i];
      if( p->fallback==0 ){
        fprintf(out, "    0,  /* %10s => nothing */\n", p->name);
      }else{
        fprintf(out, "  %3d,  /* %10s => %s */\n", p->fallback->index,
          p->name, p->fallback->name);
      }
      lineno++;
    }
  }
  tplt_xfer(lemp->name, in, out, &lineno);



  for(i=0; i<lemp->nsymbol; i++){
    lemon_sprintf(line,"\"%s\",",lemp->symbols[i]->name);
    fprintf(out,"  %-15s",line);
    if( (i&3)==3 ){ fprintf(out,"\n"); lineno++; }
  }
  if( (i&3)!=0 ){ fprintf(out,"\n"); lineno++; }
  tplt_xfer(lemp->name,in,out,&lineno);





  for(i=0, rp=lemp->rule; rp; rp=rp->next, i++){
    (__builtin_expect(!(rp->index==i), 0) ? __assert_rtn(__func__, "/Users/skgchxngsxyz-osx/Downloads/lemon.c", 4018, "rp->index==i") : (void)0);
    fprintf(out," /* %3d */ \"", i);
    writeRuleText(out, rp);
    fprintf(out,"\",\n"); lineno++;
  }
  tplt_xfer(lemp->name,in,out,&lineno);





  if( lemp->tokendest ){
    int once = 1;
    for(i=0; i<lemp->nsymbol; i++){
      struct symbol *sp = lemp->symbols[i];
      if( sp==0 || sp->type!=TERMINAL ) continue;
      if( once ){
        fprintf(out, "      /* TERMINAL Destructor */\n"); lineno++;
        once = 0;
      }
      fprintf(out,"    case %d: /* %s */\n", sp->index, sp->name); lineno++;
    }
    for(i=0; i<lemp->nsymbol && lemp->symbols[i]->type!=TERMINAL; i++);
    if( i<lemp->nsymbol ){
      emit_destructor_code(out,lemp->symbols[i],lemp,&lineno);
      fprintf(out,"      break;\n"); lineno++;
    }
  }
  if( lemp->vardest ){
    struct symbol *dflt_sp = 0;
    int once = 1;
    for(i=0; i<lemp->nsymbol; i++){
      struct symbol *sp = lemp->symbols[i];
      if( sp==0 || sp->type==TERMINAL ||
          sp->index<=0 || sp->destructor!=0 ) continue;
      if( once ){
        fprintf(out, "      /* Default NON-TERMINAL Destructor */\n"); lineno++;
        once = 0;
      }
      fprintf(out,"    case %d: /* %s */\n", sp->index, sp->name); lineno++;
      dflt_sp = sp;
    }
    if( dflt_sp!=0 ){
      emit_destructor_code(out,dflt_sp,lemp,&lineno);
    }
    fprintf(out,"      break;\n"); lineno++;
  }
  for(i=0; i<lemp->nsymbol; i++){
    struct symbol *sp = lemp->symbols[i];
    if( sp==0 || sp->type==TERMINAL || sp->destructor==0 ) continue;
    fprintf(out,"    case %d: /* %s */\n", sp->index, sp->name); lineno++;


    for(j=i+1; j<lemp->nsymbol; j++){
      struct symbol *sp2 = lemp->symbols[j];
      if( sp2 && sp2->type!=TERMINAL && sp2->destructor
          && sp2->dtnum==sp->dtnum
          && strcmp(sp->destructor,sp2->destructor)==0 ){
         fprintf(out,"    case %d: /* %s */\n",
                 sp2->index, sp2->name); lineno++;
         sp2->destructor = 0;
      }
    }

    emit_destructor_code(out,lemp->symbols[i],lemp,&lineno);
    fprintf(out,"      break;\n"); lineno++;
  }
  tplt_xfer(lemp->name,in,out,&lineno);


  tplt_print(out,lemp,lemp->overflow,&lineno);
  tplt_xfer(lemp->name,in,out,&lineno);






  for(rp=lemp->rule; rp; rp=rp->next){
    fprintf(out,"  { %d, %d },\n",rp->lhs->index,rp->nrhs); lineno++;
  }
  tplt_xfer(lemp->name,in,out,&lineno);


  for(rp=lemp->rule; rp; rp=rp->next){
    translate_code(lemp, rp);
  }

  for(rp=lemp->rule; rp; rp=rp->next){
    struct rule *rp2;
    if( rp->code==0 ) continue;
    if( rp->code[0]=='\n' && rp->code[1]==0 ) continue;
    fprintf(out,"      case %d: /* ", rp->index);
    writeRuleText(out, rp);
    fprintf(out, " */\n"); lineno++;
    for(rp2=rp->next; rp2; rp2=rp2->next){
      if( rp2->code==rp->code ){
        fprintf(out,"      case %d: /* ", rp2->index);
        writeRuleText(out, rp2);
        fprintf(out," */ yytestcase(yyruleno==%d);\n", rp2->index); lineno++;
        rp2->code = 0;
      }
    }
    emit_code(out,rp,lemp,&lineno);
    fprintf(out,"        break;\n"); lineno++;
    rp->code = 0;
  }


  fprintf(out,"      default:\n"); lineno++;
  for(rp=lemp->rule; rp; rp=rp->next){
    if( rp->code==0 ) continue;
    (__builtin_expect(!(rp->code[0]=='\n' && rp->code[1]==0), 0) ? __assert_rtn(__func__, "/Users/skgchxngsxyz-osx/Downloads/lemon.c", 4130, "rp->code[0]=='\\n' && rp->code[1]==0") : (void)0);
    fprintf(out,"      /* (%d) ", rp->index);
    writeRuleText(out, rp);
    fprintf(out, " */ yytestcase(yyruleno==%d);\n", rp->index); lineno++;
  }
  fprintf(out,"        break;\n"); lineno++;
  tplt_xfer(lemp->name,in,out,&lineno);


  tplt_print(out,lemp,lemp->failure,&lineno);
  tplt_xfer(lemp->name,in,out,&lineno);


  tplt_print(out,lemp,lemp->error,&lineno);
  tplt_xfer(lemp->name,in,out,&lineno);


  tplt_print(out,lemp,lemp->accept,&lineno);
  tplt_xfer(lemp->name,in,out,&lineno);


  tplt_print(out,lemp,lemp->extracode,&lineno);

  fclose(in);
  fclose(out);
  return;
}


void ReportHeader(struct lemon *lemp)
{
  FILE *out, *in;
  const char *prefix;
  char line[1000];
  char pattern[1000];
  int i;

  if( lemp->tokenprefix ) prefix = lemp->tokenprefix;
  else prefix = "";
  in = file_open(lemp,".h","rb");
  if( in ){
    int nextChar;
    for(i=1; i<lemp->nterminal && fgets(line,1000,in); i++){
      lemon_sprintf(pattern,"#define %s%-30s %3d\n",
                    prefix,lemp->symbols[i]->name,i);
      if( strcmp(line,pattern) ) break;
    }
    nextChar = fgetc(in);
    fclose(in);
    if( i==lemp->nterminal && nextChar==(-1) ){

      return;
    }
  }
  out = file_open(lemp,".h","wb");
  if( out ){
    for(i=1; i<lemp->nterminal; i++){
      fprintf(out,"#define %s%-30s %3d\n",prefix,lemp->symbols[i]->name,i);
    }
    fclose(out);
  }
  return;
}
# 4201 "/Users/skgchxngsxyz-osx/Downloads/lemon.c"
void CompressTables(struct lemon *lemp)
{
  struct state *stp;
  struct action *ap, *ap2;
  struct rule *rp, *rp2, *rbest;
  int nbest, n;
  int i;
  int usesWildcard;

  for(i=0; i<lemp->nstate; i++){
    stp = lemp->sorted[i];
    nbest = 0;
    rbest = 0;
    usesWildcard = 0;

    for(ap=stp->ap; ap; ap=ap->next){
      if( ap->type==SHIFT && ap->sp==lemp->wildcard ){
        usesWildcard = 1;
      }
      if( ap->type!=REDUCE ) continue;
      rp = ap->x.rp;
      if( rp->lhsStart ) continue;
      if( rp==rbest ) continue;
      n = 1;
      for(ap2=ap->next; ap2; ap2=ap2->next){
        if( ap2->type!=REDUCE ) continue;
        rp2 = ap2->x.rp;
        if( rp2==rbest ) continue;
        if( rp2==rp ) n++;
      }
      if( n>nbest ){
        nbest = n;
        rbest = rp;
      }
    }





    if( nbest<1 || usesWildcard ) continue;



    for(ap=stp->ap; ap; ap=ap->next){
      if( ap->type==REDUCE && ap->x.rp==rbest ) break;
    }
    (__builtin_expect(!(ap), 0) ? __assert_rtn(__func__, "/Users/skgchxngsxyz-osx/Downloads/lemon.c", 4248, "ap") : (void)0);
    ap->sp = Symbol_new("{default}");
    for(ap=ap->next; ap; ap=ap->next){
      if( ap->type==REDUCE && ap->x.rp==rbest ) ap->type = NOT_USED;
    }
    stp->ap = Action_sort(stp->ap);
  }
}
# 4264 "/Users/skgchxngsxyz-osx/Downloads/lemon.c"
static int stateResortCompare(const void *a, const void *b){
  const struct state *pA = *(const struct state**)a;
  const struct state *pB = *(const struct state**)b;
  int n;

  n = pB->nNtAct - pA->nNtAct;
  if( n==0 ){
    n = pB->nTknAct - pA->nTknAct;
    if( n==0 ){
      n = pB->statenum - pA->statenum;
    }
  }
  (__builtin_expect(!(n!=0), 0) ? __assert_rtn(__func__, "/Users/skgchxngsxyz-osx/Downloads/lemon.c", 4276, "n!=0") : (void)0);
  return n;
}






void ResortStates(struct lemon *lemp)
{
  int i;
  struct state *stp;
  struct action *ap;

  for(i=0; i<lemp->nstate; i++){
    stp = lemp->sorted[i];
    stp->nTknAct = stp->nNtAct = 0;
    stp->iDflt = lemp->nstate + lemp->nrule;
    stp->iTknOfst = (-2147483647);
    stp->iNtOfst = (-2147483647);
    for(ap=stp->ap; ap; ap=ap->next){
      if( compute_action(lemp,ap)>=0 ){
        if( ap->sp->index<lemp->nterminal ){
          stp->nTknAct++;
        }else if( ap->sp->index<lemp->nsymbol ){
          stp->nNtAct++;
        }else{
          stp->iDflt = compute_action(lemp, ap);
        }
      }
    }
  }
  qsort(&lemp->sorted[1], lemp->nstate-1, sizeof(lemp->sorted[0]),
        stateResortCompare);
  for(i=0; i<lemp->nstate; i++){
    lemp->sorted[i]->statenum = i;
  }
}







static int size = 0;


void SetSize(int n)
{
  size = n+1;
}


char *SetNew(){
  char *s;
  s = (char*)calloc( size, 1);
  if( s==0 ){
    extern void memory_error();
    memory_error();
  }
  return s;
}


void SetFree(char *s)
{
  free(s);
}



int SetAdd(char *s, int e)
{
  int rv;
  (__builtin_expect(!(e>=0 && e<size), 0) ? __assert_rtn(__func__, "/Users/skgchxngsxyz-osx/Downloads/lemon.c", 4352, "e>=0 && e<size") : (void)0);
  rv = s[e];
  s[e] = 1;
  return !rv;
}


int SetUnion(char *s1, char *s2)
{
  int i, progress;
  progress = 0;
  for(i=0; i<size; i++){
    if( s2[i]==0 ) continue;
    if( s1[i]==0 ){
      progress = 1;
      s1[i] = 1;
    }
  }
  return progress;
}
# 4385 "/Users/skgchxngsxyz-osx/Downloads/lemon.c"
        unsigned strhash(const char *x)
{
  unsigned h = 0;
  while( *x ) h = h*13 + *(x++);
  return h;
}





const char *Strsafe(const char *y)
{
  const char *z;
  char *cpy;

  if( y==0 ) return 0;
  z = Strsafe_find(y);
  if( z==0 && (cpy=(char *)malloc( ((int)strlen(y))+1 ))!=0 ){
    lemon_strcpy(cpy,y);
    z = cpy;
    Strsafe_insert(z);
  }
  if((z)==0){ extern void memory_error(); memory_error(); };
  return z;
}




struct s_x1 {
  int size;


  int count;
  struct s_x1node *tbl;
  struct s_x1node **ht;
};




typedef struct s_x1node {
  const char *data;
  struct s_x1node *next;
  struct s_x1node **from;
} x1node;


static struct s_x1 *x1a;


void Strsafe_init(){
  if( x1a ) return;
  x1a = (struct s_x1*)malloc( sizeof(struct s_x1) );
  if( x1a ){
    x1a->size = 1024;
    x1a->count = 0;
    x1a->tbl = (x1node*)calloc(1024, sizeof(x1node) + sizeof(x1node*));
    if( x1a->tbl==0 ){
      free(x1a);
      x1a = 0;
    }else{
      int i;
      x1a->ht = (x1node**)&(x1a->tbl[1024]);
      for(i=0; i<1024; i++) x1a->ht[i] = 0;
    }
  }
}


int Strsafe_insert(const char *data)
{
  x1node *np;
  unsigned h;
  unsigned ph;

  if( x1a==0 ) return 0;
  ph = strhash(data);
  h = ph & (x1a->size-1);
  np = x1a->ht[h];
  while( np ){
    if( strcmp(np->data,data)==0 ){


      return 0;
    }
    np = np->next;
  }
  if( x1a->count>=x1a->size ){

    int i,size;
    struct s_x1 array;
    array.size = size = x1a->size*2;
    array.count = x1a->count;
    array.tbl = (x1node*)calloc(size, sizeof(x1node) + sizeof(x1node*));
    if( array.tbl==0 ) return 0;
    array.ht = (x1node**)&(array.tbl[size]);
    for(i=0; i<size; i++) array.ht[i] = 0;
    for(i=0; i<x1a->count; i++){
      x1node *oldnp, *newnp;
      oldnp = &(x1a->tbl[i]);
      h = strhash(oldnp->data) & (size-1);
      newnp = &(array.tbl[i]);
      if( array.ht[h] ) array.ht[h]->from = &(newnp->next);
      newnp->next = array.ht[h];
      newnp->data = oldnp->data;
      newnp->from = &(array.ht[h]);
      array.ht[h] = newnp;
    }
    free(x1a->tbl);
    *x1a = array;
  }

  h = ph & (x1a->size-1);
  np = &(x1a->tbl[x1a->count++]);
  np->data = data;
  if( x1a->ht[h] ) x1a->ht[h]->from = &(np->next);
  np->next = x1a->ht[h];
  x1a->ht[h] = np;
  np->from = &(x1a->ht[h]);
  return 1;
}



const char *Strsafe_find(const char *key)
{
  unsigned h;
  x1node *np;

  if( x1a==0 ) return 0;
  h = strhash(key) & (x1a->size-1);
  np = x1a->ht[h];
  while( np ){
    if( strcmp(np->data,key)==0 ) break;
    np = np->next;
  }
  return np ? np->data : 0;
}




struct symbol *Symbol_new(const char *x)
{
  struct symbol *sp;

  sp = Symbol_find(x);
  if( sp==0 ){
    sp = (struct symbol *)calloc(1, sizeof(struct symbol) );
    if((sp)==0){ extern void memory_error(); memory_error(); };
    sp->name = Strsafe(x);
    sp->type = isupper(*x) ? TERMINAL : NONTERMINAL;
    sp->rule = 0;
    sp->fallback = 0;
    sp->prec = -1;
    sp->assoc = UNK;
    sp->firstset = 0;
    sp->lambda = LEMON_FALSE;
    sp->destructor = 0;
    sp->destLineno = 0;
    sp->datatype = 0;
    sp->useCnt = 0;
    Symbol_insert(sp,sp->name);
  }
  sp->useCnt++;
  return sp;
}
# 4569 "/Users/skgchxngsxyz-osx/Downloads/lemon.c"
int Symbolcmpp(const void *_a, const void *_b)
{
  const struct symbol *a = *(const struct symbol **) _a;
  const struct symbol *b = *(const struct symbol **) _b;
  int i1 = a->type==MULTITERMINAL ? 3 : a->name[0]>'Z' ? 2 : 1;
  int i2 = b->type==MULTITERMINAL ? 3 : b->name[0]>'Z' ? 2 : 1;
  return i1==i2 ? a->index - b->index : i1 - i2;
}




struct s_x2 {
  int size;


  int count;
  struct s_x2node *tbl;
  struct s_x2node **ht;
};




typedef struct s_x2node {
  struct symbol *data;
  const char *key;
  struct s_x2node *next;
  struct s_x2node **from;
} x2node;


static struct s_x2 *x2a;


void Symbol_init(){
  if( x2a ) return;
  x2a = (struct s_x2*)malloc( sizeof(struct s_x2) );
  if( x2a ){
    x2a->size = 128;
    x2a->count = 0;
    x2a->tbl = (x2node*)calloc(128, sizeof(x2node) + sizeof(x2node*));
    if( x2a->tbl==0 ){
      free(x2a);
      x2a = 0;
    }else{
      int i;
      x2a->ht = (x2node**)&(x2a->tbl[128]);
      for(i=0; i<128; i++) x2a->ht[i] = 0;
    }
  }
}


int Symbol_insert(struct symbol *data, const char *key)
{
  x2node *np;
  unsigned h;
  unsigned ph;

  if( x2a==0 ) return 0;
  ph = strhash(key);
  h = ph & (x2a->size-1);
  np = x2a->ht[h];
  while( np ){
    if( strcmp(np->key,key)==0 ){


      return 0;
    }
    np = np->next;
  }
  if( x2a->count>=x2a->size ){

    int i,size;
    struct s_x2 array;
    array.size = size = x2a->size*2;
    array.count = x2a->count;
    array.tbl = (x2node*)calloc(size, sizeof(x2node) + sizeof(x2node*));
    if( array.tbl==0 ) return 0;
    array.ht = (x2node**)&(array.tbl[size]);
    for(i=0; i<size; i++) array.ht[i] = 0;
    for(i=0; i<x2a->count; i++){
      x2node *oldnp, *newnp;
      oldnp = &(x2a->tbl[i]);
      h = strhash(oldnp->key) & (size-1);
      newnp = &(array.tbl[i]);
      if( array.ht[h] ) array.ht[h]->from = &(newnp->next);
      newnp->next = array.ht[h];
      newnp->key = oldnp->key;
      newnp->data = oldnp->data;
      newnp->from = &(array.ht[h]);
      array.ht[h] = newnp;
    }
    free(x2a->tbl);
    *x2a = array;
  }

  h = ph & (x2a->size-1);
  np = &(x2a->tbl[x2a->count++]);
  np->key = key;
  np->data = data;
  if( x2a->ht[h] ) x2a->ht[h]->from = &(np->next);
  np->next = x2a->ht[h];
  x2a->ht[h] = np;
  np->from = &(x2a->ht[h]);
  return 1;
}



struct symbol *Symbol_find(const char *key)
{
  unsigned h;
  x2node *np;

  if( x2a==0 ) return 0;
  h = strhash(key) & (x2a->size-1);
  np = x2a->ht[h];
  while( np ){
    if( strcmp(np->key,key)==0 ) break;
    np = np->next;
  }
  return np ? np->data : 0;
}


struct symbol *Symbol_Nth(int n)
{
  struct symbol *data;
  if( x2a && n>0 && n<=x2a->count ){
    data = x2a->tbl[n-1].data;
  }else{
    data = 0;
  }
  return data;
}


int Symbol_count()
{
  return x2a ? x2a->count : 0;
}




struct symbol **Symbol_arrayof()
{
  struct symbol **array;
  int i,size;
  if( x2a==0 ) return 0;
  size = x2a->count;
  array = (struct symbol **)calloc(size, sizeof(struct symbol *));
  if( array ){
    for(i=0; i<size; i++) array[i] = x2a->tbl[i].data;
  }
  return array;
}


int Configcmp(const char *_a,const char *_b)
{
  const struct config *a = (struct config *) _a;
  const struct config *b = (struct config *) _b;
  int x;
  x = a->rp->index - b->rp->index;
  if( x==0 ) x = a->dot - b->dot;
  return x;
}


        int statecmp(struct config *a, struct config *b)
{
  int rc;
  for(rc=0; rc==0 && a && b; a=a->bp, b=b->bp){
    rc = a->rp->index - b->rp->index;
    if( rc==0 ) rc = a->dot - b->dot;
  }
  if( rc==0 ){
    if( a ) rc = 1;
    if( b ) rc = -1;
  }
  return rc;
}


        unsigned statehash(struct config *a)
{
  unsigned h=0;
  while( a ){
    h = h*571 + a->rp->index*37 + a->dot;
    a = a->bp;
  }
  return h;
}


struct state *State_new()
{
  struct state *newstate;
  newstate = (struct state *)calloc(1, sizeof(struct state) );
  if((newstate)==0){ extern void memory_error(); memory_error(); };
  return newstate;
}




struct s_x3 {
  int size;


  int count;
  struct s_x3node *tbl;
  struct s_x3node **ht;
};




typedef struct s_x3node {
  struct state *data;
  struct config *key;
  struct s_x3node *next;
  struct s_x3node **from;
} x3node;


static struct s_x3 *x3a;


void State_init(){
  if( x3a ) return;
  x3a = (struct s_x3*)malloc( sizeof(struct s_x3) );
  if( x3a ){
    x3a->size = 128;
    x3a->count = 0;
    x3a->tbl = (x3node*)calloc(128, sizeof(x3node) + sizeof(x3node*));
    if( x3a->tbl==0 ){
      free(x3a);
      x3a = 0;
    }else{
      int i;
      x3a->ht = (x3node**)&(x3a->tbl[128]);
      for(i=0; i<128; i++) x3a->ht[i] = 0;
    }
  }
}


int State_insert(struct state *data, struct config *key)
{
  x3node *np;
  unsigned h;
  unsigned ph;

  if( x3a==0 ) return 0;
  ph = statehash(key);
  h = ph & (x3a->size-1);
  np = x3a->ht[h];
  while( np ){
    if( statecmp(np->key,key)==0 ){


      return 0;
    }
    np = np->next;
  }
  if( x3a->count>=x3a->size ){

    int i,size;
    struct s_x3 array;
    array.size = size = x3a->size*2;
    array.count = x3a->count;
    array.tbl = (x3node*)calloc(size, sizeof(x3node) + sizeof(x3node*));
    if( array.tbl==0 ) return 0;
    array.ht = (x3node**)&(array.tbl[size]);
    for(i=0; i<size; i++) array.ht[i] = 0;
    for(i=0; i<x3a->count; i++){
      x3node *oldnp, *newnp;
      oldnp = &(x3a->tbl[i]);
      h = statehash(oldnp->key) & (size-1);
      newnp = &(array.tbl[i]);
      if( array.ht[h] ) array.ht[h]->from = &(newnp->next);
      newnp->next = array.ht[h];
      newnp->key = oldnp->key;
      newnp->data = oldnp->data;
      newnp->from = &(array.ht[h]);
      array.ht[h] = newnp;
    }
    free(x3a->tbl);
    *x3a = array;
  }

  h = ph & (x3a->size-1);
  np = &(x3a->tbl[x3a->count++]);
  np->key = key;
  np->data = data;
  if( x3a->ht[h] ) x3a->ht[h]->from = &(np->next);
  np->next = x3a->ht[h];
  x3a->ht[h] = np;
  np->from = &(x3a->ht[h]);
  return 1;
}



struct state *State_find(struct config *key)
{
  unsigned h;
  x3node *np;

  if( x3a==0 ) return 0;
  h = statehash(key) & (x3a->size-1);
  np = x3a->ht[h];
  while( np ){
    if( statecmp(np->key,key)==0 ) break;
    np = np->next;
  }
  return np ? np->data : 0;
}




struct state **State_arrayof()
{
  struct state **array;
  int i,size;
  if( x3a==0 ) return 0;
  size = x3a->count;
  array = (struct state **)calloc(size, sizeof(struct state *));
  if( array ){
    for(i=0; i<size; i++) array[i] = x3a->tbl[i].data;
  }
  return array;
}


        unsigned confighash(struct config *a)
{
  unsigned h=0;
  h = h*571 + a->rp->index*37 + a->dot;
  return h;
}




struct s_x4 {
  int size;


  int count;
  struct s_x4node *tbl;
  struct s_x4node **ht;
};




typedef struct s_x4node {
  struct config *data;
  struct s_x4node *next;
  struct s_x4node **from;
} x4node;


static struct s_x4 *x4a;


void Configtable_init(){
  if( x4a ) return;
  x4a = (struct s_x4*)malloc( sizeof(struct s_x4) );
  if( x4a ){
    x4a->size = 64;
    x4a->count = 0;
    x4a->tbl = (x4node*)calloc(64, sizeof(x4node) + sizeof(x4node*));
    if( x4a->tbl==0 ){
      free(x4a);
      x4a = 0;
    }else{
      int i;
      x4a->ht = (x4node**)&(x4a->tbl[64]);
      for(i=0; i<64; i++) x4a->ht[i] = 0;
    }
  }
}


int Configtable_insert(struct config *data)
{
  x4node *np;
  unsigned h;
  unsigned ph;

  if( x4a==0 ) return 0;
  ph = confighash(data);
  h = ph & (x4a->size-1);
  np = x4a->ht[h];
  while( np ){
    if( Configcmp((const char *) np->data,(const char *) data)==0 ){


      return 0;
    }
    np = np->next;
  }
  if( x4a->count>=x4a->size ){

    int i,size;
    struct s_x4 array;
    array.size = size = x4a->size*2;
    array.count = x4a->count;
    array.tbl = (x4node*)calloc(size, sizeof(x4node) + sizeof(x4node*));
    if( array.tbl==0 ) return 0;
    array.ht = (x4node**)&(array.tbl[size]);
    for(i=0; i<size; i++) array.ht[i] = 0;
    for(i=0; i<x4a->count; i++){
      x4node *oldnp, *newnp;
      oldnp = &(x4a->tbl[i]);
      h = confighash(oldnp->data) & (size-1);
      newnp = &(array.tbl[i]);
      if( array.ht[h] ) array.ht[h]->from = &(newnp->next);
      newnp->next = array.ht[h];
      newnp->data = oldnp->data;
      newnp->from = &(array.ht[h]);
      array.ht[h] = newnp;
    }
    free(x4a->tbl);
    *x4a = array;
  }

  h = ph & (x4a->size-1);
  np = &(x4a->tbl[x4a->count++]);
  np->data = data;
  if( x4a->ht[h] ) x4a->ht[h]->from = &(np->next);
  np->next = x4a->ht[h];
  x4a->ht[h] = np;
  np->from = &(x4a->ht[h]);
  return 1;
}



struct config *Configtable_find(struct config *key)
{
  int h;
  x4node *np;

  if( x4a==0 ) return 0;
  h = confighash(key) & (x4a->size-1);
  np = x4a->ht[h];
  while( np ){
    if( Configcmp((const char *) np->data,(const char *) key)==0 ) break;
    np = np->next;
  }
  return np ? np->data : 0;
}



void Configtable_clear(int(*f)(struct config *))
{
  int i;
  if( x4a==0 || x4a->count==0 ) return;
  if( f ) for(i=0; i<x4a->count; i++) (*f)(x4a->tbl[i].data);
  for(i=0; i<x4a->size; i++) x4a->ht[i] = 0;
  x4a->count = 0;
  return;
}
