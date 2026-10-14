#include <iostream>

using namespace std;

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
    OS();

    return 0;
}