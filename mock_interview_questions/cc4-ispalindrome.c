#include <stdio.h>
#include <string.h>

int ispalindrome(char *str) 
{
    int i = 0;
    int length = 0;
    int j = strlen(str) - 1;
    
    while(i < j)
    {
        if (str[i] != str[j])
        return 0;
        
        i++;
        j--;
    }
    return 1;
}
int main(void)
{
    char word[] = "racecar";
    if (ispalindrome(word))
    printf("The word %s is a palindrome.\n", word);
    else
    printf("The word %s is not a palindrome.\n", word);
    
    return 0;
}
