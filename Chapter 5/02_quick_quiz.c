#include <stdio.h>

void good_morning();
void good_evening();
void good_night();

void good_morning()
{
     printf("Good Morning \n");
}
void good_evening()
{
     printf("Good Evening \n");
}
void good_night()
{
     printf("Good Night \n");
}

int main()
{
     good_morning();
     good_evening();
     good_night();

     return 0;
}