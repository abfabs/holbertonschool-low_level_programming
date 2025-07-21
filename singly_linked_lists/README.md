# Singly Linked Lists in C

## What is a Singly Linked List?

A **singly linked list** is a dynamic data structure made up of nodes, where each node contains:

- **Data:** The value or information stored.
- **Next pointer:** A reference (pointer) to the next node in the list.

Unlike arrays, singly linked lists do **not** store elements in contiguous memory. Instead, nodes are scattered in memory and connected by pointers.

---

## Why Use Singly Linked Lists?

- **Dynamic size:** You can add or remove nodes at runtime without reallocating memory.
- **Efficient insertion/deletion:** Especially at the beginning or middle, with no need to shift elements.
- **Flexible memory usage:** Nodes are allocated individually using `malloc`.

---

## Structure Definition

```c
typedef struct node {
    int data;
    struct node *next;
} node_t;
