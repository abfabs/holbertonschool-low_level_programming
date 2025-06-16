#include "main.h"

/**
 * print_most_numbers - Prints numbers from 0 to 9, except 2 and 4
 *
 * Return: void
 */
void print_most_numbers(void)
{
	char c;
	char output[9]; /* 8 digits + newline */
	int i = 0;
	int j;

	for (c = '0'; c <= '9'; c++)
	{
		if (c != '2' && c != '4')
		{
			output[i] = c;
			i++;
		}
	}
	output[i] = '\n';
	i++;

	for (j = 0; j < i; j++)
	{
		_putchar(output[j]);
	}
}
