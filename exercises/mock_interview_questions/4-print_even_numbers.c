#include <stdio.h>
#include "main.h"

void print_even_numbers(void)
{
    int i = 1;
    while (i <= 10)
    {
        if (i % 2 == 0)
        {
            printf("%d\n", i);
        }
        i++;
    }
}
