#include "Rectangle.h"

// Constructor
Rectangle::Rectangle()
{
    rectNo = 0;
    length = 0;
    width = 0;
}

// Set rectangle details
void Rectangle::setRectangle(int no)
{
    rectNo = no;

    cout << "\nEnter length: ";
    cin >> length;

    cout << "Enter width: ";
    cin >> width;
}

// Update dimensions
void Rectangle::updateDimensions()
{
    cout << "\nUpdate length: ";
    cin >> length;

    cout << "Update width: ";
    cin >> width;

    cout << "Dimensions updated successfully!\n";
}

// Area
float Rectangle::calculateArea()
{
    return length * width;
}

// Perimeter
float Rectangle::calculatePerimeter()
{
    return 2 * (length + width);
}

// Display
void Rectangle::display()
{
    cout << "\nRectangle No: " << rectNo;
    cout << "\nLength: " << length;
    cout << "\nWidth: " << width;
    cout << "\nArea: " << calculateArea();
    cout << "\nPerimeter: " << calculatePerimeter() << "\n";
}

// Getter
int Rectangle::getRectNo()
{
    return rectNo;
}
