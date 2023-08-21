#!/bin/bash
gcc -c -Wall -Werror -fPIC *.c
gcc -shared -o libfoo.so *.o

