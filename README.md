# 🌳 Inorder Traversal of Binary Tree (C)

This repository contains a **C implementation** of performing an **inorder traversal** on a binary tree, using recursion and array storage.

---

## 📘 Problem Statement

Perform an **inorder traversal** (Left → Node → Right) of a binary tree and return the node values in an array.

---

## 🧠 Approach

- Use a **recursive helper function** `inorder()` to traverse the tree in **inorder fashion**.
- As each node is visited, its value is stored in an array.
- Return the final array and set the size using `returnSize`.

---

## 🔍 Function Explanation

### `void inorder(struct TreeNode* root, int* arr, int* idx)`
- A helper function for recursion.
- Traverses left subtree, adds the node value, and then traverses right subtree.
- `arr` is the array to store node values.
- `idx` tracks the position in the array.

### `int* inorderTraversal(struct TreeNode* root, int* returnSize)`
- Allocates space for the result array.
- Calls the `inorder()` helper.
- Updates the total size using `returnSize`.
- Returns the array of node values.

### `📊 Time & Space Complexity`
| Type              | Complexity |
| ----------------- | ---------- |
| 🕒 Time           | O(n)       |
| 💾 Space (Stack)  | O(h)       |
