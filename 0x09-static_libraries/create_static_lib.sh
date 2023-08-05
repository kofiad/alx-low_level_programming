#!/bin/bash

#compile each .c file into individual object files
gcc -c *.c

#creating static library liball.a with individual object files
ar rcs liball.a *.o

#remove all object files
rm -f *.o

echo "static library created"
