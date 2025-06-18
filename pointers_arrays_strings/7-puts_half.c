#include "main.h"

/**
 * puts_half - Prints the second half of a string
 * @str: Pointer to the string
 */
void puts_half(char *str)
{
	int length_of_the_string, n;

	for (length_of_the_string = 0;
	     str[length_of_the_string] != '\0';
	     length_of_the_string++)
	{
	}

	if (length_of_the_string % 2 == 0)
	{
		n = length_of_the_string / 2;
	}
	else
	{
		n = (length_of_the_string - 1) / 2 + 1;
	}

	while (n < length_of_the_string)
	{
		_putchar(str[n]);
		n++;
	}
	_putchar('\n');
}
