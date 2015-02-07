#!/bin/sh
BENCHDIR=xmllint_bench


for i in 1 2 3 4 5 6 7 8
do
echo "\nO"${i}"_START\n"
time -p xmllint --valid dtdattr_E${i}_O${i}.xml >     $BENCHDIR/dtdattr_O${i}.txt
echo "\nO"${i}"_END\n"
done

