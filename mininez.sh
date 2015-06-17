#!/bin/sh
NEZ=../nezvm1/build
INPUT=input
INFILE=`basename $1`
CFILE="${INFILE}.c"
EXECFILE="${INFILE}.o"

for file in dtd/mininez/*.bin; do
    echo "${file}"
    input=`basename ${file}`
    input=${input%.*}
    input=${input%.*}
    input=${input%.*}
    input=${input%.*}
    echo "${input}"
    ./$NEZ/nezvm -t stat -p ${file} -i gov/xml/${input}.xml > /dev/null 2>&1
done