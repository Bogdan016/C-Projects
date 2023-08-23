#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include "Hangman.h"
#include <time.h>

int main()
{
    srand(time(NULL));

    char *word = getRandomWord();
    if (word == NULL)
    {
        printf("Word Error.\n");
        return 1;
    }

    char guessedWord[lenght];
    int tries=0;

    printf("Welcome to Hangman!\n");

    int i;
    for (i=0; i<strlen(word); i++)
    {
        guessedWord[i] = '-';
    }
    guessedWord[i]='\0';

    while (tries < max_tries)
    {
        printf("\nWord: %s\n", guessedWord);
        printf("Tries left: %d\n", max_tries - tries);

        char guess;
        printf("Guess a letter: ");
        scanf(" %1c", &guess);

        guess = tolower(guess);

        int correct = 0;
        for (i = 0; i < strlen(word); i++)
        {
            if (word[i] == guess)
            {
                guessedWord[i] = guess;
                correct = 1;
            }
        }

        if (!correct)
        {
            tries++;
            printf("Incorrect guess!\n");
        }

        int verify;
        if (strcmp(word, guessedWord) == 0)
        {
            verify = 1;
        }
        else
        {
            verify = 0;
        }

        if (verify)
        {
            printf("\nCongratulations!\nYou've guessed the word: %s\n", word);
            break;
        }

        display(tries);
    }

    if (tries == max_tries)
    {
        printf("\nGame Over.\nThe word was: %s\n", word);
    }

    free(word);

    return 0;
}
