#include "main.h"
#include <stdio.h>

/**
 * _puts - Prints a string followed by a new line
 * @str: Pointer to the string
 *
 * Return: void
 */
void _puts(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}

	_putchar('\n');
}
