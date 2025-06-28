#include <stdio.h>

int main(void) 
{
    int n, i;
    int sum = 0;
    
    printf("Enter a positive number and  I will find the sum of all even numbers up until the one you entered.\n");
    scanf("%d", &n);
    
    if (n <= 0)
        {
            printf("Please enter a positive integer.");
            return 1;
        }
    
    for (i = 1; i <= n; i++)
    {
        if (i % 2 == 0)
        {
            sum = sum + i;
        }
    }
    
    printf("The sum of all even numbers up to %d is %d.\n", n, sum);
    return 0;
}
