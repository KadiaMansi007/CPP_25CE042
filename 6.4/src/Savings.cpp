#include "Savings.h"

Savings::Savings(int a, float b, float r)
    : Account(a, b)
{
    interestRate = r;
}

void Savings::withdraw(float amt)
{
    if (amt > balance)
    {
        cout << "Insufficient balance!\n";
        return;
    }

    balance -= amt;
    history[hCount++] = "Withdrawn: " + to_string((int)amt);
}

void Savings::display()
{
    cout << "\n[Savings Account]\n";
    cout << "Account No: " << accNo << endl;
    cout << "Balance: " << balance << endl;
    cout << "Interest Rate: " << interestRate << "%" << endl;
}
