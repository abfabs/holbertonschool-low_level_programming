#include "main.h"
#include <stdio.h>

int sumOddNumbersUpTo(int n)
{
    int sum = 0;
    
    for(int i = 1; i <= n; i++)
    {
        if (i % 2 != 0)
        {
            sum = sum + i;
        }
    }
    
    return sum;
}