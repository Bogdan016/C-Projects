#include <stdio.h>
#include <stdlib.h>
#include "Quiz.h"

void display(Question q, int *score)
{
    printf("%s\n%s", q.question, q.options);
    char userAnswer;
    scanf(" %c", &userAnswer);

    if (userAnswer == q.correctAnswer)
    {
        printf("Correct!\n");
        (*score)++;
    }
    else
    {
        printf("Incorrect!\n%s\n", q.explanation);
    }
}
