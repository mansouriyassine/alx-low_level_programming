#!/bin/bash
gcc -shared -o /tmp/winner.so -nostartfiles -nostartfiles /tmp/winner.c
LD_PRELOAD=/tmp/winner.so
