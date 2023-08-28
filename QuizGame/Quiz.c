#include <stdio.h>
#include <stdlib.h>
#include "Quiz.h"

void Q1(int *score)
{
    printf("1. Who is the father of C language?\n");
    printf("a) Steve Jobs\nb) James Gosling\nc) Dennis Ritchie\nd) Rasmus Lerdorf\n");
    char a1;
    scanf(" %c", &a1);

    if (a1 == 'c' || a1 == 'C')
    {
        printf("Correct!\n");
        (*score)++;
    }
    else
    {
        printf("Incorrect!\n");
    }
}

void Q2(int *score)
{
    printf("2. Which of the following is not a valid C variable name?\n");
    printf("a) int number;\nb) float rate;\nc) int variable_count;\nd) int $main;\n");
    char a2;
    scanf(" %c", &a2);

    if (a2 == 'd' || a2 == 'D')
    {
        printf("Correct!\n");
        (*score)++;
    }
    else
    {
        printf("Incorrect!\n");
    }
}

void Q3(int *score)
{
    printf("All keywords in C are in ____________\n ");
    printf("a) LowerCase letters\nb) UpperCase letters\nc) CamelCase letters\nd) None of the mentioned\n");
    char a3;
    scanf(" %c", &a3);

    if (a3 == 'a' || a3 == 'A')
    {
        printf("Correct!\n");
       (*score)++;
    }
    else
    {
        printf("Incorrect!\n");
    }
}

void Q4(int *score)
{
    printf("4. Which of the following is true for variable names in C?\n");
    printf("a) They can contain alphanumeric characters as well as special characters\nb) It is not an error to declare a variable to be one of the keywords(like goto, static)\nc) Variable names cannot start with a digit\nd) Variable can be of any length\n");
    char a4;
    scanf(" %c", &a4);

    if (a4 == 'c' || a4 == 'C')
    {
        printf("Correct!\n");
        (*score)++;
    }
    else
    {
        printf("Incorrect!\n");
    }
}

void Q5(int *score)
{
    printf("5. Which is valid C expression?\n");
    printf("a) int my_num = 100,000;\nb) int my_num = 100000;\nc) int my num = 1000;\nd) int $my_num = 10000;\n");
    char a5;
    scanf(" %c", &a5);

    if (a5 == 'b' || a5 == 'B')
    {
        printf("Correct!\n");
        (*score)++;
    }
    else
    {
        printf("Incorrect!\n");
    }
}


void Q20(int *score)
{
    printf("\n20. C preprocessors can have compiler specific features.\n");
    printf("a) True\nb) False\nc) Depends on the standard\nd) Depends on the platform\n");
    char a20;
    scanf(" %c", &a20);

    if (a20 == 'a' || a20 == 'A')
    {
        printf("Correct!\n");
        (*score)++;
    }
    else
    {
        printf("Incorrect!\n");
    }
}
