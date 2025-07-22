#include <stdio.h>
#include <string.h>

void reversestring(char *str) 
{
    int i = 0;
    int length;
    length = strlen(str);
    int j = length - 1;
    char temp;
   
    while (i < j)
    {
        temp = str[i];
        str[i] = str[j];
        str[j] = temp;
    
        i++;
        j--;
    }
}

int main() 
{
    char word[] = "Supercalifragilisticexpialidocious";
    
    printf("%s is the word.\n", word);
    
    reversestring(word);
    
    printf("%s is the word in reverse.\n", word);
    
    return 0;
}