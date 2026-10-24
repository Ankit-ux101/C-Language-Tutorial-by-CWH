#include <stdio.h>

// function declaration
// int sum (int, int)

// functin definition
int sum(int x, int y)
{
    // printf("The sum is %d \n", x+y);
    return x + y;
}

int main()
{
    int a = 1;
    int b = 2;
    // sum(a, b);
    int c = sum(a, b); // function call
    printf("%d \n", c);

    int a1 = 11;
    int b1 = 21;
    // sum(a1, b1);
    int c1 = sum(a1, b1); // function call
    printf("%d \n", c1);

    int a2 = 13;
    int b2 = 12;
    // sum(a2, b2);
    int c2 = sum(a2, b2); // function call
    printf("%d \n", c2);

    return 0;
}