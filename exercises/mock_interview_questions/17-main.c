#include "main.h"
#include <stdio.h>

int main(void)
{
    int numbers[] = {1, 2, 3, 4, 5};
    int size = sizeof(numbers) / sizeof(numbers[0]);
    

    printf("The sum of numbers in the number array is %d\n", sum_array(numbers, size));
    return 0;
}
