#include<stdio.h>

int main ()
{
    // 8. Write a program to calculate the factorial of a given number using a for loop.

    int product=1;
    int n = 8;
    for (int i = 1; i <= n; i++)
    {
        product *= i ;
    }
    printf("The factorial is : %d \n", product);    
     return 0;
}