#include "NegativeNumberException.h"

#include <cmath>

// ---------------- Exception Message ----------------
void NegativeNumberException::message()
{
    cout << "Error: Negative number entered! Square root not possible.\n";
}

// ---------------- Input ----------------
void SqrtCalc::getInput()
{
    cout << "Enter a number: ";
    cin >> num;

    if (cin.fail())
    {
        throw "Invalid input! Please enter a numeric value.";
    }

    if (num < 0)
    {
        throw NegativeNumberException();
    }
}

// ---------------- Calculation ----------------
void SqrtCalc::calculate()
{
    float result = sqrt(num);
    cout << "Square root = " << result << endl;
}
