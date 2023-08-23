#include <stdio.h>
#include <stdlib.h>
#include "GuessTheNumber.h"
#include <time.h>

int main()
{
    srand(time(0));
    puts("Guess the Number game!\n");

    int l;
    int u;
    int difficulty;
    int usedHint = 0;

    printf("Choose difficulty level:\n");
    printf("1. Easy\n2. Medium\n3. Hard\n");
    scanf("%d", &difficulty);

    Difficulty(difficulty, &l, &u);

    int number = (rand() % (u - l + 1)) + l;

    int c = 0;
    int guess;

    printf("\nI'm thinking of a number between %d and %d.\n", l, u);

    int highScore = loadHighScore(difficulty);
    printf("\nHigh score: %d\n", highScore);

    while (1)
    {
        printf("\nEnter your guess: ");
        scanf("%d", &guess);

        c++;

        if (guess < number)
        {
            printf("\nYour guess, %d, is too low\n",guess);

            if (!usedHint)                                                          ///Hint feature
            {
                printf("\nDo you want a hint? (1 for yes, 0 for no): ");
                int hintChoice;
                scanf("%d", &hintChoice);

                if (hintChoice == 1)
                {
                    usedHint = 1;
                    if (number % 2 == 0)
                    {
                        printf("\nHint: The number is even.\n\n");
                    }
                    else
                    {
                        printf("\nHint: The number is odd.\n\n");
                    }
                }
            }
        }
        else if (guess > number)
        {
            printf("\nYour guess, %d, is too high\n",guess);

            if (!usedHint)                                                          ///Hint feature
            {
                printf("\nDo you want a hint? (1 for yes, 0 for no): ");
                int hintChoice;
                scanf("%d", &hintChoice);

                if (hintChoice == 1)
                {
                    usedHint = 1;
                    if (number % 2 == 0)
                    {
                        printf("\nHint: The number is even.\n\n");
                    }
                    else
                    {
                        printf("\nHint: The number is odd.\n\n");
                    }
                }
            }
        }
        else
        {
            printf("\nCongratulations! You guessed the number %d in %d guesses.\n", number, c);
            if (c < loadHighScore(difficulty) || loadHighScore(difficulty) == 0)
            {
                saveHighScore(c, difficulty);
                printf("\nNew high score for difficulty %d: %d\n", difficulty, c);
            }
            break;
        }
    }

    return 0;
}
