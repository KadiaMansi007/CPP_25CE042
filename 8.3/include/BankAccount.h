#ifndef BANKACCOUNT_H
#define BANKACCOUNT_H

#include <iostream>
using namespace std;

class BankAccount
{
    float balance;

public:
    BankAccount(float b = 0);

    void deposit(float amount);
    void withdraw(float amount);

    float getBalance();
};

#endif
