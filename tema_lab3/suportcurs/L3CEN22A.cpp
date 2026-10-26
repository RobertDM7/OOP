// L3CEN22A.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Complex.h"

using namespace std;
int main()
{
    cout << "Hello World!\n";
    Complex c1(5,2);
    //c1.real = 1;
    //c1.imag = 3;
    c1.SetReal(16);
    cout << "Real:" << c1.GetReal() << endl;
    c1.Print();
    cout << "Count: " << c1.GetCount() << endl;
    Complex c2(4, 3);
    c2.Print();
    cout << "Count: " << Complex::GetCount() << endl;

    Complex sum = c1.Add(c2);
    sum.Print();
    cout << "Count: " << Complex::GetCount() << endl;

}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
