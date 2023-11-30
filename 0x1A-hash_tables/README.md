# Hash Table Implementation in C

This repository provides a basic implementation of a hash table in C, utilizing chaining for collision resolution. The implementation includes functions to create a hash table, insert items, delete items, and handle collisions through linked lists.


## Table of Contents

- [Overview](#overview)
- [Prerequisites](#prerequisites)
- [Files](#files)
- [Usage](#usage)
- [Functions](#functions)
  - [Creating Items](#creating-items)
  - [Creating a Hash Table](#creating-a-hash-table)
  - [Creating a Hash Function](#creating-a-hash-function)
  - [Inserting Items](#inserting-items)
  - [Deleting Items](#deleting-items)
- [Contributing](#contributing)
- [License](#license)

## Overview

This implementation uses a hash table data structure to efficiently store key-value pairs. Chaining is employed to handle collisions, where each index of the hash table's array points to the head of a linked list. This allows multiple key-value pairs with the same hash to coexist at the same index.

## Prerequisites

Ensure you have a C compiler installed on your system.

## Files

- `hash_table.c`: Contains the implementation of hash table functions.
- `hash_table.h`: Header file defining structures and function prototypes.
- `main.c`: Example usage of the hash table functions.

## Usage

1. Clone the repository:

    ```bash
    git clone https://github.com/AEVY21/hash-table-c.git
    cd hash-table-c
    ```

2. Compile the code:

    ```bash
    gcc -o my_program main.c hash_table.c
    ```

3. Run the executable:

    ```bash
    ./my_program
    ```

## Functions

### Creating Items

To create an item (key-value pair) for the hash table, use the `create_item` function. This function allocates memory for the key and value, copies the provided values, and returns a pointer to the newly created item.

**Steps:**
1. Allocate memory for a new `Ht_item` structure using `malloc`.
2. Allocate memory for the key and value strings within the structure.
3. Copy the provided key and value strings into the allocated memory.
4. Return a pointer to the newly created `Ht_item`.

### Creating a Hash Table

Use the `hash_table_create` function to create a new hash table. This function allocates memory for the hash table structure and the array of pointers to hash nodes (buckets). It returns a pointer to the newly created hash table.

**Steps:**
1. Allocate memory for a new `hash_table_t` structure using `malloc`.
2. Allocate memory for the array of pointers (`array`) within the structure using `calloc`.
3. Initialize the size of the hash table.
4. Return a pointer to the newly created `hash_table_t`.

### Creating a Hash Function

Design a hash function to convert keys into indices. A simple hash function can sum the ASCII values of characters in the key and take the modulo of the table size. Ensure the function distributes keys evenly to avoid clustering.

**Steps:**
1. Iterate through each character in the key.
2. Sum the ASCII values of the characters.
3. Take the modulo of the sum with the size of the hash table.
4. Return the calculated index.

### Inserting Items

Inserting items into the hash table involves hashing the key to determine the index, handling collisions (if any), and inserting the item into the linked list at the specified index.

**Steps:**
1. Compute the hash value of the key to get the index.
2. Check if there is already an item at the calculated index.
3. If the index is empty, insert the new item directly.
4. If the index is not empty, handle collisions (e.g., chaining with linked lists).
5. Insert the new item into the linked list or perform the necessary collision resolution strategy.

### Deleting Items

Deleting items from the hash table requires finding the index using the hash function, traversing the linked list to locate the item, and adjusting pointers to remove the item.

**Steps:**
1. Compute the hash value of the key to get the index.
2. Traverse the linked list at the calculated index to find the item.
3. Adjust pointers to remove the item from the linked list.
4. Free the memory allocated for the removed item.
