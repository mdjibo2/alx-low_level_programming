#!/bin/bash
gcc -c -fPIC *.c
gcc -shared -o liball.so *.o
export LD_LIBRARY_PATH=pwd
$LD_LIBRARY_PATH
