#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "main.h"

void play_number_guessing() {
    int secret, guess, tries = 0;
    const int MAX_TRIES = 7;
    
    srand(time(NULL));
    secret = rand() % 100 + 1; // Secret number between 1 and 100

    printf("\n--- Number Guessing Game ---\n");
    printf("I'm thinking of a number between 1 and 100.\n");
    printf("You have %d tries to guess it!\n", MAX_TRIES);

    while (tries < MAX_TRIES) {
        printf("Enter your guess: ");
        scanf("%d", &guess);
        tries++;

        if (guess == secret) {
            printf("🎉 Correct! You guessed it in %d tries.\n\n", tries);
            return;
        } else if (guess < secret) {
            printf("Too low!\n");
        } else {
            printf("Too high!\n");
        }
    }

    printf("😢 Sorry, you've used all your tries. The number was %d.\n\n", secret);
}
