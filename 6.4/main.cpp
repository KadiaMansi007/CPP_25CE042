#include "Savings.h"
#include "Current.h"

int main()
{
    int choice;

    Account* acc = NULL;

    while (true)
    {
        cout << "\n===== Banking System =====\n";
        cout << "1. Create Savings Account\n";
        cout << "2. Create Current Account\n";
        cout << "3. Deposit\n";
        cout << "4. Withdraw\n";
        cout << "5. Display\n";
        cout << "6. Show History\n";
        cout << "7. Undo Last Transaction\n";
        cout << "8. Exit\n";

        cout << "Enter choice: ";
        cin >> choice;

        if (choice == 1)
        {
            int id;
            float bal, rate;

            cout << "Enter ID, Balance, Interest Rate: ";
            cin >> id >> bal >> rate;

            acc = new Savings(id, bal, rate);
        }

        else if (choice == 2)
        {
            int id;
            float bal, od;

            cout << "Enter ID, Balance, Overdraft: ";
            cin >> id >> bal >> od;

            acc = new Current(id, bal, od);
        }

        else if (choice == 3 && acc)
        {
            float amt;
            cout << "Enter amount: ";
            cin >> amt;
            acc->deposit(amt);
        }

        else if (choice == 4 && acc)
        {
            float amt;
            cout << "Enter amount: ";
            cin >> amt;
            acc->withdraw(amt);
        }

        else if (choice == 5 && acc)
        {
            acc->display();
        }

        else if (choice == 6 && acc)
        {
            acc->showHistory();
        }

        else if (choice == 7 && acc)
        {
            acc->undoLast();
        }

        else if (choice == 8)
        {
            delete acc;
            break;
        }

        else
        {
            cout << "Invalid choice or create account first!\n";
        }
    }

    return 0;
}
