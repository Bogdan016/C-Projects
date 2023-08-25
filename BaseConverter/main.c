#include <stdio.h>
#include <stdlib.h>
#include "BaseConverter.h"

int main()
{
    int n, from, to;
    int c=1;
    while(c)
    {
        printf("From base (2 / 8 / 10 / 16): ");
        scanf("%d", &from);

        printf("To base (2 / 8 / 10 / 16): ");
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
            if (to == 2)
                decimalToBinary(n);
            else if (to == 8)
                decimalToOctal(n);
            else if (to == 16)
                decimalToHexa(n);
            else
                printf("ERROR\n");
        }
        else if (from == 8)
        {
            if (to == 10)
                octalToDecimal(n);
            else if (to == 2)
                octalToBinary(n);
            else if (to == 16)
                octalToHexa(n);
            else
                printf("ERROR\n");
        }

        else if (from == 2)
        {
            if (to == 10)
                binaryToDecimal(n);
            else if (to == 8)
                binaryToOctal(n);
            else if (to == 16)
                binaryToHexa(n);
            else
                printf("ERROR\n");
        }

        else if (from == 16)
        {
            if (to == 10)
                HexaToDecimal(n);
            else if (to == 2)
                HexaToBinary(n);
            else if (to == 8)
                HexaToOctal(n);
            else
                printf("ERROR.\n");
        }
        else
        {
            printf("ERROR\n");
        }
        scanf("%d",&c);
    }


    return 0;
}
