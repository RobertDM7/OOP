#include <iostream>
#include <iomanip>
#include "convertoaretemperatura.h"

using namespace std;

int main()
{
    double gradeCelsius, gradeFahrenheit;
    cin >> gradeCelsius;

    cout << "grade Celsius initial: " << fixed << setprecision(5) << gradeCelsius << "\n";

    gradeFahrenheit = CelsiustoFahrenheit(gradeCelsius);

    cout << "grade Fahrenheit: " << setprecision(5) << gradeFahrenheit << "\n";

    gradeCelsius = FahrenheitoCelsius(gradeFahrenheit);

    cout << "grade Celsius: " << setprecision(5) << gradeCelsius << "\n";

    return 0;
}