#include "main.h"
#include "stdio.h"

void countDown(int start)
{
    for(int n = start; n >= 0; n--)
        {
            printf("%d\n",n);
        }
    printf("Happy New Year!\n");
}