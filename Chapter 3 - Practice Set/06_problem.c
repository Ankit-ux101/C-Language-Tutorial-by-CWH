#include <stdio.h>

int main() {

    //  6. Write a program to find greatest of four numbers entered by the user.
    // int a, b, c, d, max;

    // printf("Enter four numbers: ");
    // scanf("%d %d %d %d", &a, &b, &c, &d);

    // max = a;

    // if (b > max)
    //     max = b;
    // if (c > max)
    //     max = c;
    // if (d > max)
    //     max = d;

    // printf("The greatest number is %d\n", max);

    // return 0;

    int a, b, c, d;
    printf("Enter your 4 numbers: ");
    scanf("%d %d %d %d", &a, &b, &c, &d);

    if (a >= b && a >= c && a >= d)
    {
        printf("%d is the greatest number among 4 \n", a);
    }
    else if (b >= a && b >= c && b >= d)
    {
        printf("%d is the greatest number among 4 \n", b);
    }
    else if (c >= a && c >= b && c >= d)
    {
        printf("%d is the greatest number among 4 \n", c);
    }
    else
    {
        printf("%d is the greatest number among 4 \n", d);
    }

    return 0;
}