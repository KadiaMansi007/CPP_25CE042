#ifndef ACCOUNT_H
#define ACCOUNT_H

#include <iostream>
#include <string>
using namespace std;

class Account
{
private:
    int accID;
    string name;
    float balance;

public:
    Account();

    void createAccount();
    void deposit();
    void withdraw();
    void display();

    int getAccID();
};

#endif
