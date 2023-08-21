#!/bin/bash
gcc -c *.c -fpic
gcc *.o -share -o libdynamic.so