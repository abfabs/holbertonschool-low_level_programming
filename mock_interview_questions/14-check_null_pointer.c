#include <stdio.h>
#include "main.h"

void check_null_pointer(void)
{
    int *ptr;

    if (ptr == NULL)
    {
        printf("Pointer is NULL. Not safe to use!\n");
    }
    else
    {
        printf("Pointer is safe. Value: %d\n", *ptr);
    }
}
