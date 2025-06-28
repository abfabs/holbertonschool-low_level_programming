#include <stdio.h>

int main() 
{
    int listof[] = {1, 2, 5, 7, 945, 43, 94, 5, 11, 18, 13};
    int size = sizeof(listof) / sizeof(listof[0]);
    int n = 21;
    int maxprime = 0;

    int i = 0;
    while (i < size)
    {
        if (listof[i] < n && listof[i] > 1)
        {
            int isPrime = 1;
            int j = 2;

            while (j <= listof[i] / 2)
            {
                if (listof[i] % j == 0)
                {
                    isPrime = 0;
                    break;
                }
                j++;
            }

            if (isPrime && listof[i] > maxprime)
                maxprime = listof[i];
        }
        i++;
    }

    if (maxprime > 0)
        printf("The biggest prime number less than %d in the array is %d.\n", n, maxprime);
    else
        printf("No prime numbers less than %d found in the array.\n", n);

    return 0;
}
