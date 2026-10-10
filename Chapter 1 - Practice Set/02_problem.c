#include<stdio.h>

int main ()
{
    float pi = 3.14;
    int radius = 6, height=10;
    printf("The area of a circle with radius %d is %f cm sq. \n", radius , pi * radius * radius);

    printf("The area of a circle with radius %d is %f cm sq. \n", radius , pi * radius * radius * height);


    return 0;
}