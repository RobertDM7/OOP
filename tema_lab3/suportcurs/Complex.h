#pragma once

class Complex
{
public:
	//Complex(); //default constructor
	Complex(double real = 0, double imag = 0); // general constructor
	//Complex(int x); // conversion constructor
	//Complex(const Complex &c); // copy constructor should be implemented to properly copy values
	~Complex();//destructor
	void Print();
	double GetReal();//getter
	void SetReal(double real); //setter
	Complex Add(const Complex &c) const;
	static int GetCount(); // static method
private:
	static int count; //number of Complex objects
	double real;
	double imag;
	int* values;
};
