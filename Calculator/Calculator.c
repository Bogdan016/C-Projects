#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "Calculator.h"


double add(double x, double y)
{
    return x + y;
}

double subtract(double x, double y)
{
    return x - y;
}

double divide(double x, double y)
{
    return x / y;
}

double multiply(double x, double y)
{
    return x * y;
}

double square(double x)
{
    return x * x;
}

double root(double x)
{
    return sqrt(x);
}

double power(double b, double e)
{
    return pow(b, e);
}

unsigned long long factorial(int x)
{
    if (x < 0)
    {
        return 0;
    }
    else if (x == 0 || x == 1)
    {
        return 1;
    }
    else
    {
        return x * factorial(x - 1);
    }
}

double Sin(double u)
{
    return sin(u);
}

double Cos(double u)
{
    return cos(u);
}

double Tg(double u)
{
    return tan(u);
}

double Ctg(double u)
{
    return 1.0 / tan(u);
}

int gcd(int a, int b)
{
    if(b==0)
    {
        return a;
    }
    return gcd(b,a%b);
}


void displayMenu()
{
    printf("    Calculator Menu:\n");
    printf("    ______________________________________________________________________________\n");
    printf("    | 1. x+y       |    2. x-y  _       |    3. x*y             |    4. x/y       |\n");
    printf("    | 5. x^2       |    6.    \\/x       |    7. x^y             |    8. x!        |\n");
    printf("    | 9. sin(x)    |   10. cos(x)       |   11. tg(x)           |   12. Ctg       |\n");
    printf("    |13. GCD       |   14.              |   15.                 |   16. Exit      |\n");
    printf("    |______________|____________________|_______________________|_________________|\n\n");
}

void displayCalculator()
{
    printf("     ______________________________________\n");
    printf("    |                                      |\n");
    printf("    |     Simple Calculator                |\n");
    printf("    |                                      |\n");
    printf("    |                                      |\n");
    printf("    |                                      |\n");
    printf("    |                                      |\n");
    printf("    |   _____    _____    _____    _____   |\n");
    printf("    |  |     |  |     |  |     |  |     |  |\n");
    printf("    |  | AC  |  | +/- |  |  %%  |  |  /  |  |\n");
    printf("    |  |_____|  |_____|  |_____|  |_____|  |\n");
    printf("    |   _____    _____    _____    _____   |\n");
    printf("    |  |     |  |     |  |     |  |     |  |\n");
    printf("    |  |  7  |  |  8  |  |  9  |  |  X  |  |\n");
    printf("    |  |_____|  |_____|  |_____|  |_____|  |\n");
    printf("    |   _____    _____    _____    _____   |\n");
    printf("    |  |     |  |     |  |     |  |     |  |\n");
    printf("    |  |  4  |  |  5  |  |  6  |  |  -  |  |\n");
    printf("    |  |_____|  |_____|  |_____|  |_____|  |\n");
    printf("    |   _____    _____    _____    _____   |\n");
    printf("    |  |     |  |     |  |     |  |     |  |\n");
    printf("    |  |  1  |  |  2  |  |  3  |  |  +  |  |\n");
    printf("    |  |_____|  |_____|  |_____|  |_____|  |\n");
    printf("    |   ______________    _____    _____   |\n");
    printf("    |  |              |  |     |  |     |  |\n");
    printf("    |  |      0       |  |  ,  |  |  =  |  |\n");
    printf("    |  |______________|  |_____|  |_____|  |\n");
    printf("    |                                      |\n");
    printf("    |______________________________________|\n\n");

}

int Choice()
{
    int c;
    printf("    Enter your choice: ");
    scanf("%d", &c);
    return c;
}


void calculate(int c)
{
    double n1, n2;

    if(c == 1 || c == 2 || c == 3 || c == 4 || c==7 || c == 13)
    {
        printf("    Enter first number: ");
        scanf("%lf", &n1);
        printf("    Enter the second number: ");
        scanf("%lf", &n2);
    }
    else if (c == 7)
    {
        printf("    Enter the base: ");
        scanf("%lf", &n1);
        printf("    Enter the exponent: ");
        scanf("%lf", &n2);
    }
    else if(c == 14 || c == 15 )
    {
        printf("    Coming soon! \n");
    }

    else
    {
        printf("    Enter a number: ");
        scanf("%lf", &n1);
    }

    switch (c)
    {
    case 1:
        printf("     ______________________________________\n");
        printf("    |                                      |\n");
        printf("    |     Simple Calculator                |\n");
        printf("    |                                      |\n");
        printf("    |     %-5.2f + %-5.2f                    |\n",n1,n2);
        printf("    |     Result: %-10.2f               |\n",add(n1,n2));
        printf("    |                                      |\n");
        printf("    |   _____    _____    _____    _____   |\n");
        printf("    |  |     |  |     |  |     |  |     |  |\n");
        printf("    |  | AC  |  | +/- |  |  %%  |  |  /  |  |\n");
        printf("    |  |_____|  |_____|  |_____|  |_____|  |\n");
        printf("    |   _____    _____    _____    _____   |\n");
        printf("    |  |     |  |     |  |     |  |     |  |\n");
        printf("    |  |  7  |  |  8  |  |  9  |  |  X  |  |\n");
        printf("    |  |_____|  |_____|  |_____|  |_____|  |\n");
        printf("    |   _____    _____    _____    _____   |\n");
        printf("    |  |     |  |     |  |     |  |     |  |\n");
        printf("    |  |  4  |  |  5  |  |  6  |  |  -  |  |\n");
        printf("    |  |_____|  |_____|  |_____|  |_____|  |\n");
        printf("    |   _____    _____    _____    _____   |\n");
        printf("    |  |     |  |     |  |     |  |     |  |\n");
        printf("    |  |  1  |  |  2  |  |  3  |  |  +  |  |\n");
        printf("    |  |_____|  |_____|  |_____|  |_____|  |\n");
        printf("    |   ______________    _____    _____   |\n");
        printf("    |  |              |  |     |  |     |  |\n");
        printf("    |  |      0       |  |  ,  |  |  =  |  |\n");
        printf("    |  |______________|  |_____|  |_____|  |\n");
        printf("    |                                      |\n");
        printf("    |______________________________________|\n\n");
        break;
    case 2:
        printf("     ______________________________________\n");
        printf("    |                                      |\n");
        printf("    |     Simple Calculator                |\n");
        printf("    |                                      |\n");
        printf("    |     %-5.2f - %-5.2f                    |\n",n1,n2);
        printf("    |     Result: %-10.2f               |\n",subtract(n1,n2));
        printf("    |                                      |\n");
        printf("    |   _____    _____    _____    _____   |\n");
        printf("    |  |     |  |     |  |     |  |     |  |\n");
        printf("    |  | AC  |  | +/- |  |  %%  |  |  /  |  |\n");
        printf("    |  |_____|  |_____|  |_____|  |_____|  |\n");
        printf("    |   _____    _____    _____    _____   |\n");
        printf("    |  |     |  |     |  |     |  |     |  |\n");
        printf("    |  |  7  |  |  8  |  |  9  |  |  X  |  |\n");
        printf("    |  |_____|  |_____|  |_____|  |_____|  |\n");
        printf("    |   _____    _____    _____    _____   |\n");
        printf("    |  |     |  |     |  |     |  |     |  |\n");
        printf("    |  |  4  |  |  5  |  |  6  |  |  -  |  |\n");
        printf("    |  |_____|  |_____|  |_____|  |_____|  |\n");
        printf("    |   _____    _____    _____    _____   |\n");
        printf("    |  |     |  |     |  |     |  |     |  |\n");
        printf("    |  |  1  |  |  2  |  |  3  |  |  +  |  |\n");
        printf("    |  |_____|  |_____|  |_____|  |_____|  |\n");
        printf("    |   ______________    _____    _____   |\n");
        printf("    |  |              |  |     |  |     |  |\n");
        printf("    |  |      0       |  |  ,  |  |  =  |  |\n");
        printf("    |  |______________|  |_____|  |_____|  |\n");
        printf("    |                                      |\n");
        printf("    |______________________________________|\n\n");
        break;
    case 3:
        printf("     ______________________________________\n");
        printf("    |                                      |\n");
        printf("    |     Simple Calculator                |\n");
        printf("    |                                      |\n");
        printf("    |     %-5.2f * %-5.2f                    |\n",n1,n2);
        printf("    |     Result: %-10.2f               |\n",multiply(n1,n2));
        printf("    |                                      |\n");
        printf("    |   _____    _____    _____    _____   |\n");
        printf("    |  |     |  |     |  |     |  |     |  |\n");
        printf("    |  | AC  |  | +/- |  |  %%  |  |  /  |  |\n");
        printf("    |  |_____|  |_____|  |_____|  |_____|  |\n");
        printf("    |   _____    _____    _____    _____   |\n");
        printf("    |  |     |  |     |  |     |  |     |  |\n");
        printf("    |  |  7  |  |  8  |  |  9  |  |  X  |  |\n");
        printf("    |  |_____|  |_____|  |_____|  |_____|  |\n");
        printf("    |   _____    _____    _____    _____   |\n");
        printf("    |  |     |  |     |  |     |  |     |  |\n");
        printf("    |  |  4  |  |  5  |  |  6  |  |  -  |  |\n");
        printf("    |  |_____|  |_____|  |_____|  |_____|  |\n");
        printf("    |   _____    _____    _____    _____   |\n");
        printf("    |  |     |  |     |  |     |  |     |  |\n");
        printf("    |  |  1  |  |  2  |  |  3  |  |  +  |  |\n");
        printf("    |  |_____|  |_____|  |_____|  |_____|  |\n");
        printf("    |   ______________    _____    _____   |\n");
        printf("    |  |              |  |     |  |     |  |\n");
        printf("    |  |      0       |  |  ,  |  |  =  |  |\n");
        printf("    |  |______________|  |_____|  |_____|  |\n");
        printf("    |                                      |\n");
        printf("    |______________________________________|\n\n");
        break;
    case 4:
        if (n2 != 0)
        {
            printf("     ______________________________________\n");
            printf("    |                                      |\n");
            printf("    |     Simple Calculator                |\n");
            printf("    |                                      |\n");
            printf("    |     %-5.2f / %-5.2f                    |\n",n1,n2);
            printf("    |     Result: %-10.2f               |\n",divide(n1,n2));
            printf("    |                                      |\n");
            printf("    |   _____    _____    _____    _____   |\n");
            printf("    |  |     |  |     |  |     |  |     |  |\n");
            printf("    |  | AC  |  | +/- |  |  %%  |  |  /  |  |\n");
            printf("    |  |_____|  |_____|  |_____|  |_____|  |\n");
            printf("    |   _____    _____    _____    _____   |\n");
            printf("    |  |     |  |     |  |     |  |     |  |\n");
            printf("    |  |  7  |  |  8  |  |  9  |  |  X  |  |\n");
            printf("    |  |_____|  |_____|  |_____|  |_____|  |\n");
            printf("    |   _____    _____    _____    _____   |\n");
            printf("    |  |     |  |     |  |     |  |     |  |\n");
            printf("    |  |  4  |  |  5  |  |  6  |  |  -  |  |\n");
            printf("    |  |_____|  |_____|  |_____|  |_____|  |\n");
            printf("    |   _____    _____    _____    _____   |\n");
            printf("    |  |     |  |     |  |     |  |     |  |\n");
            printf("    |  |  1  |  |  2  |  |  3  |  |  +  |  |\n");
            printf("    |  |_____|  |_____|  |_____|  |_____|  |\n");
            printf("    |   ______________    _____    _____   |\n");
            printf("    |  |              |  |     |  |     |  |\n");
            printf("    |  |      0       |  |  ,  |  |  =  |  |\n");
            printf("    |  |______________|  |_____|  |_____|  |\n");
            printf("    |                                      |\n");
            printf("    |______________________________________|\n\n");
        }
        else
        {
            printf("     ______________________________________\n");
            printf("    |                                      |\n");
            printf("    |     Simple Calculator                |\n");
            printf("    |                                      |\n");
            printf("    |                                      |\n");
            printf("    |     ERROR                            |\n");
            printf("    |                                      |\n");
            printf("    |   _____    _____    _____    _____   |\n");
            printf("    |  |     |  |     |  |     |  |     |  |\n");
            printf("    |  | AC  |  | +/- |  |  %%  |  |  /  |  |\n");
            printf("    |  |_____|  |_____|  |_____|  |_____|  |\n");
            printf("    |   _____    _____    _____    _____   |\n");
            printf("    |  |     |  |     |  |     |  |     |  |\n");
            printf("    |  |  7  |  |  8  |  |  9  |  |  X  |  |\n");
            printf("    |  |_____|  |_____|  |_____|  |_____|  |\n");
            printf("    |   _____    _____    _____    _____   |\n");
            printf("    |  |     |  |     |  |     |  |     |  |\n");
            printf("    |  |  4  |  |  5  |  |  6  |  |  -  |  |\n");
            printf("    |  |_____|  |_____|  |_____|  |_____|  |\n");
            printf("    |   _____    _____    _____    _____   |\n");
            printf("    |  |     |  |     |  |     |  |     |  |\n");
            printf("    |  |  1  |  |  2  |  |  3  |  |  +  |  |\n");
            printf("    |  |_____|  |_____|  |_____|  |_____|  |\n");
            printf("    |   ______________    _____    _____   |\n");
            printf("    |  |              |  |     |  |     |  |\n");
            printf("    |  |      0       |  |  ,  |  |  =  |  |\n");
            printf("    |  |______________|  |_____|  |_____|  |\n");
            printf("    |                                      |\n");
            printf("    |______________________________________|\n\n");
        }
        break;
    case 5:
        printf("     ______________________________________\n");
        printf("    |                                      |\n");
        printf("    |     Simple Calculator                |\n");
        printf("    |                                      |\n");
        printf("    |     %-5.2f^ 2                         |\n",n1);
        printf("    |     Result: %-10.2f               |\n",square(n1));
        printf("    |                                      |\n");
        printf("    |   _____    _____    _____    _____   |\n");
        printf("    |  |     |  |     |  |     |  |     |  |\n");
        printf("    |  | AC  |  | +/- |  |  %%  |  |  /  |  |\n");
        printf("    |  |_____|  |_____|  |_____|  |_____|  |\n");
        printf("    |   _____    _____    _____    _____   |\n");
        printf("    |  |     |  |     |  |     |  |     |  |\n");
        printf("    |  |  7  |  |  8  |  |  9  |  |  X  |  |\n");
        printf("    |  |_____|  |_____|  |_____|  |_____|  |\n");
        printf("    |   _____    _____    _____    _____   |\n");
        printf("    |  |     |  |     |  |     |  |     |  |\n");
        printf("    |  |  4  |  |  5  |  |  6  |  |  -  |  |\n");
        printf("    |  |_____|  |_____|  |_____|  |_____|  |\n");
        printf("    |   _____    _____    _____    _____   |\n");
        printf("    |  |     |  |     |  |     |  |     |  |\n");
        printf("    |  |  1  |  |  2  |  |  3  |  |  +  |  |\n");
        printf("    |  |_____|  |_____|  |_____|  |_____|  |\n");
        printf("    |   ______________    _____    _____   |\n");
        printf("    |  |              |  |     |  |     |  |\n");
        printf("    |  |      0       |  |  ,  |  |  =  |  |\n");
        printf("    |  |______________|  |_____|  |_____|  |\n");
        printf("    |                                      |\n");
        printf("    |______________________________________|\n\n");
        break;
    case 6:
        if (n1>0)
        {
            printf("     ______________________________________\n");
            printf("    |                                      |\n");
            printf("    |     Simple Calculator                |\n");
            printf("    |       _____                          |\n");
            printf("    |     \\/%-5.2f                          |\n",n1);
            printf("    |     Result: %-10.2f               |\n",root(n1));
            printf("    |                                      |\n");
            printf("    |   _____    _____    _____    _____   |\n");
            printf("    |  |     |  |     |  |     |  |     |  |\n");
            printf("    |  | AC  |  | +/- |  |  %%  |  |  /  |  |\n");
            printf("    |  |_____|  |_____|  |_____|  |_____|  |\n");
            printf("    |   _____    _____    _____    _____   |\n");
            printf("    |  |     |  |     |  |     |  |     |  |\n");
            printf("    |  |  7  |  |  8  |  |  9  |  |  X  |  |\n");
            printf("    |  |_____|  |_____|  |_____|  |_____|  |\n");
            printf("    |   _____    _____    _____    _____   |\n");
            printf("    |  |     |  |     |  |     |  |     |  |\n");
            printf("    |  |  4  |  |  5  |  |  6  |  |  -  |  |\n");
            printf("    |  |_____|  |_____|  |_____|  |_____|  |\n");
            printf("    |   _____    _____    _____    _____   |\n");
            printf("    |  |     |  |     |  |     |  |     |  |\n");
            printf("    |  |  1  |  |  2  |  |  3  |  |  +  |  |\n");
            printf("    |  |_____|  |_____|  |_____|  |_____|  |\n");
            printf("    |   ______________    _____    _____   |\n");
            printf("    |  |              |  |     |  |     |  |\n");
            printf("    |  |      0       |  |  ,  |  |  =  |  |\n");
            printf("    |  |______________|  |_____|  |_____|  |\n");
            printf("    |                                      |\n");
            printf("    |______________________________________|\n\n");
        }
        else
        {
            printf("     ______________________________________\n");
            printf("    |                                      |\n");
            printf("    |     Simple Calculator                |\n");
            printf("    |                                      |\n");
            printf("    |                                      |\n");
            printf("    |     ERROR                            |\n");
            printf("    |                                      |\n");
            printf("    |   _____    _____    _____    _____   |\n");
            printf("    |  |     |  |     |  |     |  |     |  |\n");
            printf("    |  | AC  |  | +/- |  |  %%  |  |  /  |  |\n");
            printf("    |  |_____|  |_____|  |_____|  |_____|  |\n");
            printf("    |   _____    _____    _____    _____   |\n");
            printf("    |  |     |  |     |  |     |  |     |  |\n");
            printf("    |  |  7  |  |  8  |  |  9  |  |  X  |  |\n");
            printf("    |  |_____|  |_____|  |_____|  |_____|  |\n");
            printf("    |   _____    _____    _____    _____   |\n");
            printf("    |  |     |  |     |  |     |  |     |  |\n");
            printf("    |  |  4  |  |  5  |  |  6  |  |  -  |  |\n");
            printf("    |  |_____|  |_____|  |_____|  |_____|  |\n");
            printf("    |   _____    _____    _____    _____   |\n");
            printf("    |  |     |  |     |  |     |  |     |  |\n");
            printf("    |  |  1  |  |  2  |  |  3  |  |  +  |  |\n");
            printf("    |  |_____|  |_____|  |_____|  |_____|  |\n");
            printf("    |   ______________    _____    _____   |\n");
            printf("    |  |              |  |     |  |     |  |\n");
            printf("    |  |      0       |  |  ,  |  |  =  |  |\n");
            printf("    |  |______________|  |_____|  |_____|  |\n");
            printf("    |                                      |\n");
            printf("    |______________________________________|\n\n");
        }
        break;
    case 7:
        printf("     ______________________________________\n");
        printf("    |                                      |\n");
        printf("    |     Simple Calculator                |\n");
        printf("    |                                      |\n");
        printf("    |     %-5.2f^ %-5.2f                     |\n",n1,n2);
        printf("    |     Result: %-10.2f               |\n",power(n1, n2));
        printf("    |                                      |\n");
        printf("    |   _____    _____    _____    _____   |\n");
        printf("    |  |     |  |     |  |     |  |     |  |\n");
        printf("    |  | AC  |  | +/- |  |  %%  |  |  /  |  |\n");
        printf("    |  |_____|  |_____|  |_____|  |_____|  |\n");
        printf("    |   _____    _____    _____    _____   |\n");
        printf("    |  |     |  |     |  |     |  |     |  |\n");
        printf("    |  |  7  |  |  8  |  |  9  |  |  X  |  |\n");
        printf("    |  |_____|  |_____|  |_____|  |_____|  |\n");
        printf("    |   _____    _____    _____    _____   |\n");
        printf("    |  |     |  |     |  |     |  |     |  |\n");
        printf("    |  |  4  |  |  5  |  |  6  |  |  -  |  |\n");
        printf("    |  |_____|  |_____|  |_____|  |_____|  |\n");
        printf("    |   _____    _____    _____    _____   |\n");
        printf("    |  |     |  |     |  |     |  |     |  |\n");
        printf("    |  |  1  |  |  2  |  |  3  |  |  +  |  |\n");
        printf("    |  |_____|  |_____|  |_____|  |_____|  |\n");
        printf("    |   ______________    _____    _____   |\n");
        printf("    |  |              |  |     |  |     |  |\n");
        printf("    |  |      0       |  |  ,  |  |  =  |  |\n");
        printf("    |  |______________|  |_____|  |_____|  |\n");
        printf("    |                                      |\n");
        printf("    |______________________________________|\n\n");
        break;
    case 8:
        printf("     ______________________________________\n");
        printf("    |                                      |\n");
        printf("    |     Simple Calculator                |\n");
        printf("    |                                      |\n");
        printf("    |     %5d!                           |\n", (int)n1);
        printf("    |     Result: %-10llu               |\n",factorial((int)n1));
        printf("    |                                      |\n");
        printf("    |   _____    _____    _____    _____   |\n");
        printf("    |  |     |  |     |  |     |  |     |  |\n");
        printf("    |  | AC  |  | +/- |  |  %%  |  |  /  |  |\n");
        printf("    |  |_____|  |_____|  |_____|  |_____|  |\n");
        printf("    |   _____    _____    _____    _____   |\n");
        printf("    |  |     |  |     |  |     |  |     |  |\n");
        printf("    |  |  7  |  |  8  |  |  9  |  |  X  |  |\n");
        printf("    |  |_____|  |_____|  |_____|  |_____|  |\n");
        printf("    |   _____    _____    _____    _____   |\n");
        printf("    |  |     |  |     |  |     |  |     |  |\n");
        printf("    |  |  4  |  |  5  |  |  6  |  |  -  |  |\n");
        printf("    |  |_____|  |_____|  |_____|  |_____|  |\n");
        printf("    |   _____    _____    _____    _____   |\n");
        printf("    |  |     |  |     |  |     |  |     |  |\n");
        printf("    |  |  1  |  |  2  |  |  3  |  |  +  |  |\n");
        printf("    |  |_____|  |_____|  |_____|  |_____|  |\n");
        printf("    |   ______________    _____    _____   |\n");
        printf("    |  |              |  |     |  |     |  |\n");
        printf("    |  |      0       |  |  ,  |  |  =  |  |\n");
        printf("    |  |______________|  |_____|  |_____|  |\n");
        printf("    |                                      |\n");
        printf("    |______________________________________|\n\n");
        break;
    case 9:
        printf("     ______________________________________\n");
        printf("    |                                      |\n");
        printf("    |     Simple Calculator                |\n");
        printf("    |                                      |\n");
        printf("    |     sin(%.2f)                       |\n",n1);
        printf("    |     Result: %-10.2f               |\n",Sin(n1));
        printf("    |                                      |\n");
        printf("    |   _____    _____    _____    _____   |\n");
        printf("    |  |     |  |     |  |     |  |     |  |\n");
        printf("    |  | AC  |  | +/- |  |  %%  |  |  /  |  |\n");
        printf("    |  |_____|  |_____|  |_____|  |_____|  |\n");
        printf("    |   _____    _____    _____    _____   |\n");
        printf("    |  |     |  |     |  |     |  |     |  |\n");
        printf("    |  |  7  |  |  8  |  |  9  |  |  X  |  |\n");
        printf("    |  |_____|  |_____|  |_____|  |_____|  |\n");
        printf("    |   _____    _____    _____    _____   |\n");
        printf("    |  |     |  |     |  |     |  |     |  |\n");
        printf("    |  |  4  |  |  5  |  |  6  |  |  -  |  |\n");
        printf("    |  |_____|  |_____|  |_____|  |_____|  |\n");
        printf("    |   _____    _____    _____    _____   |\n");
        printf("    |  |     |  |     |  |     |  |     |  |\n");
        printf("    |  |  1  |  |  2  |  |  3  |  |  +  |  |\n");
        printf("    |  |_____|  |_____|  |_____|  |_____|  |\n");
        printf("    |   ______________    _____    _____   |\n");
        printf("    |  |              |  |     |  |     |  |\n");
        printf("    |  |      0       |  |  ,  |  |  =  |  |\n");
        printf("    |  |______________|  |_____|  |_____|  |\n");
        printf("    |                                      |\n");
        printf("    |______________________________________|\n\n");
        break;
    case 10:
        printf("     ______________________________________\n");
        printf("    |                                      |\n");
        printf("    |     Simple Calculator                |\n");
        printf("    |                                      |\n");
        printf("    |     cos(%.2f)                       |\n",n1);
        printf("    |     Result: %-10.2f               |\n",Cos(n1));
        printf("    |                                      |\n");
        printf("    |   _____    _____    _____    _____   |\n");
        printf("    |  |     |  |     |  |     |  |     |  |\n");
        printf("    |  | AC  |  | +/- |  |  %%  |  |  /  |  |\n");
        printf("    |  |_____|  |_____|  |_____|  |_____|  |\n");
        printf("    |   _____    _____    _____    _____   |\n");
        printf("    |  |     |  |     |  |     |  |     |  |\n");
        printf("    |  |  7  |  |  8  |  |  9  |  |  X  |  |\n");
        printf("    |  |_____|  |_____|  |_____|  |_____|  |\n");
        printf("    |   _____    _____    _____    _____   |\n");
        printf("    |  |     |  |     |  |     |  |     |  |\n");
        printf("    |  |  4  |  |  5  |  |  6  |  |  -  |  |\n");
        printf("    |  |_____|  |_____|  |_____|  |_____|  |\n");
        printf("    |   _____    _____    _____    _____   |\n");
        printf("    |  |     |  |     |  |     |  |     |  |\n");
        printf("    |  |  1  |  |  2  |  |  3  |  |  +  |  |\n");
        printf("    |  |_____|  |_____|  |_____|  |_____|  |\n");
        printf("    |   ______________    _____    _____   |\n");
        printf("    |  |              |  |     |  |     |  |\n");
        printf("    |  |      0       |  |  ,  |  |  =  |  |\n");
        printf("    |  |______________|  |_____|  |_____|  |\n");
        printf("    |                                      |\n");
        printf("    |______________________________________|\n\n");
        break;
    case 11:
        printf("     ______________________________________\n");
        printf("    |                                      |\n");
        printf("    |     Simple Calculator                |\n");
        printf("    |                                      |\n");
        printf("    |     tg(%.2f)                        |\n",n1);
        printf("    |     Result: %-10.2f               |\n",Tg(n1));
        printf("    |                                      |\n");
        printf("    |   _____    _____    _____    _____   |\n");
        printf("    |  |     |  |     |  |     |  |     |  |\n");
        printf("    |  | AC  |  | +/- |  |  %%  |  |  /  |  |\n");
        printf("    |  |_____|  |_____|  |_____|  |_____|  |\n");
        printf("    |   _____    _____    _____    _____   |\n");
        printf("    |  |     |  |     |  |     |  |     |  |\n");
        printf("    |  |  7  |  |  8  |  |  9  |  |  X  |  |\n");
        printf("    |  |_____|  |_____|  |_____|  |_____|  |\n");
        printf("    |   _____    _____    _____    _____   |\n");
        printf("    |  |     |  |     |  |     |  |     |  |\n");
        printf("    |  |  4  |  |  5  |  |  6  |  |  -  |  |\n");
        printf("    |  |_____|  |_____|  |_____|  |_____|  |\n");
        printf("    |   _____    _____    _____    _____   |\n");
        printf("    |  |     |  |     |  |     |  |     |  |\n");
        printf("    |  |  1  |  |  2  |  |  3  |  |  +  |  |\n");
        printf("    |  |_____|  |_____|  |_____|  |_____|  |\n");
        printf("    |   ______________    _____    _____   |\n");
        printf("    |  |              |  |     |  |     |  |\n");
        printf("    |  |      0       |  |  ,  |  |  =  |  |\n");
        printf("    |  |______________|  |_____|  |_____|  |\n");
        printf("    |                                      |\n");
        printf("    |______________________________________|\n\n");
        break;
    case 12:
        printf("     ______________________________________\n");
        printf("    |                                      |\n");
        printf("    |     Simple Calculator                |\n");
        printf("    |                                      |\n");
        printf("    |     ctg(%.2f)                       |\n",n1);
        printf("    |     Result: %-10.2f               |\n",Ctg(n1));
        printf("    |                                      |\n");
        printf("    |   _____    _____    _____    _____   |\n");
        printf("    |  |     |  |     |  |     |  |     |  |\n");
        printf("    |  | AC  |  | +/- |  |  %%  |  |  /  |  |\n");
        printf("    |  |_____|  |_____|  |_____|  |_____|  |\n");
        printf("    |   _____    _____    _____    _____   |\n");
        printf("    |  |     |  |     |  |     |  |     |  |\n");
        printf("    |  |  7  |  |  8  |  |  9  |  |  X  |  |\n");
        printf("    |  |_____|  |_____|  |_____|  |_____|  |\n");
        printf("    |   _____    _____    _____    _____   |\n");
        printf("    |  |     |  |     |  |     |  |     |  |\n");
        printf("    |  |  4  |  |  5  |  |  6  |  |  -  |  |\n");
        printf("    |  |_____|  |_____|  |_____|  |_____|  |\n");
        printf("    |   _____    _____    _____    _____   |\n");
        printf("    |  |     |  |     |  |     |  |     |  |\n");
        printf("    |  |  1  |  |  2  |  |  3  |  |  +  |  |\n");
        printf("    |  |_____|  |_____|  |_____|  |_____|  |\n");
        printf("    |   ______________    _____    _____   |\n");
        printf("    |  |              |  |     |  |     |  |\n");
        printf("    |  |      0       |  |  ,  |  |  =  |  |\n");
        printf("    |  |______________|  |_____|  |_____|  |\n");
        printf("    |                                      |\n");
        printf("    |______________________________________|\n\n");
        break;
    case 13:
        printf("     ______________________________________\n");
        printf("    |                                      |\n");
        printf("    |     Simple Calculator                |\n");
        printf("    |                                      |\n");
        printf("    |     GCD: %d  %d                      |\n",(int)n1,(int)n2);
        printf("    |     Result: %-10d               |\n",gcd((int)n1, (int)n2));
        printf("    |                                      |\n");
        printf("    |   _____    _____    _____    _____   |\n");
        printf("    |  |     |  |     |  |     |  |     |  |\n");
        printf("    |  | AC  |  | +/- |  |  %%  |  |  /  |  |\n");
        printf("    |  |_____|  |_____|  |_____|  |_____|  |\n");
        printf("    |   _____    _____    _____    _____   |\n");
        printf("    |  |     |  |     |  |     |  |     |  |\n");
        printf("    |  |  7  |  |  8  |  |  9  |  |  X  |  |\n");
        printf("    |  |_____|  |_____|  |_____|  |_____|  |\n");
        printf("    |   _____    _____    _____    _____   |\n");
        printf("    |  |     |  |     |  |     |  |     |  |\n");
        printf("    |  |  4  |  |  5  |  |  6  |  |  -  |  |\n");
        printf("    |  |_____|  |_____|  |_____|  |_____|  |\n");
        printf("    |   _____    _____    _____    _____   |\n");
        printf("    |  |     |  |     |  |     |  |     |  |\n");
        printf("    |  |  1  |  |  2  |  |  3  |  |  +  |  |\n");
        printf("    |  |_____|  |_____|  |_____|  |_____|  |\n");
        printf("    |   ______________    _____    _____   |\n");
        printf("    |  |              |  |     |  |     |  |\n");
        printf("    |  |      0       |  |  ,  |  |  =  |  |\n");
        printf("    |  |______________|  |_____|  |_____|  |\n");
        printf("    |                                      |\n");
        printf("    |______________________________________|\n\n");
        break;
    case 14:
        printf("\n");
    case 15:
        printf("\n");
    default:
        printf("    Invalid choice.\n");
        break;
    }
}

