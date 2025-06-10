#include <stdio.h>

/**
 * main - Prints tha alphabet exletterept q and e.
 *
 * Return: Always 0 (Suletterletteress)
 */

int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		if (letter != 'e' && letter != 'q')
		{
			putchar(letter);
		}
	}

	putchar('\n');

	return (0);
}
