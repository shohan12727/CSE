// how can i take input of an multiple number like 2 3 4 5 .. lab -7

// Write a C program that takes a positive integer and
// calculates the alternating sum of its digits, starting with the rightmost digit as positive.

// For example:

// Input:
// Enter number: 58321

// Output:
// Alternating sum = -1

#include <stdio.h>

int main()
{
    int n, digit, sum = 0, sign = 1;
    printf("Enter number: ");
    scanf("%d", &n);

    while (n > 0)
    {
        digit = n % 10;

        sum += digit * sign;

        sign = sign * (-1);

        n = n / 10;
    }

    printf("Altering sum: %d", sum);
    return 0;
}

// Electricity Bill Calculator with Slab Conditions
// Write a C program to calculate an electricity bill according to the following rates:
// Units consumed	Rate per unit
// First 100 units	Tk. 5
// Next 100 units	Tk. 7
// Next 100 units	Tk. 10
// Above 300 units	Tk. 12

// Additionally:
// - If the bill exceeds Tk. 2,000, add a 5% surcharge.
// - If consumption exceeds 500 units, print HIGH CONSUMPTION.
// Input:
// Enter units: 350

// Output:
// Electricity bill = Tk. 2200
// Surcharge = Tk. 110
// Total bill = Tk. 2310
// HIGH CONSUMPTION: No


#include <stdio.h>

int main()
{
    int units;
    float bill = 0, surcharge = 0, totalBill;

    printf("Enter units: ");
    scanf("%d", &units);

    if (units <= 100)
    {
        bill = units * 5;
    }
    else if (units <= 200)
    {
        bill = (100 * 5) + (units - 100) * 7;
    }
    else if (units <= 300)
    {
        bill = (100 * 5) + (100 * 7) + (units - 200) * 10;
    }
    else
    {
        bill = (100 * 5) + (100 * 7) + (100 * 10) + (units - 300) * 12;
    }

    if (bill > 2000)
    {
        surcharge = bill * 0.05;
    }

    totalBill = bill + surcharge;

    printf("Electricity bill = Tk. %.0f\n", bill);
    printf("Surcharge = Tk. %.0f\n", surcharge);
    printf("Total bill = Tk. %.0f\n", totalBill);

    if (units > 500)
        printf("HIGH CONSUMPTION: Yes\n");
    else
        printf("HIGH CONSUMPTION: No\n");

    return 0;
}



// Detect Repeated Digits Without Arrays
// Write a C program that takes an integer and determines whether any digit appears more than once.

// Input:
// Enter number: 583925

// Output:
// No repeated digits.

// Another input:
// Enter number: 583952

// Output:
// Repeated digit found: 5

#include <stdio.h>

int main()
{
    int n, temp, digit, check, found = 0;

    printf("Enter number: ");
    scanf("%d", &n);

    temp = n;

    while (temp > 0)
    {
        digit = temp % 10;
        check = temp / 10;

        while (check > 0)
        {
            if (check % 10 == digit)
            {
                printf("Repeated digit found: %d\n", digit);
                found = 1;
                break;
            }

            check = check / 10;
        }

        if (found == 1)
            break;

        temp = temp / 10;
    }

    if (found == 0)
    {
        printf("No repeated digits.\n");
    }

    return 0;
}
