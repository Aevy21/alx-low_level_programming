#!/bin/bash

# Compile all .c files in the current directory and create a dynamic library named liball.so

# Compile each .c file into object files
for file in *.c; do
    gcc -Wall -fPIC -c "$file" -o "${file%.c}.o"
done

# Create the dynamic library
gcc -shared -o liball.so *.o

# Clean up object files
rm *.o

echo "Dynamic library liball.so created successfully."

