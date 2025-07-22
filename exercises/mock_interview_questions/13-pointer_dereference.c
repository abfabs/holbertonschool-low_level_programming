#include <stdio.h>
#include "main.h"

void pointer_dereference(void)
{
    int x = 10;
    int *ptr = &x;

    printf("Value of x: %d\n", x);
    printf("Value via ptr: %d\n", *ptr);

    *ptr = 20;
    printf("New value of x: %d\n", x);
}
