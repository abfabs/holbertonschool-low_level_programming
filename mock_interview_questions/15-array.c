#include <stdio.h>
#include "main.h"

void array(void)
{
    int numbers[5] = {10, 20, 30, 40, 50};

    for (int i = 0; i < 5; i++)
    {
        printf("Element %d: %d\n", i, numbers[i]);
    }
}
