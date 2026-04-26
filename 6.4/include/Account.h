#ifndef ACCOUNT_H
#define ACCOUNT_H

#include <iostream>
using namespace std;

class Account
{
protected:
    int accNo;
    float balance;

    string history[100];
    int hCount;

public:
    Account(int = 0, float = 0);
    ~Account();

    void deposit(float);
    virtual void withdraw(float) = 0;

    void showHistory();
    void undoLast();

    virtual void display() = 0;
};

#endif
