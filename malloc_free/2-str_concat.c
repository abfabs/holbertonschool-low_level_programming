#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * str_concat - Concatenates two strings into a newly allocated memory space.
 * @s1: First string.
 * @s2: Second string.
 *
 * Return: Pointer to the new concatenated string, or NULL on failure.
 */
char *str_concat(char *s1, char *s2)
{
	int s1_len, s2_len, i, j;
	char *concat;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	s1_len = 0;
	s2_len = 0;

	while (s1[s1_len] != '\0')
		s1_len++;
	while (s2[s2_len] != '\0')
		s2_len++;

	concat = malloc(sizeof(char) * (s1_len + s2_len + 1));
	if (concat == NULL)
		return (NULL);

	for (i = 0; s1[i] != '\0'; i++)
		concat[i] = s1[i];

	for (j = 0; s2[j] != '\0'; j++)
		concat[i + j] = s2[j];

	concat[i + j] = '\0';

	return (concat);
}
