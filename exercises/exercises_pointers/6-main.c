#include <stdio.h>
#include "main.h"

int main (void)
{
    char str[] = "Sokoli";
    int vowels, consonants;
    countVowelsConsonants(str, &vowels, &consonants);
    printf("Vowels: %d, Consonants: %d.\n", vowels, consonants); // Output: "Vowels: 2, Consonants: 4"
    return (0);
}