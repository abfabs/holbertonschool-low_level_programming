#include <stdio.h>
#include "main.h"

void loop_with_break(void)
{
    for (int i = 1; i <= 10; i++)
    {
        if (i == 5)
        {
            break;
        }
        printf("%d\n", i);
    }
    printf("loop break\n");
}
