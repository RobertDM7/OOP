#include "classes.h"
#include <iostream>

using namespace std;

Rectangle::Rectangle(int length, int width)
{
    this -> l = length;
    this -> w = width;
}

int Rectangle::getPerimeter()
{
    return this -> l * 2 + this -> w * 2; 
}

int Rectangle::getArea()
{
    return this -> l * this -> w;
}

void Rectangle::compPerimeter(Rectangle B)
{
    int perimeterA;
    if (this -> perimeter == -1)
        perimeterA = this -> getPerimeter();
        else
         perimeterA = this -> perimeter;
    int perimeterB = B.getPerimeter();

    if (perimeterA > perimeterB)
        cout << ">\n";
    else if (perimeterA < perimeterB)
        {
            cout << "<\n";
        }
    else 
        cout << "=\n";
}

void Rectangle::compArea(Rectangle B)
{
    int areaA;
    if (this -> area == -1)
        areaA = this -> getArea();
        else
         areaA = this -> area;

    int areaB = B.getArea();

    if (areaA > areaB)
        cout << ">\n";
    else if (areaA < areaB)
        {
            cout << "<\n";
        }
    else 
        cout << "=\n";
}
