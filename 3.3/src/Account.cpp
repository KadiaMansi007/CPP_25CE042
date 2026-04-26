#include "Account.h"

// Initialize static variable
int Account::totalAccounts = 0;

// Constructor
Account::Account()
{
    accNo = 0;
    name = "";
    balance = 0;
}

// Create account
void Account::createAccount()
{
    cout << "\nEnter Account Number: ";
    cin >> accNo;
    cin.ignore();

    cout << "Enter Name: ";
    getline(cin, name);

    cout << "Enter Initial Balance: ";
    cin >> balance;

    if (balance < 0)
    {
        balance = 0;
        cout << "Negative balance not allowed. Set to 0.\n";
    }

    totalAccounts++;
}

// Deposit
void Account::deposit()
{
    float amt;
    cout << "Enter amount to deposit: ";
    cin >> amt;

    if (amt > 0)
    {
        balance += amt;
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
    float amt;
    cout << "Enter amount to withdraw: ";
    cin >> amt;

    if (amt <= 0)
    {
        cout << "Invalid amount!\n";
    }
    else if (amt > balance)
    {
        cout << "Insufficient balance!\n";
    }
    else
    {
        balance -= amt;
        cout << "Withdrawal successful!\n";
    }
}

// Transfer
void Account::transfer(Account &receiver)
{
    float amt;
    cout << "Enter amount to transfer: ";
    cin >> amt;

    if (amt <= 0)
    {
        cout << "Invalid amount!\n";
    }
    else if (amt > balance)
    {
        cout << "Insufficient balance!\n";
    }
    else
    {
        balance -= amt;
        receiver.balance += amt;
        cout << "Transfer successful!\n";
    }
}

// Display
void Account::displayAccount()
{
    cout << "\nAccount No: " << accNo;
    cout << "\nName: " << name;
    cout << "\nBalance: " << balance << "\n";
}

// Getter
int Account::getAccNo()
{
    return accNo;
}

// Static function
int Account::getTotalAccounts()
{
    return totalAccounts;
}
