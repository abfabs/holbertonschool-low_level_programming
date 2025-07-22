#include <stdio.h>
#include <string.h>

int isPalindrome(char *str) 
{
    int i = 0;
    int length;
    length = strlen(str);
    int j = length - 1;
    
    while (i < j)
    {
        if (str[i] != str[j])
        return 0;
        
        i++;
        j--;
    }
    return 1;
}

int main() 
{
    char word[] = "supercalifragilisticexpialidocious";
    if (isPalindrome(word))
        printf("%s is a palindrome!\n", word);
    else
        printf("%s is NOT a palindrome.\n", word);
    
    return 0;
}