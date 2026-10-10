#include<stdio.h>

int main ()
{
     // a. Using hard coded inputs.

    int length = 7;
    int breadth = 6;
    printf("The Area of a Rectangle is: %d cm sq. \n", length * breadth);

     // b. Using inputs supplied by the user.

     int L, B;

     printf("Enter the lenth of the rectangle: \n");
     scanf("%d", &L);

     printf("Enter the breadth of the rectangle: \n");
     scanf("%d", &B);

     printf("The area of the rectangle is: %d cm sq.", L * B);
     return 0;

 }