#include <stdio.h>
#include "main.h"

void access_and_modify_array(void)
{
    int numbers[5] = {10, 20, 30, 40, 50};

    printf("First element: %d\n", numbers[0]);
    printf("Third element: %d\n", numbers[2]);

    numbers[1] = 200;
    numbers[4] = 500;

    for (int i = 0; i < 5; i++)
    {
        printf("Element %d: %d\n", i, numbers[i]);
    }
}
