#include "main.h"
#include <stdio.h>

/**
 * print_rev - Prints a string in reverse followed by a new line
 * @s: The string to be printed in reverse
 */
void print_rev(char *s)
{
	int length;

	for (length = 0; s[length] != '\0'; length++)
	{
	}

	while (length - 1 >= 0)
	{
		_putchar(s[length - 1]);
		length--;
	}
	_putchar('\n');
}
