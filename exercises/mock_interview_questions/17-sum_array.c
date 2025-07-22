#include <stdio.h>
#include "main.h"

int sum_array(int *numbers, int size)
{
    int i;
    int sum = 0;

    for (i = 0; i < size; i++)
    {
        sum = sum + numbers[i];
    }

    return sum;
}
