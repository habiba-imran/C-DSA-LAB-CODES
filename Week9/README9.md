# 🌳 Binary Search Tree (BST) in C++

This project implements a **generic Binary Search Tree (BST)** in C++ using templates. It provides common operations such as insertion, deletion, retrieval, traversal, and counting nodes.

---

## 🚀 Features

- 🧬 **Generic Template Support** – Works with `int`, `char`, or any comparable data type
- ➕ **Insert Items** into the tree
- ❌ **Delete Items** from the tree
- 🔍 **Search (Retrieve)** for items
- 🖨️ **In-Order Traversal** printing (sorted output)
- 🧮 **Count Total Nodes** in the tree
- 💡 **Sort Strings** using BST logic

---

## 📁 Files

- `main.cpp` – 💻 Contains the entire BST class and a sample `main()` function for testing

---

## ⚙️ How to Compile & Run

1. **Compile**
   ```bash
   g++ -o bst main.cpp
   ```

2. **Run**
   ```bash
   ./bst
   ```

---

## 🧪 Sample Output

```
In-order Traversal: 3 5 7 10 15 
Total nodes: 5
Item found
After deleting 7, in-order: 3 5 10 15 
=======================================================
EXERCISE 9.1: 
=======================================================
Enter a string to sort it :hello
Sorting your string: e h l l o 
```

---

## 🧵 Code Structure

- `TreeNode<T>` 🌿: Node structure with `info`, `left`, and `right` pointers
- `BinarySearchTree<T>` 🌲: Main class with:
  - `insertItem()` ➕
  - `DeleteItem()` ❌
  - `RetrieveItem()` 🔍
  - `PrintTree()` 🖨️
  - `NumberOfNodes()` 🧮
- Internal recursive helpers for all major operations ♻️

---

## 📌 Use Case

✅ Sort characters in a string  
✅ Maintain dynamic collection of items with fast operations  
✅ Learn core BST concepts using C++

---

## 👤 Author

- 👩‍💻 **Umm-e-Habiba Imran**
- 📫 Email: habibaimrannn@gmail.com
- 🌐 [GitHub Profile](https://github.com/habiba-imran)

---

## 📜 License

📝 MIT License – Feel free to use and modify this code!
```

