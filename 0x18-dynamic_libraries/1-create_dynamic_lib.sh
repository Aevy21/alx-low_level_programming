#!/bin/bash
gcc -c -fPIC  -c *.c
gcc -shared -o liball.so *.o
