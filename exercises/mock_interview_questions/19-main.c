#include <stdio.h>

float average(int *arr, int size);

int main(void)
{
    int numbers[] = {10, 20, 30, 40, 50};
    int size = sizeof(numbers) / sizeof(numbers[0]);

    float avg = average(numbers, size);
    printf("Average: %.2f\n", avg);

    return 0;
}
