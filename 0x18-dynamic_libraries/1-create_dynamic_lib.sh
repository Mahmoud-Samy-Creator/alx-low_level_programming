#!/bin/bash
gcc *c -c -fpic
gcc *.o -share -o liball.so