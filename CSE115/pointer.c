#include <stdio.h>
void sweep(int* a, int* b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

int main ()
{
    int x = 100, y =200;
    sweep(&x,&y);
    printf("After sweeping result %d %d",x,y);
    return 0;
}
