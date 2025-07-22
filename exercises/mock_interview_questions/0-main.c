// main.c
#include <stdio.h>
#include "main.h"

int main() {
    int choice;

    do {
        printf("=== Mini Arcade ===\n");
        printf("1. Number Guessing Game\n");
        printf("2. Rock Paper Scissors\n");
        printf("0. Exit\n");
        printf("Choose a game: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                play_number_guessing();
                break;
            case 0:
                printf("Goodbye!\n");
                break;
            default:
                printf("Invalid choice. Try again.\n");
        }

    } while (choice != 0);

    return 0;
}
