#include <stdio.h>
#include <stdlib.h>
#include "Temperature.h"

int main()
{

    double temp;
    int c;
    displayMenu();

    printf("    Enter your choice: ");
    scanf("%d", &c);

    while(1)
    {
        if(c==1)
        {
            printf("    Enter temperature (Celsius) : ");
            scanf("%lf", &temp);
            printf("    %.2f Celsius = %.2f Fahrenheit\n\n", temp, celsiusToFahrenheit(temp));
        }
        else if(c==2)
        {
            printf("    Enter temperature (Fahrenheit): ");
            scanf("%lf", &temp);
            printf("    %.2f Fahrenheit = %.2f Celsius\n\n", temp, fahrenheitToCelsius(temp));
        }
        else if(c==3)
        {
            printf("    Enter temperature (Celsius): ");
            scanf("%lf", &temp);
            printf("    %.2f Celsius = %.2f Kelvin\n\n", temp, celsiusToKelvin(temp));
        }
        else if(c==4)
        {
            printf("    Enter temperature (Kelvin): ");
            scanf("%lf", &temp);
            printf("    %.2f Kelvin = %.2f Celsius\n\n", temp, kelvinToCelsius(temp));
        }
        else if(c==5)
        {
            printf("    Enter temperature (Fahrenheit): ");
            scanf("%lf", &temp);
            printf("    %.2f Fahrenheit = %.2f Kelvin\n\n", temp, fahrenheitToKelvin(temp));
        }
        else if(c==6)
        {
            printf("    Enter temperature (Kelvin): ");
            scanf("%lf", &temp);
            printf("    %.2f Kelvin = %.2f Fahrenheit\n\n", temp, kelvinToFahrenheit(temp));
        }
        else if(c==7)
        {
            printf("    Exit\n\n");
            break;
        }
        else
        {
            printf("    Invalid Choice\n\n");
        }
        printf("    Enter your choice: ");
        scanf("%d", &c);
    }
    return 0;
}
