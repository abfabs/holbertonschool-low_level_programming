### C Programming: Pointers and Strings

This set of exercises focuses on pointers and strings in C. Each task builds on the basics of using pointers and manipulating strings, with exercises designed to enhance programming skills in a practical way.

---

### Task 1: Print the Address of a Variable
-  Write a program that declares an integer variable, initializes it with a value, and then prints the memory address of the variable.
- **Hint**: Use the `&` operator to get the address and a pointer to store it.
- **Example Output**: "The address of variable x is: 0x7ff..."

---

#### Task 2: Convert Lowercase to Uppercase
- Write a function toUppercase that takes a string pointer and converts all lowercase letters to uppercase letters in place.
- **Hint**: Use pointer arithmetic and the ASCII values for lowercase and uppercase letters.
- Example Usage

```c
char str[] = "holberton";
toUppercase(str);
printf("%s", str); // Output: "HOLBERTON"
```

#### Task 3: Reverse Words in a String
-  Write a function reverseWords that takes a string pointer and reverses the order of the words in the string. Assume words are separated by spaces.
- **Hint**: Use pointers to identify word boundaries and swap words by their position in the string.
- Example Usage

```c
char str[] = "Hello Holberton School";
reverseWords(str);
printf("%s", str); // Output: "School Holberton Hello"
```

#### Task 4: Check for Palindrome
- Write a function isPalindrome that takes a string pointer and returns 1 if the string is a palindrome (reads the same backward) and 0 if it is not.
- **Hint**: Use two pointers, one at the start and one at the end of the string, to compare characters until they meet in the middle.
- Example usage:
```c
char str[] = "madam";
int result = isPalindrome(str);
printf("Is palindrome: %d", result); // Output: "Is palindrome: 1"
```

#### Task 5: Find a Character in a String
- Write a function findCharacter that takes a string pointer and a character, and returns the position of the character if found, or -1 if not found.
- **Hint**: Use a loop to iterate through the string with pointer arithmetic and stop when the character is found.
- Example Usage:

```c
char str[] = "Programming is awesome";
int position = findCharacter(str, 'g'); // Output: 3 (0-based index)
```

#### Task 6: Count Vowels and Consonants
-  Write a function countVowelsConsonants that takes a string pointer and counts the number of vowels and consonants. Return both counts via pointer parameters.
- **Hint**: Use two counters and if conditions to check if a character is a vowel or consonant.
- Example Usage

```c
char str[] = "Coding";
int vowels, consonants;
countVowelsConsonants(str, &vowels, &consonants);
printf("Vowels: %d, Consonants: %d", vowels, consonants); // Output: "Vowels: 2, Consonants: 4"
```