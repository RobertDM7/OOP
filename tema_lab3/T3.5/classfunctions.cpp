#include "classes.h"
#include <iostream>

using namespace std;

int ComplexNumber::getReal() const
{
    return this -> real;
}

int ComplexNumber::getImag() const
{
    return this -> imag;
}

ComplexNumber::ComplexNumber(int real, int imag)
{
    this -> real = real;
    this -> imag = imag;
}

ComplexNumber ComplexNumber::sumComplex(const ComplexNumber &c1, const ComplexNumber &c2)
{
    return ComplexNumber(c1.getReal() + c2.getReal(), c1.getImag() + c2.getImag());
}

ComplexNumber ComplexNumber::productComplex(const ComplexNumber &a, const ComplexNumber &b)
{
    return ComplexNumber(b.getReal() * a.getReal(), a.getImag() * b.getImag());
}
