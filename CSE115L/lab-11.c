#include <stdio.h>

float computeSquare(float x)
{
    return x * x;
}

void printCube(float x)
{
    printf("%f", x* x* x);
}

int main ()
{
    float m,n;

    printf("Enter your desire number: ");
    scanf("%f", &m);

    n = computeSquare(m);
    printf("%f\n", n);

    printCube(m);

    return 0;
}


// check weather the number is odd or even

#include <stdio.h>

void checkOddEven(int number)
{
    if(number % 2 == 0) printf("Even number:%d", number);
    else                printf("Odd number:%d", number);
}

int main() 
{
    int a;
    printf("Enter the value to check odd or even number: ");
    scanf("%d", &a);

    checkOddEven(a);
    return 0;
}



