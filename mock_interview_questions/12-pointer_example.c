#include <stdio.h>
#include "main.h"

void pointer_example(void)
{
    int x = 42;
    int *ptr;
    ptr = &x;

    printf("Value of x: %d\n", x);
    printf("Address of x: %p\n", (void*)&x);
    printf("Value stored in ptr (address): %p\n", (void*)ptr);
    printf("Value pointed to by ptr: %d\n", *ptr);
}
