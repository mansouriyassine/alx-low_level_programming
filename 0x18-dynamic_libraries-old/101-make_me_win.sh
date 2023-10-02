#!/bin/bash
gcc -shared -o myprintf.so -fPIC congrats.c
export LD_PRELOAD=./myprintf.so
