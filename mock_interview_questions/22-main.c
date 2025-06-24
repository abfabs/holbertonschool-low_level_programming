#include <stdio.h>

int my_strlen(char *str);

int main(void)
{
    char str[] = "m.A.A.d city";
    int length = my_strlen(str);

    printf("Length of the string: %d\n", length);

    return 0;
}
