#ifndef SUPERDIGIT_H
#define SUPERDIGIT_H

#include <iostream>
#include <string>
using namespace std;

class SuperDigit
{
private:
    int recursiveDigitSum(long long);

public:
    int calculateSuperDigit(string, int);
};

#endif
