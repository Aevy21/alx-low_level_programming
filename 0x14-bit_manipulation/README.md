A README for Bit Manipulation

# Bit Manipulation in Programming

Bit manipulation is a fundamental technique in computer programming that involves the manipulation of individual bits within binary representations of data. This README provides an overview of bit manipulation concepts and common operations in various programming languages.

## Table of Contents
1. [Introduction](#introduction)
2. [Bitwise Operators](#bitwise-operators)
3. [Common Bit Manipulation Techniques](#common-bit-manipulation-techniques)
4. [Examples](#examples)
5. [Resources](#resources)

## Introduction

Bit manipulation is often used for tasks such as:

- **Bitwise AND, OR, XOR:** Combining or altering individual bits within numbers.
- **Bitwise Shifts:** Moving bits left or right within a binary representation.
- **Bitwise NOT:** Flipping all bits in a number.
- **Bit Masks:** Using specific patterns to extract or modify bits.

## Bitwise Operators

Common bitwise operators in programming languages include:

- `&` (Bitwise AND): Sets a bit to 1 if it exists in both operands.
- `|` (Bitwise OR): Sets a bit to 1 if it exists in either operand.
- `^` (Bitwise XOR): Sets a bit to 1 if it exists in one operand but not the other.
- `~` (Bitwise NOT): Inverts all bits in a number.
- `<<` (Left Shift): Shifts bits left by a specified number of positions.
- `>>` (Right Shift): Shifts bits right by a specified number of positions.

Common Bit Manipulation Operations in C

Bit manipulation in C is often used for various purposes, including low-level hardware programming, optimizing algorithms, and handling binary data. Here are some common bit manipulation operations in C:

1. **Setting a Bit:**
   To set a specific bit at position `bit_position` in an integer variable `num` to 1, you can use the bitwise OR (`|`) operator along with the left shift (`<<`) operator.
   
   ```c
   num |= (1 << bit_position);
   ```

2. **Clearing a Bit:**
   To clear a specific bit at position `bit_position` in an integer variable `num` (set it to 0), you can use the bitwise AND (`&`) operator along with the bitwise NOT (`~`) operator and left shift (`<<`) operator.
   
   ```c
   num &= ~(1 << bit_position);
   ```

3. **Toggling a Bit:**
   To toggle (flip) a specific bit at position `bit_position` in an integer variable `num`, you can use the bitwise XOR (`^`) operator along with the left shift (`<<`) operator.
   
   ```c
   num ^= (1 << bit_position);
   ```

4. **Checking if a Bit is Set:**
   To check if a specific bit at position `bit_position` in an integer variable `num` is set (equals 1), you can use the bitwise AND (`&`) operator.
   
   ```c
   is_set = (num & (1 << bit_position)) != 0;
   ```

5. **Bit Count (Hamming Weight):**
   To count the number of set bits (1s) in an integer variable `num`, you can use a loop and bitwise AND (`&`) operations.
   
   ```c
   int count = 0;
   while (num) {
       count += num & 1;
       num >>= 1;
   }
   ```

6. **Swapping Two Numbers:**
   To swap the values of two integer variables `a` and `b` without using a temporary variable, you can use bitwise XOR (`^`) operations.
   
   ```c
   a = a ^ b;
   b = a ^ b;
   a = a ^ b;
   ```


