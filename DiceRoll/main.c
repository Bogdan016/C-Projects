#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h>

int rollDice()
{
    return rand() % 6 ;
}

const char* dice[] =
{

    "        _________ \n"
    "       |         |\n"
    "       |         |\n"
    "       |    *    |\n"
    "       |         |\n"
    "       |_________|\n",

    "        _________ \n"
    "       |         |\n"
    "       |      *  |\n"
    "       |         |\n"
    "       |  *      |\n"
    "       |_________|\n",

    "        _________ \n"
    "       |         |\n"
    "       |      *  |\n"
    "       |    *    |\n"
    "       |  *      |\n"
    "       |_________|\n",

    "        _________ \n"
    "       |         |\n"
    "       |  *   *  |\n"
    "       |         |\n"
    "       |  *   *  |\n"
    "       |_________|\n",

    "        _________ \n"
    "       |         |\n"
    "       |  *   *  |\n"
    "       |    *    |\n"
    "       |  *   *  |\n"
    "       |_________|\n",

    "        _________ \n"
    "       |         |\n"
    "       |  *   *  |\n"
    "       |  *   *  |\n"
    "       |  *   *  |\n"
    "       |_________|\n"
};

int main()
{
    srand(time(NULL));

    int numRolls;
    printf("How many times do you want to roll the dice? ");
    scanf("%d",&numRolls);

    if (numRolls<=0)
    {
        printf("ERROR\n");
        return 1;
    }

    printf("Rolling the dice %d times:\n", numRolls);

    for (int i=0; i<numRolls; i++)
    {
        printf("Roll %d:\n", i+1);

        for (int j=0;j<10;j++)
        {
            printf("%s", dice[rollDice()]);
            fflush(stdout);
            usleep(200000);
            system("cls");
        }

        printf("%s", dice[rollDice()]);
        sleep(1);
        printf("\n");
    }

    return 0;
}
