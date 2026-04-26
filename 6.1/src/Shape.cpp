#include "Shape.h"

void Shape::setRadius(float r)
{
    if (r > 0)
        radius = r;
    else
        radius = 0;
}

float Shape::getRadius()
{
    return radius;
}
