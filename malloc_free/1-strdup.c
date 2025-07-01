#include "main.h"
#include <stdlib.h>
#include <stdio.h>

char *create_array(unsigned int size, char c)
{
    char *dup;
    int length;
    int i, j;

    if (str == NULL)
    {
        return (NULL);
    }

    for (i = 0; str [i] != '\0'; i++)
    {

    }
    length = i;
    
    dup = malloc(sizeof(char) * (length + 1));

    if (dup == NULL)
    {
        return (NULL);
    }

    for (j = 0; str[j] != '\0'; j++)
    {
        dup[j] = str [j];
    }
        dup[j] = '\0';

}
