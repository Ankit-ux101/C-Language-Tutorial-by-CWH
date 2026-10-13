#include<stdio.h>

int main ()
{
     // Write a program to print first 'n' natural number using do-while loop.

     int num = 1;
     int n;
     printf("Write nth number: ");
     scanf("  %d", &n);
     do
     {
         printf("%d \n", num);
         num++;
     } while (num <= n);
     
     return 0;
}