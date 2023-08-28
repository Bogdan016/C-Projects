#include <stdio.h>
#include <stdlib.h>



int main() {
    char playAgain;

    do {
        int score = 0;
        int questions = 20;

        printf("Welcome to the C Programming Quiz!\n");

        Q1();
        Q2();
        Q3();
        Q4();
        Q5();

        // Question 20
        printf("\n20. C preprocessors can have compiler specific features.\n");
        printf("a) True\nb) False\nc) Depends on the standard\nd) Depends on the platform\n");
        char answer20;
        scanf(" %c", &answer20);

        if (answer20 == 'a' || answer20 == 'A') {
            printf("Correct!\n");
            score++;
        } else {
            printf("Incorrect!\n");
        }

        printf("\nYour score: %d out of %d\n", score, questions);
        printf("Do you want to play again? (y/n): ");
        scanf(" %c", &playAgain);

    } while (playAgain == 'y' || playAgain == 'Y');

    printf("Thank you for playing the C Programming Quiz!\n");

    return 0;
}
