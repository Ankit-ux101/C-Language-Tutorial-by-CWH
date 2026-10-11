#include<stdio.h>

int main ()
{
    float a = 9.0; // it's not neccessary to write 9.0 in float.
    int b = 2;
    // int c = 9 / 2;
    float c = a/b;
    int d = 6.7; // don't write int in place of float value if you require the decimal numbers.

    printf("The remainder of %f & %d is  %f \n", a, b, c);
    printf("The value of d is: %d \n", d);

    // int k = 3.0 / 9; - what is the value of k and why?

    int k = 3.0/9;
    printf("The value of k is : %d \n", k);
    return 0;
}