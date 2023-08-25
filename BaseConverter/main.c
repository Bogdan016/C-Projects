#include <stdio.h>
#include <stdlib.h>
#include "BaseConverter.h"

int main()
{
    int n, choice;

    printf("Conversion:\n");
    printf("1. Decimal to Binary\n");

    printf("Enter your choice: ");
    scanf("%d", &choice);

    printf("Enter a number: ");
    scanf("%d", &n);

    if(choice == 1)
    {
        decimalToBinary(n);
    }
    return 0;
}

