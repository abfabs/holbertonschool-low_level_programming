#include <stdio.h>

void my_strcat(char *dest, const char *src);

int main(void)
{
    char str1[20] = "Good Kid, ";
    char str2[] = "M.A.A.D City";

    my_strcat(str1, str2);

    printf("%s\n", str1);

    return 0;
}
