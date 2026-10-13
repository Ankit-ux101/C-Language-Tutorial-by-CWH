#include<stdio.h>

int main ()
{
     //  Write a program to print multiplication table of a given number n .

     int n;
    //  int num = 1;
     printf("write the number you want the table for:");
     scanf("%d", &n);

     for (int i = 1 ; i <= 10; i++)
     {
         printf("%d * %d = %d \n", n, i, n*i);
     }
     
     return 0;
}