#!/bin/bash
Gcc -Wall -Wextra -Werror -pedantic -c -fPIC *.c
Gcc -shared -o liball.so *.o
Export LD_LIBRARY_PATH=.:$LD_LIBRARY_PATH
