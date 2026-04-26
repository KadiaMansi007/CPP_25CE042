#ifndef ACCOUNT_H
#define ACCOUNT_H

#include <iostream>
#include <string>
using namespace std;

class Account
{
private:
    int accNo;
    string name;
    float balance;

    static int totalAccounts; // static member

public:
    Account();

    void createAccount();
    void displayAccount();
    void deposit();
    void withdraw();
    void transfer(Account&);

    int getAccNo();

    static int getTotalAccounts(); // static function
};

#endif
