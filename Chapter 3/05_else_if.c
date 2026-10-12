#include<stdio.h>

int main ()
{
    int age = 45;

    if (age > 60)
    {
        printf("you can drive and you are a senior citizen \n");
    }
    else if (age > 40){
        printf("You can drive and you are a elder \n");
    }
    else if (age > 18){
        printf("You can drive \n");
    }
    else {
        printf("you can't drive");
    }
    
    return 0;
}