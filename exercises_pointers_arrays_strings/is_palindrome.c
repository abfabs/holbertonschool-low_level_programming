#include <stdio.h>
#include "main.h"

int is_palindrome(char *s)

    int length = 0;
    int left, right;

    while (s[length] != '\0')
    {
        length++;
    }

    int left = 0;
    int right = length - 1;

    while (left < right)
    {
        if (s[left] != s[right])
        {
            return 0;  
        left++;
        right--;
        }

    return 1; 
}