// 5.	C program to compute the integer resulting from rounding a number n (using function)

#include <stdio.h>

int round1(float n)
{
    int i = n;

    if (n - i >= 0.5)
        return i + 1;
    else
        return i;
}

int main()
{
    float n;
    printf("Enter a number: ");
    scanf("%f", &n);

    int s = round1(n);
    printf("%d", s);

    return 0;
}

// 4.	C program to compute sum of all natural numbers between m and n (using function)

#include <stdio.h>

int twoNumberSum(int m, int n)
{
    int i, sum = 0;
    for (i = m; i <= n; i++)
    {
        sum += i;
    }
    return sum;
}

int main()
{
    int n, m;
    printf("Enter two number: ");

    scanf("%d %d", &m, &n);

    int s = twoNumberSum(m, n);

    printf("%d", s);

    return 0;
}
