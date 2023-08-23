#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <time.h>

int main()
{
    srand(time(NULL));


    FILE *score = fopen("score.txt","a");
    if(score==NULL)
    {
        printf("Error!\n");
        return;
    }
    int playerWins = 0;             ///counter for the player wins
    int computerWins = 0;           ///counter for the computer wins
    char name[50];
    int player;
    int computer;
    printf("Enter your name: ");
    scanf("%s",name);

    int playAgain = 1;
    while(playAgain)
    {
        printf("Choose:\n");
        sleep(0.9);                 ///adds a 0.9 seconds delay for better display
        printf("1. Rock\n");
        printRock();
        sleep(0.9);
        printf("2. Paper\n");
        printPaper();
        sleep(0.9);
        printf("3. Scissors\n");
        printScissors();

        printf("\n");
        scanf("%d", &player);

        while(player<1 || player>3)
        {
            printf("Invalid choice. Try again.\n");
            scanf("%d", &player);
        }

        printf("\n\n");

        sleep(1);
        printf("%s chose: ",name);

        if(player==1)
        {
            printRock();
        }
        else if(player==2)
        {
            printPaper();
        }
        else if(player==3)
        {
            printScissors();
        }

        computer = rand() % 3 + 1;

        sleep(0.9);
        printf("Computer chose: ");

        if(computer==1)
        {
            printRock();
        }
        else if(computer==2)
        {
            printPaper();
        }
        else if(computer==3)
        {
            printScissors();
        }

        if (player == computer)
        {
            printf("It's a tie!\n");
        }
        else if ((player == 1 && computer == 3) || (player == 2 && computer == 1) || (player == 3 && computer == 2))
        {
            printf("%s wins!\n",name);
            playerWins++;
        }

        else
        {
            printf("Computer wins!\n");
            computerWins++;
        }

        printf("Player Wins: %d\nComputer Wins: %d\n", playerWins, computerWins);

        printf("Do you want to play again? (1 for Yes, 0 for No): ");
        scanf("%d", &playAgain);
        while(playAgain < 0 || playAgain > 1)
        {
            printf("Invalid choice. Try again.\n");
            scanf("%d", &playAgain);
        }

    }

    fprintf(score,"%-14s %-13d %-18d\n",name,playerWins,computerWins);
    fclose(score);
    printf("Game Over! Thank you for playing\n");
    return 0;
}

