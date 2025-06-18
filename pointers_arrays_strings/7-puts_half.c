#include "main.h"

void puts_half(char *str)
{
	int length_of_the_string, n;
	 for (length_of_the_string = 0; s[length_of_the_string] != 0; length_of_the_string++)
    {

    }
	if(length_of_the_string % 2 == 0)
	{
		n = (length_of_the_string + 1) / 2;
	}
	while (n < length_of_the_string)
	{
		_putchar(str[n]);
		n++;
	}
}
