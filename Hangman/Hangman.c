#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include "Hangman.h"

void display(int ig)
{
    switch (ig)
    {
    case 0:
        printf("\n");
        break;
    case 1:
        printf("\t        \n");
        printf("\t        \n");
        printf("\t        \n");
        printf("\t        \n");
        printf("\t---     \n");
        break;
    case 2:
        printf("\t        \n");
        printf("\t        \n");
        printf("\t        \n");
        printf("\t |      \n");
        printf("\t---     \n");
        break;
    case 3:
        printf("\t        \n");
        printf("\t        \n");
        printf("\t |      \n");
        printf("\t |      \n");
        printf("\t---     \n");
        break;
    case 4:
        printf("\t        \n");
        printf("\t |      \n");
        printf("\t |      \n");
        printf("\t |      \n");
        printf("\t---     \n");
        break;
    case 5:
        printf("\t |      \n");
        printf("\t |      \n");
        printf("\t |      \n");
        printf("\t |      \n");
        printf("\t---     \n");
        break;
    case 6:
        printf("\t  ____  \n");
        printf("\t |      \n");
        printf("\t |      \n");
        printf("\t |      \n");
        printf("\t---     \n");
        break;
    case 7:
        printf("\t  ____  \n");
        printf("\t |    o \n");
        printf("\t |      \n");
        printf("\t |      \n");
        printf("\t---     \n");
        break;
    case 8:
        printf("\t  ____   \n");
        printf("\t |   o   \n");
        printf("\t |   |   \n");
        printf("\t |       \n");
        printf("\t |       \n");
        break;
    case 9:
        printf("\t  ____   \n");
        printf("\t |   o   \n");
        printf("\t |  /|\\ \n");
        printf("\t |       \n");
        printf("\t |       \n");
        break;
    case 10:
        printf("\t  ____   \n");
        printf("\t |   o   \n");
        printf("\t |  /|\\ \n");
        printf("\t |  / \\ \n");
        printf("\t---      \n");
        break;
    }
}


int rdmNr(int mini, int maxi)
{
    return mini + rand() % (maxi - mini + 1);
}

char *getRandomWord()
{
    FILE *file = fopen("popular_words.txt", "r");
    if (file == NULL)
    {
        perror("File Error.\n");
        return NULL;
    }

    char words[200][lenght];
    int c = 0;

    while (c < 200 && fscanf(file, "%s", words[c]) != EOF)
    {
        c++;
    }

    fclose(file);

    if (c == 0)
    {
        return NULL;
    }

    int rdmIndex = rdmNr(0, c - 1);
    return strdup(words[rdmIndex]);
}
