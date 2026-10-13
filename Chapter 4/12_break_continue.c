#include<stdio.h>

int main ()
{
     for (int i = 0; i < 15; i++)
     {
        if (i == 5)
        {
            // break;  // --> exits from the loop. GET OUT !
            continue;  // --> skips the mentioned iteration and runs the loop further
        }
        printf("%d \n", i);
     }
     printf("This loop is done!");

     return 0;
}