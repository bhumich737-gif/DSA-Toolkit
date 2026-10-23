
# DSA Toolkit

A modular C++ library that implements common Data Structures and Algorithms.

## Features

1. **Sorting Algorithms**
   - Merge Sort
   - Quick Sort

2. **Linked List**
   - Insert at the end
   - Search for a value
   - Delete a value
   - Reverse the list
   - Display the list

3. **Stack**
   - Push
   - Pop
   - Peek
   - Check if empty

4. **Queue**
   - Enqueue
   - Dequeue
   - Front
   - Check if empty

5. **Binary Search Tree**
   - Insert
   - Search
   - Inorder traversal
   - Level-order traversal

6. **Graph**
   - Adjacency-list representation
   - Breadth-First Search (BFS)

7. **Dynamic Programming**
   - 0/1 Knapsack problem

## Project Structure

```text
DSA-Toolkit/
├── include/   # Header files
├── src/       # Implementations
├── main.cpp   # Demonstration program
└── README.md  # Project documentation
```

## Requirements

- A C++ compiler supporting C++17
- GCC/G++ installed
- Visual Studio Code (recommended)

## Compile

Run this command from the project root in the terminal:

```bash
g++ -std=c++17 -I include main.cpp src/Sorting.cpp src/LinkedList.cpp src/Stack.cpp src/Queue.cpp src/Tree.cpp src/Graph.cpp src/DP.cpp -o main.exe
```

## Run

On Windows PowerShell:

```powershell
.\main.exe
```

## Purpose

This project demonstrates the implementation and organization of common data structures and algorithms using C++.
