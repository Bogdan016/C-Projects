#include <stdio.h>
#include <stdlib.h>
#include "BaseConverter.h"

int main()
{
    int n, from, to;

    printf("Enter the source base (2 / 8 / 10 / 16): ");
    scanf("%d", &from);

    printf("Enter the target base (2 / 8 / 10 / 16): ");
    scanf("%d", &to);

    if (from < 2 || from > 16 || to < 2 || to > 16)
    {
        printf("Enter a valid base.\n");
        return 1;
    }


    printf("Enter the number in base %d: ", from);
    scanf("%d", &n);

    if (from == 10)
    {
        switch (to)
        {
        case 2:
            decimalToBinary(n);
            break;
        case 8:
            decimalToOctal(n);
            break;
        case 16:
            decimalToHexa(n);
            break;
        default:
            printf("Invalid target base.\n");
        }
    }
    return 0;
}
