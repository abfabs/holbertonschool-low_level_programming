### C Programming: Functions, Conditions, and Loops

This document provides a set of exercises aimed at practicing functions, as well as using conditions and loops within them. Each task is designed for beginners and encourages writing modular code by defining and calling functions.

#### Task 1: Check Even or Odd with Function
-   Write a function called `checkEvenOdd` that takes an integer as a parameter and prints whether the number is even or odd.
- **Hint**: Use an `if-else` statement inside the function to determine if the number is divisible by 2.

#### Task 2: Simple Password Checker
-   Create a function called `checkPassword` that takes a string as input and checks it against a hardcoded password (e.g., `1234`). If the password matches, print "Access Granted"; otherwise, print "Access Denied".
- **Hint**: Use an `if` statement to compare the input with the correct password inside the function.

#### Task 3: Grade Calculator Function
-   Write a function called `calculateGrade` that takes an integer score (0-100) as input and returns the grade ("A", "B", "C", "D", or "F") based on the following criteria:
  - 90 and above: "A"
  - 80-89: "B"
  - 70-79: "C"
  - 60-69: "D"
  - Below 60: "F"
- **Hint**: Use multiple `if-else` statements to check the score ranges.

#### Task 4: Countdown Function
-   Write a function `countDown` that takes an integer `start` and counts down to 0, printing each number. When it reaches 0, print "Happy New Year!".
- **Hint**: Use a `for` loop in the function to handle the countdown.

#### Task 5: Print Multiples of 3
-   Create a function called `printMultiplesOfThree` that prints all multiples of 3 up to a given number `n`.
- **Hint**: Use a `for` loop within the function to check if each number up to `n` is divisible by 3.

#### Task 6: Simple ATM Simulation with Function
-   Write a function `withdrawAmount` that takes a withdrawal amount and balance as parameters. If the amount is a multiple of 10 and doesn’t exceed the balance, update and return the balance; otherwise, print an error message.
- **Hint**: Use `if` conditions to check for a valid transaction within the function.

#### Task 7: Sum of Numbers Up to a Given Number
-   Create a function `sumUpTo` that takes an integer `n` and returns the sum of all numbers from 1 to `n`.
- **Hint**: Use a `for` loop within the function to add up numbers.

#### Task 8: Sum of Odd Numbers Function
-   Modify the previous function to create `sumOddNumbersUpTo` that only sums odd numbers from 1 to `n`.
- **Hint**: Use a `for` loop and an `if` condition to check for odd numbers before adding them to the sum.

#### Task 9 (Challenge): Guess the Number Game with Function
-   Write a guessing game function `guessNumberGame` that generates a random number between 1 and 100, and prompts the user to guess it. After each guess, print if the guess was too high, too low, or correct. Count the number of attempts and print the total when the correct number is guessed.
  
- **Key Requirements**:
  1. Generate a random number using `rand()` in `stdlib.h`.
  2. Use a `while` loop for continuous guessing.
  3. Keep track of the number of attempts and print it once the user guesses correctly.