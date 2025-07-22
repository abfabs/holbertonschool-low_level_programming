#include <stdio.h>
#include "main.h"

void checkEvenOdd(int a)
{
    if (a % 2 == 0)
        printf("The number %d is even.\n", a);
    else
        printf("The number %d is odd.\n", a);
}
