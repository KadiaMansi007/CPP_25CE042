#ifndef RECTANGLE_H
#define RECTANGLE_H

#include <iostream>
using namespace std;

class Rectangle
{
private:
    int rectNo;
    float length;
    float width;

public:
    Rectangle();

    void setRectangle(int);
    void updateDimensions();
    float calculateArea();
    float calculatePerimeter();
    void display();

    int getRectNo();
};

#endif
