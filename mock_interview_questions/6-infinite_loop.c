#include <stdio.h>
#include "main.h"

void infinite_loop(void)
{
    int count = 0;

    while (count >= 0)
    {
        printf("Loop to infinity and beyond!\n");
        count++;
    }
}
