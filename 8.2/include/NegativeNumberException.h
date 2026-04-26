#ifndef SQRT_H
#define SQRT_H

#include <iostream>
using namespace std;

class NegativeNumberException
{
public:
    void message();
};

class SqrtCalc
{
    float num;

public:
    void getInput();
    void calculate();
};

#endif
