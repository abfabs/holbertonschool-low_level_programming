/*
1. Character array:
It’s simply an array of characters, e.g.:

char arr[] = {'H', 'e', 'l', 'l', 'o'};

No guarantee it’s a string. It may or may not have a null terminator ('\0').

It’s just raw characters stored in consecutive memory.

You can use character arrays for many purposes besides strings.

2. String:
In C, a string is a character array that ends with a special null byte '\0'.

This null terminator marks the end of the string.

For example:

char str[] = {'H', 'e', 'l', 'l', 'o', '\0'};

or more simply:

char str[] = "Hello";

String functions (like printf, strlen, strcpy) expect this null terminator 
to know where the string ends.

Why does this matter?
Without the null terminator, functions that work with strings won’t know 
where to stop reading memory, which can cause undefined behavior or bugs.

So every string must be a character array with a '\0' at the end.
*/
