#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "Calculator.h"


int main()
{
    int choice;

    while (1)
    {
        displayMenu();
        choice = Choice();

        if (choice == EXIT_OPTION)
        {
            printf("    Exiting the calculator.\n");
            break;
        }

        if (choice >= CALCULATION_START && choice <= CALCULATION_END)
        {
            calculate(choice);
        }
        else
        {
            printf("    Invalid choice. Please select a valid option.\n");
        }
    }

    return 0;
}
