#include <iostream>

using namespace std;

#define DEBUG

void Debug(string mesaj) {
#ifdef DEBUG
    cout << "DEBUG: " << mesaj << "\n";
#endif
}

int main()
{
    double gradeCelsius;
    cin >> gradeCelsius;

    Debug("Afisam cate grade Celsius avem");
    
    cout << gradeCelsius << "\n";

    Debug("Am ajuns la finalul programului");
    return 0;
}