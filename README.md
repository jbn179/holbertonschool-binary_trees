# 🌳 Holberton School Binary Trees

![C](https://img.shields.io/badge/C-Programming-blue.svg)
![Progress](https://img.shields.io/badge/Progress-Advanced-green.svg)

## 📖 Description
This repository contains C programs that demonstrate various binary tree data structures and algorithms. The goal is to provide a comprehensive understanding of how binary trees work, their implementation, and their applications. Each script is designed to be simple and easy to understand, making them ideal for learners who are looking to deepen their knowledge of binary trees.

The topics covered include:
- Basic binary tree operations
- Binary search trees (BST)
- AVL trees
- Red-Black trees
- Tree traversals (in-order, pre-order, post-order)
- Tree balancing and rotations

## 📂 Contents
- **0-binary_tree_node.c**: Creates a binary tree node.
- **1-binary_tree_insert_left.c**: Inserts a node as the left-child of another node.
- **2-binary_tree_insert_right.c**: Inserts a node as the right-child of another node.
- **3-binary_tree_delete.c**: Deletes an entire binary tree.
- **4-binary_tree_is_leaf.c**: Checks if a node is a leaf.
- **5-binary_tree_is_root.c**: Checks if a node is the root.
- **6-binary_tree_preorder.c**: Goes through a binary tree using pre-order traversal.
- **7-binary_tree_inorder.c**: Goes through a binary tree using in-order traversal.
- **8-binary_tree_postorder.c**: Goes through a binary tree using post-order traversal.
- **9-binary_tree_height.c**: Measures the height of a binary tree.
- **10-binary_tree_depth.c**: Measures the depth of a node in a binary tree.
- **11-binary_tree_size.c**: Measures the size of a binary tree.
- **12-binary_tree_leaves.c**: Counts the leaves in a binary tree.
- **13-binary_tree_nodes.c**: Counts the nodes with at least 1 child in a binary tree.
- **14-binary_tree_balance.c**: Measures the balance factor of a binary tree.
- **15-binary_tree_is_full.c**: Checks if a binary tree is full.
- **16-binary_tree_is_perfect.c**: Checks if a binary tree is perfect.
- **17-binary_tree_sibling.c**: Finds the sibling of a node.
- **18-binary_tree_uncle.c**: Finds the uncle of a node.

## 🚀 Getting Started
1. Clone the repository to access the materials:
   ```bash
   git clone https://github.com/username/holbertonschool-binary_trees.git
   ```
2. Navigate to the directory:
   ```bash
   cd holbertonschool-binary_trees
   ```
3. Compile and run the C programs:
   ```bash
   gcc -Wall -Wextra -Werror -pedantic 0-binary_tree_node.c -o binary_tree_node
   ./binary_tree_node
   ```

## 🛠️ Requirements
• GCC compiler for C programs  
• Linux or macOS environment (recommended)

## Examples

### 0-binary_tree_node.c
Creates a binary tree node:
```c
#include "binary_trees.h"

/**
 * binary_tree_node - Creates a binary tree node.
 * @parent: Pointer to the parent node.
 * @value: Value to put in the new node.
 * Return: Pointer to the new node, or NULL on failure.
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
    binary_tree_t *new_node = malloc(sizeof(binary_tree_t));

    if (new_node == NULL)
        return (NULL);

    new_node->parent = parent;
    new_node->left = NULL;
    new_node->right = NULL;
    new_node->n = value;

    return (new_node);
}
```

### 1-binary_tree_insert_left.c
Inserts a node as the left-child of another node:
```c
#include "binary_trees.h"

/**
 * binary_tree_insert_left - Inserts a node as the left-child of another node.
 * @parent: Pointer to the node to insert the left-child in.
 * @value: Value to store in the new node.
 * Return: Pointer to the created node, or NULL on failure.
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
    binary_tree_t *new_node;

    if (parent == NULL)
        return (NULL);

    new_node = binary_tree_node(parent, value);
    if (new_node == NULL)
        return (NULL);

    if (parent->left != NULL)
    {
        new_node->left = parent->left;
        parent->left->parent = new_node;
    }
    parent->left = new_node;

    return (new_node);
}
```

### 2-binary_tree_insert_right.c
Inserts a node as the right-child of another node:
```c
#include "binary_trees.h"

/**
 * binary_tree_insert_right - Inserts a node as the right-child of another node.
 * @parent: Pointer to the node to insert the right-child in.
 * @value: Value to store in the new node.
 * Return: Pointer to the created node, or NULL on failure.
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
    binary_tree_t *new_node;

    if (parent == NULL)
        return (NULL);

    new_node = binary_tree_node(parent, value);
    if (new_node == NULL)
        return (NULL);

    if (parent->right != NULL)
    {
        new_node->right = parent->right;
        parent->right->parent = new_node;
    }
    parent->right = new_node;

    return (new_node);
}
```

### 3-binary_tree_delete.c
Deletes an entire binary tree:
```c
#include "binary_trees.h"

/**
 * binary_tree_delete - Deletes an entire binary tree.
 * @tree: Pointer to the root node of the tree to delete.
 */
void binary_tree_delete(binary_tree_t *tree)
{
    if (tree == NULL)
        return;

    binary_tree_delete(tree->left);
    binary_tree_delete(tree->right);
    free(tree);
}
```

### 4-binary_tree_is_leaf.c
Checks if a node is a leaf:
```c
#include "binary_trees.h"

/**
 * binary_tree_is_leaf - Checks if a node is a leaf.
 * @node: Pointer to the node to check.
 * Return: 1 if node is a leaf, otherwise 0.
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
    if (node == NULL)
        return (0);

    if (node->left == NULL && node->right == NULL)
        return (1);

    return (0);
}
```

### 5-binary_tree_is_root.c
Checks if a node is the root:
```c
#include "binary_trees.h"

/**
 * binary_tree_is_root - Checks if a node is the root.
 * @node: Pointer to the node to check.
 * Return: 1 if node is the root, otherwise 0.
 */
int binary_tree_is_root(const binary_tree_t *node)
{
    if (node == NULL)
        return (0);

    if (node->parent == NULL)
        return (1);

    return (0);
}
```

### 6-binary_tree_preorder.c
Goes through a binary tree using pre-order traversal:
```c
#include "binary_trees.h"

/**
 * binary_tree_preorder - Goes through a binary tree using pre-order traversal.
 * @tree: Pointer to the root node of the tree to traverse.
 * @func: Pointer to a function to call for each node.
 */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
    if (tree == NULL || func == NULL)
        return;

    func(tree->n);
    binary_tree_preorder(tree->left, func);
    binary_tree_preorder(tree->right, func);
}
```

### 7-binary_tree_inorder.c
Goes through a binary tree using in-order traversal:
```c
#include "binary_trees.h"

/**
 * binary_tree_inorder - Goes through a binary tree using in-order traversal.
 * @tree: Pointer to the root node of the tree to traverse.
 * @func: Pointer to a function to call for each node.
 */
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
    if (tree == NULL || func == NULL)
        return;

    binary_tree_inorder(tree->left, func);
    func(tree->n);
    binary_tree_inorder(tree->right, func);
}
```

### 8-binary_tree_postorder.c
Goes through a binary tree using post-order traversal:
```c
#include "binary_trees.h"

/**
 * binary_tree_postorder - Goes through a binary tree using post-order traversal.
 * @tree: Pointer to the root node of the tree to traverse.
 * @func: Pointer to a function to call for each node.
 */
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
    if (tree == NULL || func == NULL)
        return;

    binary_tree_postorder(tree->left, func);
    binary_tree_postorder(tree->right, func);
    func(tree->n);
}
```

### 9-binary_tree_height.c
Measures the height of a binary tree:
```c
#include "binary_trees.h"

/**
 * binary_tree_height - Measures the height of a binary tree.
 * @tree: Pointer to the root node of the tree to measure the height.
 * Return: Height of the tree, or 0 if tree is NULL.
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
    size_t left_height, right_height;

    if (tree == NULL)
        return (0);

    left_height = binary_tree_height(tree->left);
    right_height = binary_tree_height(tree->right);

    if (left_height > right_height)
        return (left_height + 1);
    else
        return (right_height + 1);
}
```

### 10-binary_tree_depth.c
Measures the depth of a node in a binary tree:
```c
#include "binary_trees.h"

/**
 * binary_tree_depth - Measures the depth of a node in a binary tree.
 * @tree: Pointer to the node to measure the depth.
 * Return: Depth of the node, or 0 if tree is NULL.
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
    if (tree == NULL || tree->parent == NULL)
        return (0);

    return (binary_tree_depth(tree->parent) + 1);
}
```

### 11-binary_tree_size.c
Measures the size of a binary tree:
```c
#include "binary_trees.h"

/**
 * binary_tree_size - Measures the size of a binary tree.
 * @tree: Pointer to the root node of the tree to measure the size.
 * Return: Size of the tree, or 0 if tree is NULL.
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
    if (tree == NULL)
        return (0);

    return (binary_tree_size(tree->left) + 1 + binary_tree_size(tree->right));
}
```

### 12-binary_tree_leaves.c
Counts the leaves in a binary tree:
```c
#include "binary_trees.h"

/**
 * binary_tree_leaves - Counts the leaves in a binary tree.
 * @tree: Pointer to the root node of the tree to count the number of leaves.
 * Return: Number of leaves in the tree, or 0 if tree is NULL.
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
    if (tree == NULL)
        return (0);

    if (tree->left == NULL && tree->right == NULL)
        return (1);

    return (binary_tree_leaves(tree->left) + binary_tree_leaves(tree->right));
}
```

### 13-binary_tree_nodes.c
Counts the nodes with at least 1 child in a binary tree:
```c
#include "binary_trees.h"

/**
 * binary_tree_nodes - Counts the nodes with at least 1 child in a binary tree.
 * @tree: Pointer to the root node of the tree to count the number of nodes.
 * Return: Number of nodes with at least 1 child, or 0 if tree is NULL.
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
    if (tree == NULL || (tree->left == NULL && tree->right == NULL))
        return (0);

    return (binary_tree_nodes(tree->left) + 1 + binary_tree_nodes(tree->right));
}
```

### 14-binary_tree_balance.c
Measures the balance factor of a binary tree:
```c
#include "binary_trees.h"

/**
 * binary_tree_balance - Measures the balance factor of a binary tree.
 * @tree: Pointer to the root node of the tree to measure the balance factor.
 * Return: Balance factor of the tree, or 0 if tree is NULL.
 */
int binary_tree_balance(const binary_tree_t *tree)
{
    if (tree == NULL)
        return (0);

    return (binary_tree_height(tree->left) - binary_tree_height(tree->right));
}
```

### 15-binary_tree_is_full.c
Checks if a binary tree is full:
```c
#include "binary_trees.h"

/**
 * binary_tree_is_full - Checks if a binary tree is full.
 * @tree: Pointer to the root node of the tree to check.
 * Return: 1 if the tree is full, otherwise 0.
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
    if (tree == NULL)
        return (0);

    if (tree->left == NULL && tree->right == NULL)
        return (1);

    if (tree->left != NULL && tree->right != NULL)
        return (binary_tree_is_full(tree->left) && binary_tree_is_full(tree->right));

    return (0);
}
```

### 16-binary_tree_is_perfect.c
Checks if a binary tree is perfect:
```c
#include "binary_trees.h"

/**
 * binary_tree_is_perfect - Checks if a binary tree is perfect.
 * @tree: Pointer to the root node of the tree to check.
 * Return: 1 if the tree is perfect, otherwise 0.
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
    if (tree == NULL)
        return (0);

    if (binary_tree_height(tree->left) == binary_tree_height(tree->right) &&
        binary_tree_is_full(tree))
        return (1);

    return (0);
}
```

### 17-binary_tree_sibling.c
Finds the sibling of a node:
```c
#include "binary_trees.h"

/**
 * binary_tree_sibling - Finds the sibling of a node.
 * @node: Pointer to the node to find the sibling.
 * Return: Pointer to the sibling node, or NULL if no sibling.
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
    if (node == NULL || node->parent == NULL)
        return (NULL);

    if (node->parent->left == node)
        return (node->parent->right);
    else
        return (node->parent->left);
}
```

### 18-binary_tree_uncle.c
Finds the uncle of a node:
```c
#include "binary_trees.h"

/**
 * binary_tree_uncle - Finds the uncle of a node.
 * @node: Pointer to the node to find the uncle.
 * Return: Pointer to the uncle node, or NULL if no uncle.
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
    if (node == NULL || node->parent == NULL || node->parent->parent == NULL)
        return (NULL);

    return (binary_tree_sibling(node->parent));
}
```

## License
![License](https://img.shields.io/badge/License-MIT-green.svg)  
This project is under the MIT License.

## Author
Benjamin Ristord - [@jbn179](https://github.com/jbn179)
