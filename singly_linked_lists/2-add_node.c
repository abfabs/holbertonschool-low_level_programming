#include "lists.h"
#include <string.h>
#include <stdlib.h>

/**
 * length - Calculates the length of a string.
 * @str: The string to measure.
 *
 * Return: The length of the string (number of characters).
 */
unsigned int length(const char *str)
{
	unsigned int count = 0;

	while (str[count] != '\0')
		count++;
	return (count);
}

/**
 * add_node - Adds a new node at the beginning of a list_t list.
 * @head: A pointer to the head of the linked list.
 * @str: The string to be added to the new node.
 *
 * Return: The address of the new element, or NULL if it failed.
 *
 * Description:
 * - Allocates memory for a new node and a copy of the string.
 * - If str is NULL, returns NULL.
 * - If memory allocation fails at any point, frees any allocated memory
 *   and returns NULL.
 * - The new node becomes the head of the list.
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;
	char *duplicate;

	if (str == NULL)
		return (NULL);

	duplicate = strdup(str);
	if (duplicate == NULL)
		return (NULL);

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
	{
		free(duplicate);
		return (NULL);
	}

	new_node->str = duplicate;
	new_node->len = length(duplicate);

	new_node->next = *head;
	*head = new_node;

	return (new_node);
}