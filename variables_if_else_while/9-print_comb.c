#include <stdio.h>

/**
  * main - Print all combinations of single digit numbers
  *
  * Return: Always 0 (Success);
  */
int main(void)
{
	int number;

	for (number = '0'; number <= '9'; number++)
	{
		putchar(number);

		if (number != '9')
		{
			putchar(',');
			putchar(' ');
		}
	}

	putchar('\n');

	return (0);
}
