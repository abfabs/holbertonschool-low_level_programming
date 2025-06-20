#include <stdio.h>
#include "main.h"

int main (void)
{
    char str[] = "Programming is awesome";
    int position = findCharacter(str, 'm'); // Output: 3 (0-based index)
    printf("The position of the character is located on index %d.\n", position);
    
    return (0);
}