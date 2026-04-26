#include "Calculator.h"

// Constructor
Calculator::Calculator()
{
    count = 0;
}

// Function Overloading
int Calculator::add(int a, int b)
{
    return a + b;
}

float Calculator::add(float a, float b)
{
    return a + b;
}

float Calculator::add(int a, float b)
{
    return a + b;
}

// Store result
void Calculator::storeResult(float res)
{
    results[count++] = res;
}

// Display all results
void Calculator::displayResults()
{
    if (count == 0)
    {
        cout << "No results stored!\n";
        return;
    }

    cout << "\nStored Results:\n";
    for (int i = 0; i < count; i++)
    {
        cout << i + 1 << ". " << results[i] << endl;
    }
}
