#include <stdio.h>
#include <stdlib.h>
#include "BaseConverter.h"

int main()
{
    int n, choice;

    printf("Conversion:\n");
    printf("1. Decimal to Binary\n");
    printf("2. Decimal to Octal\n");

    printf("\nEnter your choice: ");
    scanf("%d", &choice);

    printf("Enter a number: ");
    scanf("%d", &n);

    if(choice == 1)
    {
        decimalToBinary(n);
    }
    else if(choice == 2)
    {
        decimalToOctal(n);
    }
    return 0;
}

