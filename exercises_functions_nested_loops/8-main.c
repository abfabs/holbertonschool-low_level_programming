#include "main.h"
#include <stdio.h>

int main (void)
{
    int n = 25;
    
    int total = sumOddNumbersUpTo(n);

    printf("The sum of all odd numbers from 1 to %d is %d.\n", n, total);
    
    return 0;
}