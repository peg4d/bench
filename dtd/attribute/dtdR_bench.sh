#!/bin/sh
BENCHDIR=xmllint_bench
for in 1 2 3 4 5 6 7 8
   do
   echo "\nR"${i}"_START\n"
   time -p xmllint --valid dtdattr_R${i}.dtd dtdattr_E${i}_R${i}.xml >     $BENCHDIR/dtdattr_R${i}.txt
   echo "\nR"${i}"_END\n"
  done

