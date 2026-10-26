#pragma once

class ComplexNumber
{
    public:
    int getReal() const;
    int getImag() const;
    ComplexNumber(int real = 0, int imag = 0);
    static ComplexNumber sumComplex(const ComplexNumber &a, const ComplexNumber &b);
    static ComplexNumber productComplex (const ComplexNumber &a, const ComplexNumber &b);
    private:
    int real;
    int imag;
};