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




