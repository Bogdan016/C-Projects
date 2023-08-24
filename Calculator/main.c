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

        if (choice == 15)
        {
            printf("    Exiting the calculator.\n");
            break;
        }

        if (choice >= 1 && choice <= 14)
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
