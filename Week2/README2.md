# Week 2 - Stack Implementation (Dynamic & Static)

## 📌 Overview
This week's lab focuses on implementing the **stack** data structure using both **dynamic memory allocation** and **static memory allocation**. The dynamic implementation demonstrates memory management, while the static implementation allows users to interact with different stack operations.

---

## 📂 File Structure

### 🔹 Dynamic Memory Allocation (Stack)
- **Files**: `dynamic.h`, `maindynamic.cpp`
- **Description**: Implements a **stack** using dynamic memory allocation, allowing flexible memory management.
- **Key Operations**:
  - `push()`: Adds an element to the stack.
  - `pop()`: Removes the top element from the stack.
  - `peek()`: Displays the top element without removing it.

### 🔹 Static Stack Operations
- **Files**: `Static.h`, `Static.cpp`, `staticmain.cpp`
- **Description**: Implements a stack where the user can choose from different operations.
- **User Choices**:
  1. **Reverse a String** – Uses a stack to reverse the characters of a string.
  2. **Check Parenthesis Balancing** – Verifies if parentheses in an expression are balanced using a stack.
  3. **Push, Pop & Peek Operations** – Displays pushed and popped items and allows checking the top value.

---

## 🚀 Learning Outcomes
- Understanding **stack operations** in C++.
- Implementing **dynamic memory allocation** for flexible memory handling.
- Using **stacks for practical applications** like string reversal and expression validation.

---

## 🔗 How to Run
1. Compile the dynamic implementation:  
   ```sh
   g++ maindynamic.cpp -o dynamic_stack
   ./dynamic_stack
