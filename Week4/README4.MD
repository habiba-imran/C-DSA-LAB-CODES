# 🚀 Week 4 - Queue Implementations & Palindrome Checker  

This repository contains implementations for **static queues**, **dynamic queues**, and a **palindrome checker using a double-ended queue (Deque)**.  

## 📌 1. Static Queue (`static.cpp`, `static.h`)  
📦 The **static queue** is implemented using a fixed-size array.  
🔹 **Operations**: `insert()`, `remove()`, `isFull()`, `isEmpty()`  
✅ Suitable for cases where the maximum size is known beforehand.  

## 🔄 2. Dynamic Queue (`dynamic.cpp`, `dynamic.h`)  
🔗 The **dynamic queue** is implemented using a linked list.  
🔹 **Operations**: `insert()`, `remove()`, `isFull()`, `isEmpty()`  
⚡ No fixed size constraint, can grow dynamically.  

## 🔁 3. Palindrome Checker using Deque (`DeQue.cpp`, `DeQue.h`)  
🔄 A **double-ended queue (Deque)** is used to check whether the given string is a palindrome.  
🔹 **Operations**: `insertFront()`, `insertRear()`, `removeFront()`, `removeRear()`  
🔍 Works efficiently for checking palindromes by comparing characters from both ends.  

## 🛠️ How to Compile & Run  
### 🖥️ **Compile**  
```sh
g++ static.cpp -o static
g++ dynamic.cpp -o dynamic
g++ DeQue.cpp -o deque
