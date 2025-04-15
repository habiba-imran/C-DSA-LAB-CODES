# Doubly Linked List in C++ (Generic Template)

This project implements a **generic doubly linked list** using C++ templates. It allows you to create a doubly linked list of any data type and perform various common operations such as insertion, deletion, and display.

---

## 📌 Features

- **Generic Template**: Works with any data type (int, float, string, etc.).
- **Insert at Start**: Adds a node at the beginning of the list.
- **Insert at End**: Adds a node at the end of the list.
- **Insert Between**: Adds a new node after a specified value.
- **Delete from Start**: Removes the first node.
- **Delete from End**: Removes the last node.
- **Display**: Shows all elements in the list.

---

## 🧾 Code Structure

- `DoublyLL<T>`: Template class that defines the doubly linked list.
  - `insertStart(T item)`
  - `insertEnd(T item)`
  - `insertBetween(T oldvalue, T newvalue)`
  - `deleteStart()`
  - `deleteEnd()`
  - `display()`

- **Main Function**:
  - Demonstrates the usage of all operations on an `int` list.

---

## 🔧 How It Works

### Insert at Start
Adds a new node at the beginning, adjusting `prev` and `next` pointers appropriately.

### Insert at End
Traverses to the end and adds a new node there.

### Insert Between
Finds a node with the specified value and inserts the new node after it.

### Delete from Start
Deletes the head node and updates the `head` pointer.

### Delete from End
Traverses to the second last node and deletes the last node.

### Display
Traverses from head to end and prints each node's value.

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
