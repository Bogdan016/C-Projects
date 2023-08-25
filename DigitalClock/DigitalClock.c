#include <stdio.h>
#include <time.h>
#include <unistd.h>
#include "DigitalClock.h"

const char *Digits[] =
{
    "  ___  \n"
    " / _ \\ \n"
    "| | | |\n"
    "| | | |\n"
    "| |_| |\n"
    " \\___/ \n\n",

    "  __ \n"
    " /_ |\n"
    "  | |\n"
    "  | |\n"
    "  | |\n"
    "  |_|\n\n",

    "  ___   \n"
    " |__ \\ \n"
    "    ) | \n"
    "   / /  \n"
    "  / /_  \n"
    " |____| \n\n",

    "  ____   \n"
    " |___ \\ \n"
    "   __) | \n"
    "  |__ <  \n"
    "  ___) | \n"
    " |____/ \n\n",

    "  _  _   \n"
    " | || |  \n"
    " | || |_ \n"
    " |__   _|\n"
    "    | |  \n"
    "    |_|  \n\n",

    "  _____  \n"
    " | ____| \n"
    " | |__   \n"
    " |___ \\  \n"
    "  ___) | \n"
    " |____/  \n\n",

    "    __   \n"
    "   / /   \n"
    "  / /_   \n"
    " | '_  \\  \n"
    " | (_) | \n"
    "  \\___/  \n\n",

    "  ______  \n"
    " |____  | \n"
    "     / /  \n"
    "    / /   \n"
    "   / /    \n"
    "  /_/     \n\n",

    "   ___  \n"
    "  / _ \\ \n"
    " | (_) | \n"
    "  > _ <  \n"
    " | (_) | \n"
    "  \\___/\n\n",

    "   ___  \n"
    "  / _ \\ \n"
    " | (_) | \n"
    "  \\__, | \n"
    "    / / \n"
    "   /_/ \n\n"
};

void printClock(int h, int m, int s)
{
    system("cls");  /// Clear the console (for windows)

    printf("HOURS:\n");
    printf("%s", Digits[h / 10]);       /// Print tens digit of hours
    printf("%s", Digits[h % 10]);       /// Print ones digit of hours
    printf("\n\n");

    printf("MINUTES:\n");
    printf("%s", Digits[m / 10]);       /// Print tens digit of minutes
    printf("%s", Digits[m % 10]);       /// Print ones digit of minutes
    printf("\n\n");

    printf("SECONDS:\n");
    printf("%s", Digits[s / 10]);       /// Print tens digit of seconds
    printf("%s", Digits[s % 10]);       /// Print ones digit of seconds
}
