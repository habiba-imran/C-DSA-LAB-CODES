# 📚 Doubly Linked List in C++ (Generic Template)

This project implements a **generic doubly linked list** using C++ templates. It allows you to create a doubly linked list of any data type and perform various common operations such as insertion, deletion, and display.

---

## ✨ Features

- 🔄 **Generic Template**: Works with any data type (int, float, string, etc.)
- ⬅️ **Insert at Start**: Adds a node at the beginning of the list
- ➡️ **Insert at End**: Adds a node at the end of the list
- ↔️ **Insert Between**: Adds a new node after a specified value
- ❌ **Delete from Start**: Removes the first node
- ❌ **Delete from End**: Removes the last node
- 👁️ **Display**: Shows all elements in the list

---

## 🧱 Code Structure

- `DoublyLL<T>`: Template class that defines the doubly linked list
  - 🔧 `insertStart(T item)`
  - 🔧 `insertEnd(T item)`
  - 🔧 `insertBetween(T oldvalue, T newvalue)`
  - 🗑️ `deleteStart()`
  - 🗑️ `deleteEnd()`
  - 👀 `display()`

- **Main Function**:
  - 🧪 Demonstrates the usage of all operations on an `int` list

---

## ⚙️ How It Works

- 📌 **Insert at Start**: Adds a new node at the beginning
- 📌 **Insert at End**: Adds a new node at the end
- 📌 **Insert Between**: Inserts a node after a given value
- 🗑️ **Delete from Start**: Removes the first node
- 🗑️ **Delete from End**: Removes the last node
- 👁️ **Display**: Shows the list from start to end

---

## 🧪 Sample Output

```plaintext
Initial List: 
NODE 1: 30
NODE 2: 20
NODE 3: 10

Displaying after deleting first node: 
NODE 1: 20
NODE 2: 10

Displaying after adding another node at the end: 
NODE 1: 20
NODE 2: 10
NODE 3: 40

Displaying after inserting 25 after 10: 
NODE 1: 20
NODE 2: 10
NODE 3: 25
NODE 4: 40

Value sought is not in the list.

Displaying after trying to insert 50 after 99 (should be at the end): 
NODE 1: 20
NODE 2: 10
NODE 3: 25
NODE 4: 40

Displaying after deleting last node: 
NODE 1: 20
NODE 2: 10
NODE 3: 25
