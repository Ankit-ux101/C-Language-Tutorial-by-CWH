#include<stdio.h>

int main ()
{
     //  Write a program to print first 'n' natural numbers using for loop

     int n;
     printf("Write your nth number:");
     scanf("%d", &n);
     
     for (int i = 1; i <= n; i++)
     {
         printf("%d \n", i);
     }
     
     return 0;
}