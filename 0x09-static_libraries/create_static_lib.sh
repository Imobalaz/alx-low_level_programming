#!/bin/bash
gcc -Wall -Wextra -Werror -pedantic -c *.c
ar -t liball.a *.o
