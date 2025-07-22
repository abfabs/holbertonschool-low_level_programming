#include <stdio.h>

int main() 
{
    int listof[] = {1, 2, 5, 7, 945, 43, 94};
    int i;
    int size = 0;
    int sum = 0;
    int average;
    size = sizeof(listof) / sizeof(listof[0]);
    
    for (i = 0; i < size; i++)
    {
        sum = sum + listof[i];
    }
    
    average = sum / size;
    
    printf("The average of the numbers is %d.\n", average);

    return 0;
}