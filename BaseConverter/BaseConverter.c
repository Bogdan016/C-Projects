#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include "BaseConverter.h"


int isBinary(int n)
{
    int c;
    while (n > 0)
    {
        = n % 10;
        if (c != 0 && c != 1)
        {
            return 0;
        }
        n /= 10;
    }
    return 1;
}

int isDecimal(int n)
{
    int c;
    while (n > 0)
    {
        c = n % 10;
        if (c < 0 || c > 9)
        {
            return 0;
        }
        n /= 10;
    }
    return 1;
}

int isOctal(char *s)
{
    for (int i=0; s[i]!='\0'; i++)
    {
        if (!isdigit(s[i]) || s[i] > '7')
        {
            return 0;
        }
    }
    return 1;
}

// Function to verify if a string is in hexadecimal format
bool isHexadecimal(const char *str)
{
    for (int i = 0; str[i] != '\0'; i++)
    {
        if (!isxdigit(str[i]))
        {
            return false;
        }
    }
    return true;
}


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

void decimalToHexa(int n)
{
    char b[32];
    int k=0;

    while (n>0)
    {
        int x = n % 16;
        if (x<10)
        {
            b[k++] = x + '0';
        }
        else
        {
            b[k++] = x - 10 + 'A';
        }
        n /= 16;
    }

    printf("Hexadecimal: ");
    if (k == 0)
    {
        printf("0");
    }
    else
    {
        for (int i=k-1; i>=0; i--)
        {
            printf("%c", b[i]);
        }
    }
    printf("\n");
}

void binaryToDecimal(int n)
{
    int x = 0;
    int b = 1;

    while (n > 0)
    {
        int c = n % 10;
        x += c * b;
        b *= 2;
        n /= 10;
    }

    printf("Decimal: %d\n", x);
}

void binaryToOctal(int n);

void binaryToHexa(int n);

void octalToDecimal(int n);

void octalToBinary(int n);

void octalToHexa(int n);

void HexaToDecimal(int n);

void HexaToBinary(int n);

void HexaToOctal(int n);

