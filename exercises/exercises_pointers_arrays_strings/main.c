#include <stdio.h>
#include "main.h"

int main(void)
{
    char *word1 = "onomatopeia";
    char *word2 = "saganism";

    if (is_palindrome(word1))
        printf("\"%s\" is a palindrome!\n", word1);
    else
        printf("\"%s\" is NOT a palindrome.\n", word1);

    if (is_palindrome(word2))
        printf("\"%s\" is a palindrome!\n", word2);
    else
        printf("\"%s\" is NOT a palindrome.\n", word2);

    return 0;
}
