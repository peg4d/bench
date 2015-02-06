#!/bin/sh
BENCHDIR=dtd_bench

echo "\nR1_START\n"
java -jar nez_dtd_validator.jar --bench dtdattr_R1.dtd dtdattr_E1.xml > $BENCHDIR/dtdattr_R1.txt
echo "\nR1_END\n"

echo "\nR2_START\n"
java -jar nez_dtd_validator.jar --bench dtdattr_R2.dtd dtdattr_E2.xml > $BENCHDIR/dtdattr_R2.txt
echo "\nR2_END\n"

echo "\nR3_START\n"
java -jar nez_dtd_validator.jar --bench dtdattr_R3.dtd dtdattr_E3.xml > $BENCHDIR/dtdattr_R3.txt
echo "\nR3_END\n"

echo "\nR4_START\n"
java -jar nez_dtd_validator.jar --bench dtdattr_R4.dtd dtdattr_E4.xml > $BENCHDIR/dtdattr_R4.txt
echo "\nR4_END\n"

echo "\nR5_START\n"
java -jar nez_dtd_validator.jar --bench dtdattr_R5.dtd dtdattr_E5.xml > $BENCHDIR/dtdattr_R5.txt
echo "\nR5_END\n"

echo "\nR6_START\n"
java -jar nez_dtd_validator.jar --bench dtdattr_R6.dtd dtdattr_E6.xml > $BENCHDIR/dtdattr_R6.txt
echo "\nR6_END\n"

echo "\nR7_START\n"
java -jar nez_dtd_validator.jar --bench dtdattr_R7.dtd dtdattr_E7.xml > $BENCHDIR/dtdattr_R7.txt
echo "\nR7_END\n"

echo "\nR8_START\n"
java -jar nez_dtd_validator.jar --bench dtdattr_R8.dtd dtdattr_E8.xml > $BENCHDIR/dtdattr_R8.txt
echo "\nR8_END\n"

#echo "\nR9_START\n"
#java -jar nez_dtd_validator.jar --bench dtdattr_R9.dtd dtdattr_E9.xml > $BENCHDIR/dtdattr_R9.txt
#echo "\nR9_END\n"
