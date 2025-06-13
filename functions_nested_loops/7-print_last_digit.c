#include "main.h"

/**
  * print_last_digit - kinda obvi
  * @n: Nr
  *
  * Return: Value of the last digit of said number
  */
int print_last_digit(int n)
{
	int last;

	last = n % 10;

	if (last < 0)
	{
		last = last * -1;
	}

	_putchar(last + '0');

	return (last);
}
