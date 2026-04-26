#ifndef SHAPE_H
#define SHAPE_H

#include <iostream>
using namespace std;

class Shape
{
protected:
    float radius;

public:
    void setRadius(float);
    float getRadius();
};

#endif
