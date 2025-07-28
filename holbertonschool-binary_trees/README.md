# Binary Trees

This project implements various operations and algorithms on **binary trees** in C.

A binary tree is a hierarchical data structure in which each node has at most two children: a left and a right child.

## Data Structure

```c
typedef struct binary_tree_s
{
    int n;
    struct binary_tree_s *parent;
    struct binary_tree_s *left;
    struct binary_tree_s *right;
} binary_tree_t;
````

## Features

* Create and delete binary trees
* Insert nodes to the left or right
* Traverse trees:

  * Preorder
  * Inorder
  * Postorder
* Measure tree properties:

  * Height
  * Depth
  * Size
  * Number of leaves
  * Balance factor
* Check node relationships:

  * Is root or leaf
  * Find sibling or uncle
  * Get ancestors

## File Structure

* `binary_tree.h`: Header file with all structure and function prototypes
* Separate `.c` files for each tree operation

## Compilation

```bash
gcc -Wall -Wextra -Werror -pedantic -std=gnu89 *.c -o binary_tree
```

## Usage

Include `binary_tree.h` and compile with the corresponding `.c` files. Create test files to run tree operations and verify functionality.

```
