#include <stdio.h>

int main()
{
    //  7. Write a program to calculate the sum of the numbers occurring in the multiplication table of 8 (consider 8 × 1 - 8 * 10).

    int sum = 0;
    for (int i = 0; i <= 10; i++)
    {
        sum += (8 * i);
    }
    printf("The sum of all the multiple in the table of 10 is : %d \n", sum);

    return 0;
}