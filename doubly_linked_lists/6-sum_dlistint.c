#include "lists.h"

/**
 * sum_dlistint - Returns the sum of all data (n) in a doubly linked list.
 * @head: Pointer to the head of the dlistint_t list.
 *
 * Return: Sum of all node data, or 0 if list is empty.
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
