#include <stdio.h>

// N fibonacci number

int fibonacci (int n)
{
    if (n == 0) return 0;
    if (n == 1) return 1;

    return fibonacci(n-1) + fibonacci(n-2);
}

// int main ()
{
    int x;
    scanf("%d",&x);
    int result = fibonacci(x);
    printf("Nth fibonacci number: %d", result);
}

/*
Write a C program to compute sum of digits of a given number using recursion.
Sample input/output:
Enter an integer: 5431
Sum of digits = 13
*/




int sumOfDigits(int n)
{
    if (n == 0)
    {
        return 0;
    }

    return (n % 10) + sumOfDigits(n / 10);
}

void main()
{
    int n;

    printf("Enter an integer: ");
    scanf("%d", &n);

    printf("Sum of digits = %d\n", sumOfDigits(n));

    return 0;
}
















