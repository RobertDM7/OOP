#include "classes.h"
#include <iostream>

using namespace std;

int main()
{
    ComplexNumber c1(3, 6);
    ComplexNumber c2(2, 5);

    ComplexNumber sum = ComplexNumber::sumComplex(c1, c2);
    cout << sum.getReal() << " + i * " << sum.getImag();
    cout << "\n";
    ComplexNumber product = ComplexNumber::productComplex(c1, c2);
    cout << product.getReal() << " + i * " << product.getImag();

    return 0;
}