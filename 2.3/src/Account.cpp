#include "Account.h"

// Constructor
Account::Account()
{
    accID = 0;
    name = "";
    balance = 0;
}

// Create Account
void Account::createAccount()
{
    cout << "\nEnter Account ID: ";
    cin >> accID;
    cin.ignore();

    cout << "Enter Customer Name: ";
    getline(cin, name);

    cout << "Enter Initial Balance: ";
    cin >> balance;

    if (balance < 0)
    {
        balance = 0;
        cout << "Negative balance not allowed. Set to 0.\n";
    }

    cout << "Account created successfully!\n";
}

// Deposit
void Account::deposit()
{
    float amount;
    cout << "Enter amount to deposit: ";
    cin >> amount;

    if (amount > 0)
    {
        balance += amount;
        cout << "Deposit successful!\n";
    }
    else
    {
        cout << "Invalid amount!\n";
    }
}

// Withdraw
void Account::withdraw()
{
    float amount;
    cout << "Enter amount to withdraw: ";
    cin >> amount;

    if (amount <= 0)
    {
        cout << "Invalid amount!\n";
    }
    else if (amount > balance)
    {
        cout << "Insufficient balance! Withdrawal denied.\n";
    }
    else
    {
        balance -= amount;
        cout << "Withdrawal successful!\n";
    }
}

// Display
void Account::display()
{
    cout << "\nAccount ID: " << accID;
    cout << "\nName: " << name;
    cout << "\nBalance: " << balance << "\n";
}

// Getter
int Account::getAccID()
{
    return accID;
}
