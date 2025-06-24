#include <stdio.h>

void print_array(int *ptr, int size);

int main(void)
{
    int arr[] = {10, 20, 30, 40};
    int size = sizeof(arr) / sizeof(arr[0]);

    print_array(arr, size);

    return 0;
}
