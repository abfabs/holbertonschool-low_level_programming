#include "main.h"

/**
 * main - Entry point
 *
 * Description: Write a function that checks for uppercase character.
 *
 * Return: Always 0 (Success)
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
