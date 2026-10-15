#include <stdio.h>

#define DEBUG

void Debug(char* mesaj) {
#ifdef DEBUG
    printf("DEBUG: %s\n", mesaj);
#endif
}

int main()
{
    double gradeCelsius;
    scanf("%lf", &gradeCelsius);

    Debug("Afisam cate grade Celsius avem");
    
    printf("%.5lf\n", gradeCelsius);

    Debug("Am ajuns la finalul programului");
    return 0;
}