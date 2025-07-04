#include "atm.h"
#include <stdio.h>
#include <string.h>

void viewBalance(BankClient Clients[], int size, int accountNumber)
{
    int i;

    for (i = 0; i < size; i++)
    {
        if (Clients[i].accountNumber == accountNumber)
        {
            printf("Account balance for %s: %.2f.\n", Clients[i].name, Clients[i].balance);
            return;
        }
    }
     printf("Account not found.\n");
}

void deposit(BankClient Clients[], int size, int accountNumber, float amount)
{
    int i;

    for (i = 0; i < size; i++)
    {
        if (Clients[i].accountNumber == accountNumber)
        {
            Clients[i].balance = Clients[i].balance + amount;
            printf("Deposited %.2f. New balance: %.2f.\n", amount, Clients[i].balance);
            return;
        }
    }
    printf("Account not found.\n");
}


void withdraw(BankClient Clients[], int size, int accountNumber, float amount)
{
    int i;

    for (i = 0; i < size; i++)
    {
        
        if (Clients[i].accountNumber == accountNumber)
        {
            if (Clients[i].balance >= amount)
            {
                Clients[i].balance = Clients[i].balance - amount;
                printf("Withdrawn %.2f. New balance: %.2f\n", amount, Clients[i].balance);
                return;
            }
            else
            {
                printf("Insufficent funds.\n");
                return;
            }
            
        }
    }
    printf("Account not found.\n");

}
