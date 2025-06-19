#include <stdio.h>
#include "main.h"

void print_address(int x)
{
	printf("The address of variable x is: %p\n", (void *)&x);
}