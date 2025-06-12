#include"main.h"

/**
 * _islower - Checks for lowercase
 * @c: character
 * Return: 1 if c is lowercase, 0 if else
 */

int _islower(int c)

{
	if (97 <= c &&  122 >= c)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
