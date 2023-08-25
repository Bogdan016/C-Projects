#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "BaseConverter.h"

void decimalToBinary(int n)
{
    int b[32];
    int k=0;
    while(n>0)
    {
        b[k++]=n%2;
        n/=2;
    }
    printf("Binary: ");
    for(int i = k-1; i>=0; i--)
    {
        printf("%d",b[i]);
    }
    printf("\n");
}

void decimalToOctal(int n)
{
    int b[32];
    int k=0;
    while(n>0)
    {
        b[k++]=n%8;
        n/=8;
    }
    printf("Octal: ");
    if (k == 0)
    {
        printf("0");
    }
    else
    {
        for (int i=k-1; i>=0; i--)
        {
            printf("%d", b[i]);
        }
    }
    printf("\n");
}
