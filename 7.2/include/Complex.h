#ifndef COMPLEX_H
#define COMPLEX_H

#include <iostream>
using namespace std;

class Complex
{
private:
    float real;
    float imag;

public:
    Complex(float = 0, float = 0);

    Complex operator+(Complex);
    Complex operator-(Complex);

    void input();
    void display();
};

#endif
