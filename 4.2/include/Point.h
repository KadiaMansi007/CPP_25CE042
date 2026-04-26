#ifndef POINT_H
#define POINT_H

#include <iostream>
using namespace std;

class Point
{
private:
    int x, y;

public:
    Point();
    Point(int, int);

    Point& move(int, int); // chainable
    void display();

    void updateByPointer(Point*); // pass-by-reference using pointer
};

#endif
