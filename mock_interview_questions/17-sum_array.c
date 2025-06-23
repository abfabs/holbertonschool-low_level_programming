#include <stdio.h>
#include "main.h"

void sum_array(void)
{
    int numbers[] = {1, 2, 3, 4, 5};
    int size = sizeof(numbers) / sizeof(numbers[0]);
    int sum = 0;

    for (int i = 0; i < size; i++)
    {
        sum = sum + numbers[i];
    }

    printf("Sum of array elements: %d\n", sum);
}
