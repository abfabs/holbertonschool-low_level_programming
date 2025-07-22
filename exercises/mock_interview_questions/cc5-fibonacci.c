#include <stdio.h>

void fibonacci(int num) 
{
    int a = 0;
    int b = 1;
    int i, j;

    for (j = 0; j < num; j++)
    {
        if (j <= 1)
            i = j;
        else
        {
            i = a + b;
            a = b;
            b = i;
        }
        printf("%d ", i);
    }
    printf("\n");
}

int main(void)
{
    int num;
    printf("Enter a positive number and I will generate the Fibonacci sequence up to that number. \n");
    scanf("%d", &num);
    
    if (num <= 0) 
    {
        printf("The number %d is not a positive number.\n", num);
        return 1;
    }
    
    fibonacci(num);
    
    return 0;
}
