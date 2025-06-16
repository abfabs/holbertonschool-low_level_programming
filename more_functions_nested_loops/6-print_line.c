#include "main.h"

/**
 * print_line - Draws a straight line in the terminal
 * @n: Number of times to print the character '_'
 *
 * Return: void
 */
void print_line(int n)
{
	int i;

	if (n <= 0)
	{
		_putchar('\n');
		return;
	}

	for (i = 0; i < n; i++)
		_putchar('_');

	_putchar('\n');
}
