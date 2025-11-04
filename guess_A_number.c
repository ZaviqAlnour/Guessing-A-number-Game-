#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
   int random, guess;
   int attempts = 0;

   srand(time(NULL));
   random = rand() % 100 + 1;
printf("\n\nWelcome to Guess the Number Game!\n");
printf("I have selected a number between 1 and 100.\n");
printf("Can you guess what it is?\n");
    do
    {
        printf("Enter your guess: ");
        scanf("%d", &guess);
        attempts++;

        if(guess < random)
        {
            printf("Guess higher!\n");
        }
        else if (guess > random)
        {
            printf("Guess Lower!\n");
        }
        else 
        {
            printf("Congratulations! You have guessed the number %d in %d attempts. \n", random, attempts);
        }
    }
    while (guess != random);

    printf("Thank you for playing! Goodbye!\n");
    printf("Devloped by Zaviq.\n\n");
    return 0;
}