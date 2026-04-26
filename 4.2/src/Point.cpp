#include "Point.h"

// Default constructor
Point::Point()
{
    x = 0;
    y = 0;
}

// Parameterized constructor
Point::Point(int a, int b)
{
    x = a;
    y = b;
}

// Chainable move using this pointer
Point& Point::move(int dx, int dy)
{
    x += dx;
    y += dy;
    return *this; // 🔥 key for chaining
}

// Display
void Point::display()
{
    cout << "(" << x << ", " << y << ")" << endl;
}

// Pass-by-reference using pointer
void Point::updateByPointer(Point* p)
{
    int dx, dy;
    cout << "Enter change in x and y: ";
    cin >> dx >> dy;

    p->x += dx;
    p->y += dy;

    cout << "Point updated using pointer!\n";
}
