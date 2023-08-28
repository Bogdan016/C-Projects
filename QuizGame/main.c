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
            {"6. Which of the following cannot be a variable name in C?\n","a) volatile\nb) true\nc) friend\nd) export\n", 'a', "Explanation: volatile is C keyword.\n"},
            {"7. What is short int in C programming?\n","a) The basic data type of C\nb) Qualifier\nc) Short is the qualifier and int is the basic data type\nd) All of the mentioned", 'c', " "},
            {"8. Which of the following declaration is not supported by C language?\n","a) String str;\nb) char *str;\nc) float str = 3e2;\nd) Both “String str;” and “float str = 3e2;”\n", 'a', "Explanation: It is legal in Java, but not in C language.\n"},
            {"9. Which keyword is used to prevent any changes in the variable within a C program?\n","a) immutable\nb) mutable\nc) const\nd) volatile\n", 'c', "Explanation: const is a keyword constant in C program.\n"},
            {"10. What is the result of logical or relational expression in C?\n","a) True or False\nb) 0 or 1\nc) 0 if an expression is false and any positive number if an expression is true\nd) None of the mentioned\n", 'b', " "}
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
