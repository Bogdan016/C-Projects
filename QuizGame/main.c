#include <stdio.h>
#include <stdlib.h>
#include "Quiz.h"


int main()
{
    char playAgain;

    do
    {
        int score = 0;
        int questions = 5;

        printf("Welcome to the C Programming Quiz!\n");

        Q1(&score);
        Q2(&score);
        Q3(&score);
        Q4(&score);
        Q5(&score);

        printf("\nYour score: %d out of %d\n", score, questions);
        printf("Do you want to play again? (y/n): ");
        scanf(" %c", &playAgain);
    }
    while (playAgain == 'y' || playAgain == 'Y');

    printf("Thank you for playing the C Programming Quiz!\n");

    return 0;
}
