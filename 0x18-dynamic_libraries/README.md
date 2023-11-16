# Dynamic Library README

This repository contains a dynamic library for Basic c functions . Dynamic libraries allow for code reuse and efficient memory usage. Follow the instructions below to create and use the dynamic library on a Linux system.

## Building the Dynamic Library

1. **Compile Source Code:**
    ```bash
    gcc -c -fPIC *.c
    ```

2. **Create Shared Library:**
    ```bash
    gcc -shared -o libdynamic.so *.c
    ```

## Using the Dynamic Library

3. **Compile Your Program:**
    ```bash
     gcc -Wall -pedantic -Werror -Wextra -L. 0-main.c -ldynamic -o len
    ```

4. **Run Your Program:**
    ```bash
    ./len
    ```

Ensure to replace `your_library.c`, `your_program.c`, and related placeholders with your actual file names.

## Cleaning Up

5. **Clean Object Files:**
    ```bash
    rm *.0
    ```

6. **Clean Dynamic Library:**
    ```bash
    rm libdynamic.so
    ```
