#include "Division.h"

// Take input + validation
void Division::getInput()
{
    cout << "Enter numerator: ";
    cin >> a;

    if (cin.fail())
    {
        throw "Invalid input for numerator (must be integer)!";
    }

    cout << "Enter denominator: ";
    cin >> b;

    if (cin.fail())
    {
        throw "Invalid input for denominator (must be integer)!";
    }

    if (b == 0)
    {
        throw "Division by zero is not allowed!";
    }
}

// Perform division
void Division::calculate()
{
    float result = (float)a / b;
    cout << "Result: " << result << endl;
}
