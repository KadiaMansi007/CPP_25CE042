#include "Account.h"

Account::Account(int a, float b)
{
    accNo = a;
    balance = b;
    hCount = 0;
}

Account::~Account()
{
    cout << "Account closed (ID: " << accNo << ")\n";
}

void Account::deposit(float amt)
{
    balance += amt;

    history[hCount++] = "Deposited: " + to_string((int)amt);
}

void Account::showHistory()
{
    cout << "\nTransaction History:\n";
    for (int i = 0; i < hCount; i++)
        cout << history[i] << endl;
}

void Account::undoLast()
{
    if (hCount == 0)
    {
        cout << "No transactions to undo!\n";
        return;
    }

    string last = history[hCount - 1];

    if (last.find("Deposited") != string::npos)
    {
        float amt = stoi(last.substr(11));
        balance -= amt;
    }
    else if (last.find("Withdrawn") != string::npos)
    {
        float amt = stoi(last.substr(11));
        balance += amt;
    }

    hCount--;
    cout << "Last transaction undone!\n";
}
