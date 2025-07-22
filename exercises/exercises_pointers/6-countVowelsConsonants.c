#include <stdio.h>
#include "main.h"

void countVowelsConsonants(char *str, int *vowels, int *consonants)
{
    *vowels = 0;
    *consonants = 0;

    int i;
    for (i = 0; str[i] != '\0'; i++)
    {
        if (str[i] >= 'A' && str[i] <= 'Z')
        {
            str[i] = str[i] + 32;
        }

        if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u' || str[i] == 'y')
        {
            (*vowels)++;
        }
        else if (str[i] >= 'a' && str[i] <= 'z')
        {
            (*consonants)++;
        }
    }
}