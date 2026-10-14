#include <iostream>
#include <iomanip>
#include "convertoaretemperatura.h"

#define USE_HEADER1 1
#define DEBUG

#if USE_HEADER1
    #include "header1.h"
#else
    #include "header2.h"
#endif

using namespace std;

void Debug(const char* mesaj) {
#ifdef DEBUG
    cout << "DEBUG: " << mesaj << "\n";
#endif
}


void OS() {
#ifdef _WIN32
    cout << "Hello Windows\n";
#endif
#ifdef __linux__
    cout << "Hello Linux\n";
#endif
#ifdef __APPLE__
    cout << "Hello macOS\n";
#endif
}

int main()
{
    double gradeCelsius, gradeFahrenheit;
    cin >> gradeCelsius;

    Debug("Afisam cate grade Celsius avem initial");
    
    cout << "grade Celsius initial: " << fixed << setprecision(5) << gradeCelsius << "\n";

    gradeFahrenheit = CelsiustoFahrenheit(gradeCelsius);

    Debug("Afisam cate grade Fahrenheit avem");

    cout << "grade Fahrenheit: " << setprecision(5) << gradeFahrenheit << "\n";

    gradeCelsius = FahrenheitoCelsius(gradeFahrenheit);

    Debug("Afisam cate grade Celsius avem la final");

    cout << "grade Celsius: " << setprecision(5) << gradeCelsius << "\n";

    f();

    OS();
}