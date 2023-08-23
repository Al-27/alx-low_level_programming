#!/bin/bash
gcc -shared -o liball.so -fPIC *.c
export LD_LIBRARY_PATH=$LD_LIBRARY_PATH:$PWD/liball.so
