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