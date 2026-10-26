#pragma once

class Rectangle
{
    public:

    Rectangle(int l = 0, int w = 0);
    void compPerimeter(Rectangle a);
    void compArea(Rectangle a);

    private:

    int getPerimeter();
    int getArea();
    int l;
    int w;
    int perimeter = -1, area = -1;
};