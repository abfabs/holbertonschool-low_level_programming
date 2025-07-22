# 📚 Doubly Linked Lists in C

This project demonstrates how to implement and use **Doubly Linked Lists** in the C programming language. Doubly linked lists are dynamic data structures where each node points to both the **next** and the **previous** node, allowing for efficient insertion and deletion from both ends.

---

## 📁 Files

| File Name         | Description |
|------------------|-------------|
| `lists.h`         | Header file containing all function prototypes and the `struct` definition for the doubly linked list node. |
| `0-print_dlistint.c` | Prints all elements of a `dlistint_t` list. |
| `1-dlistint_len.c`   | Returns the number of elements in a `dlistint_t` list. |
| `2-add_dnodeint.c`   | Adds a new node at the beginning of a `dlistint_t` list. |
| `3-add_dnodeint_end.c` | Adds a new node at the end of a `dlistint_t` list. |
| `4-free_dlistint.c`  | Frees a `dlistint_t` list. |
| `5-get_dnodeint.c`   | Returns the nth node of a `dlistint_t` list. |
| `6-sum_dlistint.c`   | Returns the sum of all the data (n) of a `dlistint_t` list. |
| `7-insert_dnodeint.c`| Inserts a new node at a given position. |
| `8-delete_dnodeint.c`| Deletes the node at a given index of a `dlistint_t` list. |

---

## 📌 Data Structure

```c
/**
 * struct dlistint_s - Doubly linked list node
 * @n: Integer value stored in the node
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
