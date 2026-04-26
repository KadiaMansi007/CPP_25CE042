#ifndef CALCULATOR_H
#define CALCULATOR_H

#include <iostream>
using namespace std;

class Calculator
{
private:
    float results[100];
    int count;

public:
    Calculator();

    int add(int, int);
    float add(float, float);
    float add(int, float);

    void storeResult(float);
    void displayResults();
};

#endif
