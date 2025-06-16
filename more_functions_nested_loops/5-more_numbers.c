#include "main.h"

void more_numbers(void)
{
	int i, j;

	for (i = 0; i < 10; i++) /* Repeat 10 times */
	{
		for (j = 0; j <= 14; j++) /* Print numbers 0 to 14 */
		{
			if (j >= 10)
				_putchar('1');         /* Print tens digit */
			_putchar(j % 10 + '0');   /* Print units digit */
		}
		_putchar('\n'); /* New line after each set */
	}
}