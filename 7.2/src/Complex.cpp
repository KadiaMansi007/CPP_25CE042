#include "Complex.h"

// Constructor
Complex::Complex(float r, float i)
{
    real = r;
    imag = i;
}

// Input
void Complex::input()
{
    cout << "Enter real part: ";
    cin >> real;

    cout << "Enter imaginary part: ";
    cin >> imag;
}

// Operator +
Complex Complex::operator+(Complex c)
{
    return Complex(real + c.real, imag + c.imag);
}

// Operator -
Complex Complex::operator-(Complex c)
{
    return Complex(real - c.real, imag - c.imag);
}

// Display
void Complex::display()
{
    cout << real;

    if (imag >= 0)
        cout << " + " << imag << "i";
    else
        cout << " - " << -imag << "i";

    cout << endl;
}
