#include <stdio.h>

double average(int *arr, int size);

int main(void)
{
    int numbers[] = {10, 20, 30, 40, 50};
    int size = sizeof(numbers) / sizeof(numbers[0]);

    double avg = average(numbers, size);
    printf("Average: %.2f\n", avg);

    return 0;
}
