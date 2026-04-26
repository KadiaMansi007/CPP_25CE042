#include "Wallet.h"

Wallet::Wallet()
{
    walletID = 0;
    userName = "";
    balance = 0;
}

// Create wallet
void Wallet::Create_wallet()
{
    cout << "\nEnter details ...\n";
    cout << "Enter Wallet ID : ";
    cin >> walletID;
    cout << "User Name: ";
    cin >> userName;
    cout << "Initial Balance: ";
    cin >> balance;
}

// Getter for ID
int Wallet::getID()
{
    return walletID;
}

// Load money
void Wallet::loadMoney(double amount)
{
    if (amount > 0)
    {
        balance += amount;
        cout << "Amount loaded successfully.\n";
    }
    else
    {
        cout << "Invalid amount.\n";
    }
}

// Transfer money
void Wallet::transferMoney(Wallet &receiver, double amount)
{
    if (amount <= 0)
    {
        cout << "Invalid transfer amount.\n";
        return;
    }

    if (balance >= amount)
    {
        balance -= amount;
        receiver.balance += amount;
        cout << "Transfer successful.\n";
    }
    else
    {
        cout << "Error: Insufficient balance.\n";
    }
}

// Display details
void Wallet::displayDetails()
{
    cout << "\nWallet ID: " << walletID << endl;
    cout << "User Name: " << userName << endl;
    cout << "Balance: " << balance << endl;
}
