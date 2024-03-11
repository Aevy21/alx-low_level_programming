# Search Algorithms README

## Overview
This README provides an overview of three common search algorithms: linear search, binary search, and hashing. It includes definitions, explanations of time and space complexities, and insights into their efficiency.

## Algorithm
### Definition
An algorithm is a step-by-step procedure or set of rules designed to solve a specific problem or perform a particular task. It provides a systematic way of solving problems by defining a sequence of well-defined instructions that, when followed, lead to the solution of the problem.

## Linear Search Algorithm
### Definition
Linear search is a simple search algorithm that sequentially checks each element in a collection until the target element is found or the end of the collection is reached.

### Time Complexity
- **Definition:** Time complexity refers to the amount of time an algorithm takes to complete its execution, as a function of the size of the input.
- **Worst Case:** O(n) - Linearly proportional to the size of the input array.
- **Best Case:** O(1) - If the target element is found at the beginning of the array.

### Space Complexity
- **Definition:** Space complexity refers to the amount of memory space required by an algorithm to solve a particular problem, as a function of the input size.
- O(1) - Constant space complexity, as it only requires a fixed amount of memory regardless of the input size.

## Binary Search Algorithm
### Definition
Binary search is a search algorithm that works on sorted arrays by repeatedly dividing the search interval in half until the target element is found or the interval is empty.

### Time Complexity
- **Definition:** Time complexity refers to the amount of time an algorithm takes to complete its execution, as a function of the size of the input.
- **Worst Case:** O(log n) - Logarithmic time complexity due to halving the search interval with each comparison.
- **Best Case:** O(1) - If the target element is found at the middle of the array.

### Space Complexity
- **Definition:** Space complexity refers to the amount of memory space required by an algorithm to solve a particular problem, as a function of the input size.
- O(1) - Constant space complexity, as it only requires a fixed amount of memory regardless of the input size.

## Hashing Algorithm
### Definition
Hashing is a technique used to map data of arbitrary size to fixed-size values called hash codes or hash values. It is commonly used in data structures like hash tables for efficient storage and retrieval.

### Time Complexity
- **Definition:** Time complexity refers to the amount of time an algorithm takes to complete its execution, as a function of the size of the input.
- **Average Case:** O(1) - Constant time complexity for insertion, deletion, and retrieval operations.
- **Worst Case:** O(n) - Linear time complexity in case of hash collisions or poor hash function.

### Space Complexity
- **Definition:** Space complexity refers to the amount of memory space required by an algorithm to solve a particular problem, as a function of the input size.
- O(n) - Space complexity depends on the number of elements stored in the hash table.
