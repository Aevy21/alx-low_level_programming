#!/bin/bash
gcc -Wall -fPIC -c *.c
gcc -fPIC -shared -o liball.so *.c
rm -f *.o
