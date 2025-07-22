# Doubly Linked Lists

This project is part of the **Low-Level Programming** curriculum at Holberton School. It focuses on implementing and manipulating **doubly linked lists** in C.

---

## 📚 Learning Objectives

- Understand what doubly linked lists are and how they work
- Create and traverse doubly linked lists
- Add and remove nodes at the beginning, middle, or end
- Handle edge cases safely and efficiently

---

## ⚙️ Data Structure

```c
/**
 * struct dlistint_s - Doubly linked list node
 * @n: Integer stored in the node
 * @prev: Pointer to the previous node
 * @next: Pointer to the next node
 *
 * Description: Node structure for a doubly linked list
 */
typedef struct dlistint_s
{
	int n;
	struct dlistint_s *prev;
	struct dlistint_s *next;
} dlistint_t;

| File                                             | Description                                            |
| ------------------------------------------------ | ------------------------------------------------------ |
| [`0-print_dlistint.c`](./0-print_dlistint.c)     | Prints all elements of a `dlistint_t` list             |
| [`1-dlistint_len.c`](./1-dlistint_len.c)         | Returns the number of elements in the list             |
| [`2-add_dnodeint.c`](./2-add_dnodeint.c)         | Adds a node at the beginning                           |
| [`3-add_dnodeint_end.c`](./3-add_dnodeint_end.c) | Adds a node at the end                                 |
| [`4-free_dlistint.c`](./4-free_dlistint.c)       | Frees a `dlistint_t` list                              |
| [`5-get_dnodeint.c`](./5-get_dnodeint.c)         | Returns the nth node of a `dlistint_t` list            |
| [`6-sum_dlistint.c`](./6-sum_dlistint.c)         | Returns the sum of all data in the list                |
| [`7-insert_dnodeint.c`](./7-insert_dnodeint.c)   | Inserts a node at a given index                        |
| [`8-delete_dnodeint.c`](./8-delete_dnodeint.c)   | Deletes a node at a given index                        |
| [`lists.h`](./lists.h)                           | Header file with structure and function prototypes     |
| `main.c`                                         | Test files for functions (not always included in repo) |
