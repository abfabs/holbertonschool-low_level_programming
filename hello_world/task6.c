#include <stdio.h>

/**
  * main - Simple Math Operations
  *
  *
  */
int main(void)
{

	int x; 
	int y;
	int sum;
	int diff;
	int pro;
	int quo;
	
	x = 8;
	y = 4;
	sum = x + y;
	diff = x - y;
	pro = x * y;
	quo = x / y;

	printf("%d + %d = %d\n" "%d - %d = %d\n" "%d * %d = %d\n" "%d / %d = %d\n", x, y, sum, x, y, diff, x, y, pro, x, y, quo);


	return (0);
}