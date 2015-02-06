#!/bin/sh
BENCHDIR=dtd_bench

echo "\nO1_START\n"
java -jar nez_dtd_validator.jar --bench dtdattr_O1.dtd dtdattr_E1.xml > $BENCHDIR/dtdattr_O1.txt
echo "\nO1_END\n"

echo "\nO2_START\n"
java -jar nez_dtd_validator.jar --bench dtdattr_O2.dtd dtdattr_E2.xml > $BENCHDIR/dtdattr_O2.txt
echo "\nO2_END\n"

echo "\nO3_START\n"
java -jar nez_dtd_validator.jar --bench dtdattr_O3.dtd dtdattr_E3.xml > $BENCHDIR/dtdattr_O3.txt
echo "\nO3_END\n"

echo "\nO4_START\n"
java -jar nez_dtd_validator.jar --bench dtdattr_O4.dtd dtdattr_E4.xml > $BENCHDIR/dtdattr_O4.txt
echo "\nO4_END\n"

echo "\nO5_START\n"
java -jar nez_dtd_validator.jar --bench dtdattr_O5.dtd dtdattr_E5.xml > $BENCHDIR/dtdattr_O5.txt
echo "\nR5_END\n"

echo "\nO6_START\n"
java -jar nez_dtd_validator.jar --bench dtdattr_O6.dtd dtdattr_E6.xml > $BENCHDIR/dtdattr_O6.txt
echo "\nO6_END\n"

echo "\nO7_START\n"
java -jar nez_dtd_validator.jar --bench dtdattr_O7.dtd dtdattr_E7.xml > $BENCHDIR/dtdattr_O7.txt
echo "\nO7_END\n"

echo "\nO8_START\n"
java -jar nez_dtd_validator.jar --bench dtdattr_O8.dtd dtdattr_E8.xml > $BENCHDIR/dtdattr_O8.txt
echo "\nO8_END\n"

#echo "\nO9_START\n"
#java -jar nez_dtd_validator.jar --bench dtdattr_O9.dtd dtdattr_E9.xml > $BENCHDIR/dtdattr_O9.txt
#echo "\nO9_END\n"