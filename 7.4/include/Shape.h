#ifndef SHAPE_H
#define SHAPE_H

#include <iostream>
#include <string>
#include <cmath>
#include <iomanip>

using namespace std;

// Base class Shape
class Shape {
protected:
    string shapeName;

public:
    Shape();
    Shape(string name);
    virtual ~Shape();

    // Pure virtual function for area calculation
    virtual double Area() const = 0;

    virtual void displayDetails() const;

    string getShapeName() const;
};

// Derived class Rectangle
class Rectangle : public Shape {
private:
    double length;
    double width;

public:
    Rectangle();
    Rectangle(double l, double w);
    ~Rectangle();

    double Area() const override;
    void displayDetails() const override;
    void inputDimensions();
};

// Derived class Circle
class Circle : public Shape {
private:
    double radius;

public:
    Circle();
    Circle(double r);
    ~Circle();

    double Area() const override;
    void displayDetails() const override;
    void inputDimensions();
};

#endif
