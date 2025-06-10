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
	
	x = 10;
	y = 5;
	sum = x + y;
	diff = x - y;

	printf("%d + %d = %d\n" "%d - %d = %d\n", x, y, sum, x, y, diff);


	return (0);
}