#include <stdio.h>

/**
  * main - Print numbers from 0 to 9 in another way
  *
  * Return: Always 0 (Success)
  */
int main(void)
{
	int n;

	for (n = '0'; n <= '9'; n++)
	{
		putchar(n);
	}

	putchar('\n');

	return (0);
}
