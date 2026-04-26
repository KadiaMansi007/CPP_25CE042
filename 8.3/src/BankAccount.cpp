#include "BankAccount.h"

// constructor
BankAccount::BankAccount(float b)
{
    balance = b;
}

float BankAccount::getBalance()
{
    return balance;
}

// deposit
void BankAccount::deposit(float amount)
{
    if (amount <= 0)
    {
        throw "Invalid deposit amount!";
    }

    balance += amount;
    cout << "Deposited: " << amount << endl;
}

// withdraw
void BankAccount::withdraw(float amount)
{
    if (amount <= 0)
    {
        throw "Invalid withdrawal amount!";
    }

    if (amount > balance)
    {
        throw "Insufficient balance!";
    }

    balance -= amount;
    cout << "Withdrawn: " << amount << endl;
}
