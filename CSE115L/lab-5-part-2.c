// Use switch case to make a simple calculator that can add, subtract,
// multiply or divide two input numbers.
// The operator (+ ,   -  ,  *  or   /) should also be read from user.
// Sample Input/Output:
// Enter two numbers: 4.5 2.9
// Enter operator: +
// 4.5 + 2.9 = 7.4

#include <stdio.h>
int main()
{

    int a, b, result;
    char operator;

    printf("Enter Two number: ");
    scanf("%d %d", &a, &b);

    printf("Enter operator: ");
    scanf(" %c", &operator);

    switch (operator)
    {
    case '+':
        result = a + b;
        break;

    case '-':
        result = a - b;
        break;

    case '*':
        result = a * b;
        break;

    case '/':
        result = a / b;
        break;

    default:
        printf("Invalid Syntax!");
        return 0;
    }

    printf("%d + %d= %d", a, b, result);

    return 0;
}

// Find the maximum between two numbers using switch case.

#include <stdio.h>

int main()
{

    int a, b, value;

    printf("Enter two number to find the maximum value: ");
    scanf("%d %d", &a, &b);

    value = a > b;

    switch (value)
    {
    case 1:
        printf("%d is maximum", a);
        break;
    case 0:
        printf("%d is maximum", b);
        break;
    }

    return 0;
}

// Write a C program that takes input the first letter of any of the following fruits name–
// Mango ---- Tk.500/kg,
// Apple   ---- Tk.250/kg,
// Banana ----Tk. 130/kg,
// Cherry -----Tk. 270/kg, and suggests the price of the fruit as output, using switch case.

#include <stdio.h>

int main()
{
    char firstLetterFruit;

    printf("Enter the first letter of the fruit name: ");
    scanf(" %c", &firstLetterFruit);

    switch (firstLetterFruit)
    {
    case 'M':
    case 'm':
        printf("Mango ---- Tk.500/kg");
        break;
    case 'A':
    case 'a':
        printf("Apple   ---- Tk.250/kg");
        break;
    case 'B':
    case 'b':
        printf("Banana ----Tk. 130/kg");
        break;
    case 'C':
    case 'c':
        printf("Cherry -----Tk. 270/kg");
        break;

    default:
        printf("Invalid Input!");
        return 0;
    }

    return 0;
}