#include "convertoaretemperatura.h"
#include <stdio.h>
int main()
{
    double gradeCelsius, gradeFahrenheit;
    scanf("%lf",&gradeCelsius);

    printf("Grade Celsius initial: %.5lf\n", gradeCelsius);

    gradeFahrenheit = CelsiustoFahrenheit(gradeCelsius);

    printf("Grade Fahrenheit: %.5lf\n", gradeFahrenheit);

    gradeCelsius = FahrenheitoCelsius(gradeFahrenheit);

    printf("Grade Celsius: %.5lf\n", gradeCelsius);

    return 0;
}