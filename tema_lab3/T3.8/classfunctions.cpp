#include "classes.h"
#include <iostream>
#include <string>
#include <math.h>
using namespace std;

Eq :: Eq(double a, double b, double c)
{
    this -> a = a;
    this -> b = b;
    this -> c = c;
}

void Eq :: solveEq(int rez)
{
    double delta = this -> b * this -> b - 4 * this -> a * (this -> c - rez);
    if (delta < 0)
        cout << "No real result\n";
    else if (delta == 0)
    {
        double x;
        x = -this -> b / (2 * this -> a);
        cout << "Only one real result: x = " << x << "\n";
    }
    else
    {
        double x1, x2;
        x1 = (-this -> b + sqrt(delta)) / (2 * this -> a);
        x2 = (-this -> b - sqrt(delta)) / (2 * this -> a);
        cout << "There are 2 real results: x1 = " << x1 << ", x2: " << x2 << "\n";
    }
}
