# Priority Queue Implementation (PQueue)

This repository contains an implementation of a **Priority Queue (PQueue)** using an array of queues, where each queue represents a priority level. The task elements are inserted into the priority queue based on their priority, and tasks are removed in order of priority (highest first). This implementation uses a **`Queue` class** and a **`PQueue` class**.

## Overview

A **priority queue** is a data structure that allows elements to be stored and removed based on their priority, rather than the order in which they were added. Tasks with a higher priority are removed before those with lower priority.

In this implementation:
- **`Queue<T>`** handles the queue functionality for each priority level.
- **`PQueue<T>`** manages multiple `Queue` objects, each corresponding to a priority level.

### Key Features:
- Supports **N priority levels**.
- **FIFO** (First-In-First-Out) order is maintained for tasks within each priority level.
- **Insert** and **Remove** operations are implemented to handle tasks based on priority.

## Classes

### `Queue<T>`
A template class representing a simple queue that supports the following operations:
- `insert(T item)`: Adds an item to the queue.
- `remove(T& item)`: Removes and retrieves the front item from the queue.
- `isFull()`: Checks if the queue is full.
- `isEmpty()`: Checks if the queue is empty.

### `PQueue<T>`
A template class representing the priority queue that handles multiple queues for different priority levels. It supports the following operations:
- `insert(T item, int p)`: Inserts an item into the queue corresponding to its priority level.
- `remove(T& item)`: Removes and retrieves the highest-priority item from the queue.
- `isFull()`: Checks if all priority levels are full.
- `isEmpty()`: Checks if all priority levels are empty.

## How to Use

1. **Include the header files:**

   The header files `Queue.h` and `PQueue.h` are required to use the classes.

2. **Create an instance of `PQueue`:**
   Initialize a `PQueue` object with the number of priority levels you want. The number of priority levels defines the range of valid priority values.

   Example:
   ```cpp
   int N = 5;  // Number of priority levels (from 0 to N-1)
   PQueue<string> pq(N);
