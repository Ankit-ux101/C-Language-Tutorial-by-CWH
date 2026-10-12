#include<stdio.h>

int main ()
{
    int a = 1, b = 1;
    printf("The value of a and b is %d \n", a && b);
    printf("The value of a and b is %d \n", a || b);
    printf("The value of not (a) is %d \n", !a);

    if (a&&b)
    {
        printf("both are true \n");
    }
    //   above use of logical operator is same as writing below nested if statement.
    if (a)
    {
        if (b)
        {
            printf("both are true \n");
        }
        
    }
    return 0;
}