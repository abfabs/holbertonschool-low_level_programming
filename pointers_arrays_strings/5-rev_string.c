#include "main.h"

/**
 * rev_string - Reverses a string
 * @s: Pointer to the string to reverse
 */
void rev_string(char *s)
{
	int length, i;
	char tmp;

	for (length = 0; s[length] != '\0'; length++)
	{
	}

	for (i = 0; i < length / 2; i++)
	{
		tmp = s[i];
		s[i] = s[length - 1 - i];
		s[length - 1 - i] = tmp;
	}
}
