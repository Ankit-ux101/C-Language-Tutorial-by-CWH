#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    // Initialize random number generator
    srand(time(0));
    
    // Generate random number between 1 and 100
    int randomNumber = (rand() % 100) + 1;
    int no_of_guesses = 0;
    int guessed_number;

    // Print the random number
    // printf("Random Number: %d\n", randomNumber);

    do
    {
        printf("Enter the guessed number: \n");
        scanf("%d", &guessed_number);

        if (guessed_number > randomNumber)
        {
            printf("Choose a lower number \n");
        }
        else if (guessed_number < randomNumber)
        {
            printf("Enter a higher number \n");
        }
        else
        {
            printf("Congratulation ! \n");
        }
        no_of_guesses++;
            
    } while ( guessed_number != randomNumber);

    printf("You guessed the number in %d guesses \n", no_of_guesses);

    return 0;
}