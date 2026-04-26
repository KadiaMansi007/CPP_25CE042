#ifndef CIRCLE_H
#define CIRCLE_H

#include "Shape.h"

class Circle : public Shape
{
private:
    static int totalCircles; // 🔥 static data

public:
    Circle();

    float calculateArea();
    static int getTotalCircles();
};

#endif
