#include <stdio.h>
#include <stdlib.h>
#include "Quiz.h"

int main()
{
    char playAgain;
    do
    {
        int score=0;
        printf("C Programming Quiz!\n");

        Question questions[] =
        {
            {"1. Who is the father of C language?", "a) Steve Jobs\nb) James Gosling\nc) Dennis Ritchie\nd) Rasmus Lerdorf\n", 'c', "Explanation: Dennis Ritchie is the father of C Programming Language."},
            {"2. Which of the following is not a valid C variable name?", "a) int number;\nb) float rate;\nc) int variable_count;\nd) int $main;\n", 'd', "Explanation: Since only underscore and no other special character is allowed in a variable name, it results in an error."},
            {"3. All keywords in C are in ____________\n ","a) LowerCase letters\nb) UpperCase letters\nc) CamelCase letters\nd) None of the mentioned\n", 'a', " "},
            {"4. Which of the following is true for variable names in C?\n","a) They can contain alphanumeric characters as well as special characters\nb) It is not an error to declare a variable to be one of the keywords(like goto, static)\nc) Variable names cannot start with a digit\nd) Variable can be of any length\n", 'c', "Explanation: According to the syntax for C variable name, it cannot start with a digit.\n"},
            {"5. Which is valid C expression?\n","a) int my_num = 100,000;\nb) int my_num = 100000;\nc) int my num = 1000;\nd) int $my_num = 10000;\n", 'b', "Explanation: Space, comma and $ cannot be used in a variable name.\n"},
        };

        int nr = sizeof(questions) / sizeof(questions[0]);

        for (int i=0; i<nr; i++)
        {
            display(questions[i], &score);
        }

        printf("\nYour score: %d out of %d\n", score, nr);
        printf("Do you want to play again? (y/n): ");
        scanf(" %c", &playAgain);
    }
    while (playAgain == 'y' || playAgain == 'Y');

    printf("Thank you for playing the C Programming Quiz!\n");

    return 0;
}
