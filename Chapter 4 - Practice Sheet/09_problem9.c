#include<stdio.h>

int main ()
{
     //  9. Repeat 8 using while loop.  --> 8. Write a program to calculate the factorial of a given number using a for loop.

     int n = 8;
     int product = 1;
     int i = 1;
     while (i<=n)
     {
         product *= i;
         i++;
     }

     printf("The valur of factorial is %d", product);
     return 0;
}