#include "BankAccount.h"

string logArr[100];
int logIndex = 0;

// helper function for logging (simulates stack unwinding)
void log(string msg)
{
    logArr[logIndex++] = msg;
}

void performTransaction(BankAccount &acc)
{
    log("Entered performTransaction()");

    float amt;
    int choice;

    cout << "\n1. Deposit\n2. Withdraw\nEnter choice: ";
    cin >> choice;

    log("User selected operation");

    cout << "Enter amount: ";
    cin >> amt;

    log("Amount entered");

    if (choice == 1)
    {
        acc.deposit(amt);
        log("Deposit successful");
    }
    else if (choice == 2)
    {
        acc.withdraw(amt);
        log("Withdraw successful");
    }
    else
    {
        throw "Invalid operation selected!";
    }

    log("Exiting performTransaction()");
}

int main()
{
    BankAccount acc(1000); // initial balance

    cout << "===== Banking System with Exception Handling =====\n";

    try
    {
        log("Program started");

        performTransaction(acc);

        log("Transaction completed successfully");
    }
    catch (const char* msg)
    {
        cout << "Exception: " << msg << endl;
        log("Exception caught in main()");
        log("Stack unwinding occurred");
    }

    cout << "\n===== Transaction Log (Stack Unwinding) =====\n";
    for (int i = 0; i < logIndex; i++)
    {
        cout << logArr[i] << endl;
    }

    cout << "\nFinal Balance: " << acc.getBalance() << endl;

    return 0;
}
