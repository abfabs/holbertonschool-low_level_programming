#include "main.h"
#include "main.h"

/**
 * print_triangle - Prints a triangle of '#' characters
 * @size: The size of the triangle (height and base width)
 *
 * Return: void
 */
void print_triangle(int size)
{
	int row, col, spaces;

	if (size <= 0)
	{
		_putchar('\n');
		return;
	}

	for (row = 1; row <= size; row++)
	{
		/* Print spaces before the '#' */
		for (spaces = size - row; spaces > 0; spaces--)
			_putchar(' ');

		/* Print '#' characters */
		for (col = 0; col < row; col++)
			_putchar('#');

		_putchar('\n');
	}
}
