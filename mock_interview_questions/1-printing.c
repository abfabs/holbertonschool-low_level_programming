#include <stdio.h>
#include "main.h"

void print_variables(void)
{
    int age = 25;
    float height = 1.74;
    char grade = 'A';
    char name[] = "BB";

    printf("Age: %d\n", age);
    printf("Height: %.2f m\n", height);
    printf("Grade: %c\n", grade);
    printf("Name: %s\n", name);
}
