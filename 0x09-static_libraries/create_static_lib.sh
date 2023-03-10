#!/bin/bash

# Compile all .c files in the current directory into object files
gcc -Wall -Werror -Wextra -pedantic -c *.c

# Create the static library
ar rcs liball.a *.o

# Clean up the object files
rm *.o

