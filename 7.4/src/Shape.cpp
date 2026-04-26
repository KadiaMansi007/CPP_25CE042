#include "Shape.h"

// ============================================
// SHAPE CLASS IMPLEMENTATION
// ============================================

Shape::Shape() {
    shapeName = "Unknown";
}

Shape::Shape(string name) {
    shapeName = name;
}

Shape::~Shape() {}

void Shape::displayDetails() const {
    cout << "\nShape Type: " << shapeName << endl;
    cout << "Area: " << fixed << setprecision(2) << Area() << " sq units" << endl;
}

string Shape::getShapeName() const {
    return shapeName;
}

// ============================================
// RECTANGLE CLASS IMPLEMENTATION
// ============================================

Rectangle::Rectangle() : Shape("Rectangle") {
    length = 0;
    width = 0;
}

Rectangle::Rectangle(double l, double w) : Shape("Rectangle") {
    length = (l > 0) ? l : 0;
    width = (w > 0) ? w : 0;
}

Rectangle::~Rectangle() {}

double Rectangle::Area() const {
    return length * width;
}

void Rectangle::displayDetails() const {
    cout << "\n========================================" << endl;
    cout << "         RECTANGLE DETAILS" << endl;
    cout << "========================================" << endl;
    cout << "Length          : " << length << " units" << endl;
    cout << "Width           : " << width << " units" << endl;
    cout << "Area            : " << fixed << setprecision(2) << Area() << " sq units" << endl;
    cout << "========================================" << endl;
}

void Rectangle::inputDimensions() {
    do {
        cout << "Enter length (positive): ";
        cin >> length;
        if (length <= 0) {
            cout << "Error: Length must be positive! Try again." << endl;
        }
    } while (length <= 0);

    do {
        cout << "Enter width (positive): ";
        cin >> width;
        if (width <= 0) {
            cout << "Error: Width must be positive! Try again." << endl;
        }
    } while (width <= 0);
}

// ============================================
// CIRCLE CLASS IMPLEMENTATION
// ============================================

Circle::Circle() : Shape("Circle") {
    radius = 0;
}

Circle::Circle(double r) : Shape("Circle") {
    radius = (r > 0) ? r : 0;
}

Circle::~Circle() {}

double Circle::Area() const {
    return M_PI * radius * radius;
}

void Circle::displayDetails() const {
    cout << "\n========================================" << endl;
    cout << "           CIRCLE DETAILS" << endl;
    cout << "========================================" << endl;
    cout << "Radius          : " << radius << " units" << endl;
    cout << "Area            : " << fixed << setprecision(2) << Area() << " sq units" << endl;
    cout << "========================================" << endl;
}

void Circle::inputDimensions() {
    do {
        cout << "Enter radius (positive): ";
        cin >> radius;
        if (radius <= 0) {
            cout << "Error: Radius must be positive! Try again." << endl;
        }
    } while (radius <= 0);
}
