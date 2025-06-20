#include <stdio.h>
#include "main.h"

int main(void)

{
    char str[] = "holberton";
    toUppercase(str);
    printf("%s\n", str); // Output: "HOLBERTON"
    return (0);
}