
//perfect 
#include <stdio.h>

int main()
{

    int N, i, j, isPrime;

    printf("Enter the value of N\n");
    scanf("%d", &N);

    /* For each number between 2 to N, check if it is prime number or not */
    printf("Prime no. from %d to %d", 1, N);
    for (i = 2; i <= N; i++)
    {
        isPrime = 0;
        // Check if i is prime
        for (j = 2; j <= i / 2; j++)
        {
            if (i % j == 0)
            {
                isPrime = 1;
                break;
            }
        }

        if (isPrime == 0)
            printf("%d ", i);
    }
}


// prime 

#include <stdio.h>

int main()
{

    int N, i, j, isPrime;

    printf("Enter the value of N\n");
    scanf("%d", &N);

    /* For each number between 2 to N, check if it is prime number or not */
    printf("Prime no. from %d to %d", 1, N);
    for (i = 2; i <= N; i++)
    {
        isPrime = 0;
        // Check if i is prime
        for (j = 2; j <= i / 2; j++)
        {
            if (i % j == 0)
            {
                isPrime = 1;
                break;
            }
        }

        if (isPrime == 0)
            printf("%d ", i);
    }
}



// Write a C program that reads the first letter of direction (North, South, East, West), current (x,y) coordinate, and advancement of a person and prints the new coordinate. For e.g., if the current coordinate of a person in X- Y plane is (2,3) and s/he advances 6 units towards North, then his/her new coordinate is (2,3+6)=(2,9). Sample input/output (bold ones are user inputs):

// Enter current coordinate (x and y positions): 2 3
// Enter No. units towards direction: 6
// Enter Direction: N
// New coordinate: (2,9)

#include <stdio.h>

int main()
{
    int x, y, unit;
    char direction;

    printf("Enter current coordinate (x and y positions): ");
    scanf("%d %d", &x, &y);

    printf("Enter No. units towards direction: ");
    scanf("%d", &unit);

    printf("Enter Direction: ");
    scanf(" %c", &direction);

    switch (direction)
    {
    case 'N':
    case 'n':
        y = y + unit;
        break;

    case 'S':
    case 's':
        y = y - unit;
        break;

    case 'E':
    case 'e':
        x = x + unit;
        break;

    case 'W':
    case 'w':
        x = x - unit;
        break;

    default:
        printf("Invalid Syntax!\n");
        return 0;
    }

    printf("New co-ordinate: (%d,%d)\n", x, y);

    return 0;
}




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




// Write a program to display all decimal 
// digits (i.e., numbers in the range 0 - 9) in reverse order.
// Example output:	9 8 7 6 5 4 3 2 1 0

#include <stdio.h>

int main () 
{

    int i,n;
    n = 9;

    // printf("Enter the value of n: ");
    // scanf("%d", &n);

    for(i = 9; i >= 0; i--) 
    {
        printf("%d ", i);
    }

    return 0;
}

// Write a program to display all the letters of the alphabet (a-z).
//  Use two for loops: the 1st one will print all letters in small letters and
//   the 2nd one will print them in capital letters.
// Example output:	a b c d e ……… z
// 		A B C D ……… Z



#include <stdio.h>

int main () 
{

    char letter;


    for(letter = 'a'; letter <= 'z'; letter ++)
    {
        printf(" %c", letter);
    }


    printf("\n");

    for(letter = 'A'; letter <= 'Z'; letter ++)
    {
        printf(" %c", letter);
    }

    return 0;
}


//Write a program to compute the following series using  loop: 2^3+5^3+8^3+...+n3


#include <stdio.h>

int main () 
{
    int i, n ;
    int sum = 0;
    
    printf("Enter the value of n: ");
    scanf("%d",&n);

    for(i = 2; i <= n; i += 3)
    {
        sum = sum + (i * i * i);
    }

    printf("Total compute value of this series: %d", sum);


    return 0;

}


// Write a program to print all even numbers between m and n (m, n are user inputs) in reverse order.
// Sample input/output (bold ones are inputs):
// Enter m: 9
// Enter n: 21
// All even numbers between 9 and 20 in reverse order: 20, 18, 16, 14, 12, 10


#include <stdio.h>

int main() 
{
    int n, m;

    printf("Enter m: ");
    scanf("%d", &m);

    printf("Enter n: ");
    scanf("%d", &n);

    printf("All even numbers between %d and %d in reverse order: ", n, m);

    for(int i = n; i >= m; i--)
    {
        if(i % 2 == 0){
            printf("%d ", i);
        }
    }
    return 0;
}




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

#include <stdio.h>

int main()
{
    int i, number;

    printf("Enter the number: ");
    scanf("%d", &number);

    for (i = 1; i <= number / 2; i++)
    {
        if (number % i == 0)
        {
            printf("%d ", i);
        }
    }

    return 0;
}

// write a code  to find the factorial in C

#include <stdio.h>

int main()
{
    int number, i;
    unsigned long long factorial = 1;

    printf("Enter a number: ");
    scanf("%d", &number);

    if (number < 0)
    {
        printf("Factorial is not defined for negative numbers.");
    }
    else
    {
        for (i = 1; i <= number; i++)
        {
            factorial = factorial * i;
        }

        printf("Factorial of %d = %llu", number, factorial);
    }

    return 0;
}



// Write a C program display a given number in words starting from its rightmost digit

#include <stdio.h>

int main()
{
    int number;

    printf("Enter any number to print the word: ");
    scanf("%d", &number);

    while (number != 0)
    {
        switch (number % 10)
        {
        case 0:
            printf("Zero ");
            break;
        case 1:
            printf("one ");
            break;
        case 2:
            printf("Two ");
            break;
        case 3:
            printf("Three ");
            break;
        case 4:
            printf("Four ");
            break;
        case 5:
            printf("Five ");
            break;
        case 6:
            printf("Six ");
            break;
        case 7:
            printf("Seven ");
            break;
        case 8:
            printf("Eight ");
            break;
        case 9:
            printf("Nine ");
            break;
        }
        number = number / 10;
    }
}

