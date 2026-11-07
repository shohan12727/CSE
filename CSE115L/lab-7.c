// Write a C program that can be used to find whether a number is a prime number or not

#include <stdio.h>

int main()
{
    int i, number, isPrime = 1;

    printf("Enter the last value: ");
    scanf("%d", &number);

    if (number < 2)
    {
        isPrime = 0;
    }

    for (i = 2; i <= number / 2; i++)
    {
        if (number % i == 0)
        {
            isPrime = 0;
            break;
        }
    }

    if (isPrime == 1)
    {
        printf("%d is  a prime number", number);
    }
    else
    {
        printf("%d is not a prime number", number);
    }

    return 0;
}


// Write a C program to find all the factors of a number.


