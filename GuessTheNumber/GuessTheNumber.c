#include <stdio.h>
#include <stdlib.h>
#include "GuessTheNumber.h"

void saveHighScore(int score, int difficulty)
{
    char filename[20];
    sprintf(filename, "highscore_%d.txt", difficulty);

    FILE *file = fopen(filename, "w");
    if (file == NULL)
    {
        printf("Unable to save high score.\n");
        return;
    }
    fprintf(file, "%d", score);
    fclose(file);
}

int loadHighScore(int difficulty)
{
    char filename[20];
    sprintf(filename, "highscore_%d.txt", difficulty);

    int score = 0;
    FILE *file = fopen(filename, "r");
    if (file != NULL)
    {
        fscanf(file, "%d", &score);
        fclose(file);
    }
    return score;
}

void Difficulty(int difficulty, int *l, int *u)
{
    switch (difficulty)
    {
    ///Easy
    case 1:
        *l = 1;
        *u = 10;
        break;
    ///Medium
    case 2:
        *l = 1;
        *u = 50;
        break;
    ///Hard
    case 3:
        *l = 1;
        *u = 100;
        break;
    ///Default
    default:
        *l = 1;
        *u = 50;
        break;
    }
}
