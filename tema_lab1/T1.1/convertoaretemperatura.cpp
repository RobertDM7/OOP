#include "convertoaretemperatura.h"


double CelsiustoFahrenheit(double c)
{
    return (double)(32 + c * 1.8);
}

double FahrenheitoCelsius(double f)
{
    return (double)((f - 32) / 1.8);
}