#include <string.h>

void my_strcat(char *dest, const char *src)
{
    while (*dest)
        dest++;

    while (*src)
        *dest++ = *src++;

    *dest = '\0';
}
