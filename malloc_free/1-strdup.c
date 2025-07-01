#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * _strdup - Returns a pointer to a newly allocated space in memory,
 * which contains a copy of the string given as a parameter.
 * @str: The string to duplicate.
 *
 * Return: Pointer to the duplicated string, or NULL if insufficient memory
 * or if str is NULL.
 */
char *_strdup(char *str)
{
	char *dup;
	int length;
	int i, j;

	if (str == NULL)
	{
		return (NULL);
	}

	for (i = 0; str[i] != '\0'; i++)
	{
	}
	length = i;

	dup = malloc(sizeof(char) * (length + 1));
	if (dup == NULL)
	{
		return (NULL);
	}

	for (j = 0; str[j] != '\0'; j++)
	{
		dup[j] = str[j];
	}
	dup[j] = '\0';

	return (dup);
}
