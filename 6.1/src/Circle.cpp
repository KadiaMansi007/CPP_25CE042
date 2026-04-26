#include "Circle.h"

int Circle::totalCircles = 0;

// Constructor
Circle::Circle()
{
    totalCircles++; // count objects
}

float Circle::calculateArea()
{
    return 3.14 * radius * radius;
}

int Circle::getTotalCircles()
{
    return totalCircles;
}
