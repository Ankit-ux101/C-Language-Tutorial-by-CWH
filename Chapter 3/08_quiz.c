#include<stdio.h>

int main ()
{
         /*
    Quick Quiz: Write a program to find grade of a student given his marks based on below:
        90 – 100 => A
        80 – 90 => B
        70 – 80 => C
        60 – 70 => D
        50 – 60 => E
        <50 => F
    */
         char grade;
         int marks = 94665;

         if (marks >= 90 && marks <=100){
              printf("Your grade is : %c", grade = 'A');
         }
         else if (marks >= 80 && marks <=89 ){
             printf("Your grade is : %c ", grade = 'B');
         }
         else if (marks >= 70 && marks <=79 ){
             printf("Your grade is : %c ", grade = 'C');
         }
         else if (marks >= 60 && marks <=69 ){
             printf("Your grade is : %c ", grade = 'D');
         }
         else if (marks >= 50 && marks <=59 ){
             printf("Your grade is : %c ", grade = 'E');
         }
         else if (marks >= 0 && marks <=50 ){
             printf("Your grade is : %c ", grade = 'F');
         }
        //  else if (marks > 101 ){
        //      printf("Invalid");
        //  }
         else {
             printf("invalid");
         }
         return 0;
}