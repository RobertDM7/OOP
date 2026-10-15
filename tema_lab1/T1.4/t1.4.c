#include <stdio.h>
void OS() {
#ifdef _WIN32
    printf("Hello Windows\n");
#endif
#ifdef __linux__
    printf("Hello Linux\n");
#endif
#ifdef __APPLE__
    printf("Hello macOS\n");
#endif
}

int main()
{
    OS();

    return 0;
}