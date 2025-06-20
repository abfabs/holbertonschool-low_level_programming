#include <stdio.h>
#include "main.h"


int findCharacter(char *str, char c)
{
    int i;
    for(i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == c)
        {
            return (i);
        }
    }
    return (-1);
}
