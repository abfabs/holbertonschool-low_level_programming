#include "main.h"
#include <stdio.h>

int main (void)
{
    int n = 27;
    
    int total = sumUpTo(n);

    printf("The sum of all numbers from 1 to %d is %d.\n", n, total);
    
    return 0;
}