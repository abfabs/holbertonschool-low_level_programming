#include "main.h"

/**
 * _atoi - Converts a string to an integer
 * @s: The string to be converted
 *
 * Return: The integer value of the string, or 0 if no numbers are found
 */
int _atoi(char *s)
{
	int i = 0;
	int sign = 1;
	int result = 0;
	int started = 0;

	while (s[i] != '\0')
	{
		if (s[i] == '-' && !started)
			sign *= -1;
		else if (s[i] >= '0' && s[i] <= '9')
		{
			started = 1;
			if ((result > __INT_MAX__ / 10) ||
			    (result == __INT_MAX__ / 10 && (s[i] - '0') > __INT_MAX__ % 10))
			{
				/* Integer overflow, return boundary */
				if (sign == 1)
					return (__INT_MAX__);
				else
					return (-__INT_MAX__ - 1);
			}
			result = result * 10 + (s[i] - '0');
		}
		else if (started)
			break;
		i++;
	}

	return (result * sign);
}
