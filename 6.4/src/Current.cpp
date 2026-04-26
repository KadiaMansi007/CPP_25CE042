#include "Current.h"

Current::Current(int a, float b, float o)
    : Account(a, b)
{
    overdraft = o;
}

void Current::withdraw(float amt)
{
    if (amt > balance + overdraft)
    {
        cout << "Overdraft limit exceeded!\n";
        return;
    }

    balance -= amt;
    history[hCount++] = "Withdrawn: " + to_string((int)amt);
}

void Current::display()
{
    cout << "\n[Current Account]\n";
    cout << "Account No: " << accNo << endl;
    cout << "Balance: " << balance << endl;
    cout << "Overdraft Limit: " << overdraft << endl;
}
