#!/bin/bash
gcc -fPIC -c *.c
gcc -shared liball.so -o liball.so *.o
