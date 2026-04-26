#ifndef SAVINGS_H
#define SAVINGS_H

#include "Account.h"

class Savings : public Account
{
private:
    float interestRate;

public:
    Savings(int = 0, float = 0, float = 0);

    void withdraw(float);
    void display();
};

#endif
