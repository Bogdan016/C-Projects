#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include "RockPaperScissors.h"

void printRock()
{
    printf("\n");
    printf("    _______\n---'   ____)\n      (_____)\n      (_____)\n      (____)\n---.__(___)\n\n");
    sleep(1);
}

void printPaper()
{
    printf("\n");
    printf("     _______\n---'    ____)____\n           ______)\n          _______)\n         _______)\n---.__________)\n\n");
    sleep(1);
}

void printScissors()
{
    printf("\n");
    printf("    _______\n---'   ____)____\n          ______)\n          ______)\n       _____)\n      (____)\n---.__(___)\n\n");
    sleep(1);
}
