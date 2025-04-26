# 🌳 Binary Tree Implementations in C++

## 📋 Overview

This project contains **two different implementations** of a **Binary Tree** in C++:

- 📦 **Static Array-Based Binary Tree**
- 🧩 **Dynamic Pointer-Based Binary Tree**

Both versions support:

- ✅ **Tree Creation**
- ✅ **Tree Traversals**: Preorder, Inorder, and Postorder

---

## 📁 Files Included

- `static_array_binary_tree.cpp`
- `dynamic_pointer_binary_tree.cpp`

---

## 1️⃣ Static Array Binary Tree (`static_array_binary_tree.cpp`)

### 🛠️ Description
- Uses a **fixed-size array** (`NUMNODES = 100`) to simulate tree nodes.
- Each node stores:
  - 📄 `info` (node value)
  - 📄 `left` (index of left child)
  - 📄 `right` (index of right child)
  - 📄 `parent` (index of parent node)
- Root is initialized at **index 1**.
- Child node positions:
  - 👈 Left child: `2 * parentIndex`
  - 👉 Right child: `2 * parentIndex + 1`

### ✨ Features
- `setRoot(value)` — Set the root node.
- `insertLeft(parentIndex, value)` — Insert a left child.
- `insertRight(parentIndex, value)` — Insert a right child.
- **Traversals**:
  - 🔵 `inorder(index)`
  - 🔵 `preorder(index)`
  - 🔵 `postorder(index)`

### ▶️ How to Run
```bash
g++ static_array_binary_tree.cpp -o static_array_binary_tree
./static_array_binary_tree
