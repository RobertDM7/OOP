#include "Complex.h"
#include <iostream>
using namespace std;

int Complex::count = 0;

Complex::Complex(double real, double imag)
{
	this->real = real;
	this->imag = imag;
	this->values = new int[10];
	this->count++;
}

Complex::~Complex()
{
	//delete stuff
	if (this->values != NULL)
	{
		delete[] this->values;
		this->values = NULL;
	}
	this->count--;
}

void Complex::Print()
{
	cout << real << "+i*" << imag << endl;
}

double Complex::GetReal()
{
	return real;
}

void Complex::SetReal(double real)
{
	this->real = real;
}

Complex Complex::Add(const Complex &c) const
{
	//c.real = 4; // not possible because parameter is const
	//this->real = 3; // not possible because method is const
	return Complex(this->	real + c.real, this->imag + c.imag);
}

int Complex::GetCount()
{
	return Complex::count;
}