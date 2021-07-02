#!/bin/sh

#  Script.sh
#  OSInterface
#
#  Created by sfky on 2021/7/2.
#  

gcc -c method.c
ar -r method.a method.o
gcc main.c file_in.c process.c method.a -o main
./main test.bat abcd efgh ijkl
