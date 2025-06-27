#include <stdio.h>
#include "main.h"

void access_and_modify_array(void)
{
    int numbers[5] = {10, 20, 30, 40, 50};

    printf("Second element: %d\n", numbers[1]);
    printf("Fifth element: %d\n", numbers[4]);

    numbers[1] = 200;
    numbers[4] = 500;

    for (int i = 0; i < 5; i++)
    {
        printf("Element %d: %d\n", i, numbers[i]);
    }
}
