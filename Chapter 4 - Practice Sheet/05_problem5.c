#include<stdio.h>

int main ()
{
     //  5. Write a program to sum first ten natural numbers using while loop.
     int i = 1;
     int sum = 0;
     while (i<=10)
     {
          sum += i;
          i++;
     }
     printf("The sum of first 10 natural number is: %d",sum);

     return 0;
}