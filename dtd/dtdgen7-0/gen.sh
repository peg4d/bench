#!/bin/sh


for file in xml/*
do
    echo $file
    java DTDGenerator $file > ${file}.dtd
done
