#!/bin/bash

# Remove any existing object files and the old liball.a
rm -f *.o
rm -f liball.a

# Compile all .c files into object files
for file in *.c; do
	gcc -Wall -Werror -Wextra -pedantic -c "$file" -o "${file%.*}.o"
done

# Create the static library liball.a from all object files
ar rcs liball.a *.o
