#include "classes.h"
#include <iostream>

using namespace std;

int main()
{
    Rectangle R1(6, 5);
    Rectangle R2(15, 1);

    R1.compPerimeter(R2);
    R1.compArea(R2);
    return 0;
}