#include <stdio.h>

int main()
{
    // 2. Write a program to determine whether a student has passed or failed. To pass, a student requires a total of 40% and at least 33% in each subject. Assume there are three subjects and take the marks as input from the user.

    int marks_obt1;
    int marks_obt2;
    int marks_obt3;
    int total_marks = marks_obt1 + marks_obt2 + marks_obt3;
    // int total_marks_per_sub = 100;
    printf("Write the marks you've got in subject 1: \n");
    scanf("%d", &marks_obt1);
    printf("Write the marks you've got in subject 2: \n");
    scanf("%d", &marks_obt2);
    printf("Write the marks you've got in subject 3: \n");
    scanf("%d", &marks_obt3);

    if (total_marks / 300 * 100 >= 120 && marks_obt1, marks_obt2, marks_obt3 >= 33)
    {
        printf("You are passed \n");
    }
    else if (total_marks / 300 * 100 <= 119 && marks_obt1, marks_obt2, marks_obt3 <= 32)
    {
        printf("you are failed \n");
    }
    else {
        printf("This is a invalid input");
    }
}