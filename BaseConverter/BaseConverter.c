#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include "BaseConverter.h"

int isBinary(int n)
{
    int c;
    while (n>0)
    {
        c = n%10;
        if (c!=0 && c!=1)
        {
            return 0;
        }
        n/=10;
    }
    return 1;
}

int isDecimal(int n)
{
    int c;
    while (n>0)
    {
        c=n%10;
        if (c<0 || c>9)
        {
            return 0;
        }
        n/=10;
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

int isHexadecimal(char *s)
{
    for (int i=0; s[i]!='\0'; i++)
    {
        if (!isxdigit(s[i]))
        {
            return 0;
        }
    }
    return 1;
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

void binaryToOctal(int n)
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

    int o[32];
    int k = 0;

    while (x > 0)
    {
        o[k++] = x % 8;
        x /= 8;
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
            printf("%d", o[i]);
        }
    }
    printf("\n");
}

void binaryToHexa(int n)
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

    char hex[32];
    int k=0;

    while (x>0)
    {
        int r = x % 16;
        if (r<10)
        {
            hex[k++] = r + '0';
        }
        else
        {
            hex[k++] = r - 10 + 'A';
        }
        x /= 16;
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
            printf("%c", hex[i]);
        }
    }
    printf("\n");
}

void octalToDecimal(int n)
{
    int x=0;
    int b=1;

    while (n>0)
    {
        int c=n%10;
        x+=c*b;
        b*=8;
        n/=10;
    }
    printf("Decimal: %d\n", x);
}

void octalToBinary(int n)
{
    int x=0;
    int b=1;

    while (n>0)
    {
        int c=n%10;
        x+=c*b;
        b*=8;
        n/=10;
    }

    int b=0;
    int p=1;

    while (x>0)
    {
        int c=x%2;
        b+=c*p;
        p*=10;
        x/=2;
    }

    printf("Binary: %d\n", b);
}

void octalToHexa(int n)
{
    int x=0;
    int b=1;

    while (n>0)
    {
        int c=n%10;
        x+=c*b;
        b*=8;
        n/=10;
    }

    char hex[32];
    int k = 0;

    while (x > 0)
    {
        int r = x % 16;
        if (r < 10)
        {
            hex[k++] = r + '0';
        }
        else
        {
            hex[k++] = r - 10 + 'A';
        }
        x /= 16;
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
            printf("%c", hex[i]);
        }
    }
    printf("\n");
}

void HexaToDecimal(int n)
{
    int x = 0;
    int b = 1;

    while (n > 0)
    {
        int c = n % 10;
        if (isdigit(c))
        {
            x += c * base;
        }
        else if (isalpha(c))
        {
            x += (toupper(c) - 'A' + 10) * base;
        }
        b *= 16;
        n /= 10;
    }

    printf("Decimal: %d\n", x);
}

void HexaToBinary(int n);

void HexaToOctal(int n);

*/
