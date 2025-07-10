#include "atm.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(void)
{
    BankClient Clients[] = 
    {
        {"Alba", 1, 2000.5},
        {"Sokol", 2, 1800},
        {"Renis", 3, 700},
        {"Enea", 4, 500}
    };
    
    int size = sizeof(Clients) / sizeof(BankClient);


    // viewBalance(Clients, size, 1);
    // deposit(Clients, size, 5, 200);
    // withdraw(Clients, size, 5, 3000);


    printf("1. View balance\n");
    printf("2. Deposit money\n");
    printf("3. Withdraw money\n");
    printf("4. Exit\n");

    int choice, accountNumber;
    int x = 0;
    float amount;

    while (x == 0)
    {
        printf("Enter your choice: ");
        scanf("%d", &choice);
        
        switch(choice) 
        {
            case 1: 
                printf("Please enter your account number: ");
                scanf("%d", &accountNumber);
                viewBalance(Clients, size, accountNumber); 
                break;

            case 2:
                printf("Please enter your account number: ");
                scanf("%d", &accountNumber);
                printf("Please enter your ammount: ");
                scanf("%f", &amount);
                deposit(Clients, size, accountNumber, amount);
                break;

            case 3:
                printf("Please enter your account number: ");
                scanf("%d", &accountNumber);
                printf("Please enter your ammount: ");
                scanf("%f", &amount);
                withdraw(Clients, size, accountNumber, amount); 
                break;

            case 4: 
                printf("Exiting program...\n"); 
                exit(0);
            default: 
                printf("Invalid choice. Try again.\n");
                break;
        }
    } 

    return 0;
}
