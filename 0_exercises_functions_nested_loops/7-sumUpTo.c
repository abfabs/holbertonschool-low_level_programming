#include "main.h"
#include <stdio.h>

int sumUpTo(int n)
{
    int sum = 0;
    
    for(int i = 1; i <= n; i++)
    {
        sum = sum + i;
    }
    
    return sum;
}