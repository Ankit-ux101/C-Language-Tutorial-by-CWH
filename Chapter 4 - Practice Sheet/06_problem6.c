#include<stdio.h>

int main ()
{
     //  6. Write a program to implement program 5 using for and do-while loop. --> 5. Write a program to sum first ten natural numbers using while loop.

     // int i = 1;
     // int sum = 0;
     // do
     // {
     //      sum += i;
     //      i++;
     // } while (i <=10);
     // printf("The valur of first ten natural numbers are : %d", sum); ''

     int sum = 0;
     for (int i = 1; i <= 10 ; i++)
     {
          sum += i;
     }
     printf("The value of first ten natural numbers are : %d", sum);

     return 0;
}