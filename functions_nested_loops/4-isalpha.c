#include "main.h"

/**
  * _isalpha - Check for character
  * @c: Character
  *
  * Return: 1 for character or 0 for else
  */
int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
	{
		return (1);
	}

	return (0);
}
