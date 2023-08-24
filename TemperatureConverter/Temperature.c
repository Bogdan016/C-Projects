#include <stdio.h>
#include <stdlib.h>
#include "Temperature.h"

void displayMenu()
{
    printf("     __________________________\n");
    printf("    |  Temperature Converter   |\n");
    printf("    |__________________________|\n");
    printf("    | 1. Celsius to Fahrenheit |\n");
    printf("    | 2. Fahrenheit to Celsius |\n");
    printf("    | 3. Celsius to Kelvin     |\n");
    printf("    | 4. Kelvin to Celsius     |\n");
    printf("    | 5. Fahrenheit to Kelvin  |\n");
    printf("    | 6. Kelvin to Fahrenheit  |\n");
    printf("    | 7. Exit                  |\n");
    printf("    |__________________________|\n\n");
}

double celsiusToFahrenheit(double C)
{
    return (C * 9.0 / 5.0) + 32.0;
}

double fahrenheitToCelsius(double F)
{
    return (F - 32.0) * 5.0 / 9.0;
}

double celsiusToKelvin(double C)
{
    return C + 273.15;
}

double kelvinToCelsius(double K)
{
    return K - 273.15;
}

double fahrenheitToKelvin(double F)
{
    return (F + 459.67) * 5.0 / 9.0;
}

double kelvinToFahrenheit(double K)
{
    return K * 9.0 / 5.0 - 459.67;
}
