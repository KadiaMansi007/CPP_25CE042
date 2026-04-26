#include "Account.h"

int main()
{
    Account* acc = new Account[100];
    int count = 0;
    int choice, accNo, sender, receiver;

    while (true)
    {
        cout << "\n===== Enhanced Account System =====\n";
        cout << "1. Create Account\n";
        cout << "2. Deposit\n";
        cout << "3. Withdraw\n";
        cout << "4. Transfer Money\n";
        cout << "5. Display All Accounts\n";
        cout << "6. Search Account\n";
        cout << "7. Total Accounts\n";
        cout << "8. Exit\n";

        cout << "Enter choice: ";
        cin >> choice;

        if (choice == 1)
        {
            acc[count].createAccount();
            count++;
        }

        if (choice == 2)
        {
            cout << "Enter Account No: ";
            cin >> accNo;

            for (int i = 0; i < count; i++)
            {
                if (acc[i].getAccNo() == accNo)
                {
                    acc[i].deposit();
                }
            }
        }

        if (choice == 3)
        {
            cout << "Enter Account No: ";
            cin >> accNo;

            for (int i = 0; i < count; i++)
            {
                if (acc[i].getAccNo() == accNo)
                {
                    acc[i].withdraw();
                }
            }
        }

        if (choice == 4)
        {
            cout << "Enter Sender Account No: ";
            cin >> sender;

            cout << "Enter Receiver Account No: ";
            cin >> receiver;

            Account *s = nullptr, *r = nullptr;

            for (int i = 0; i < count; i++)
            {
                if (acc[i].getAccNo() == sender)
                    s = &acc[i];

                if (acc[i].getAccNo() == receiver)
                    r = &acc[i];
            }

            if (s != nullptr && r != nullptr)
            {
                s->transfer(*r);
            }
            else
            {
                cout << "Invalid account number!\n";
            }
        }

        if (choice == 5)
        {
            for (int i = 0; i < count; i++)
            {
                acc[i].displayAccount();
            }
        }

        if (choice == 6)
        {
            cout << "Enter Account No: ";
            cin >> accNo;

            bool found = false;

            for (int i = 0; i < count; i++)
            {
                if (acc[i].getAccNo() == accNo)
                {
                    acc[i].displayAccount();
                    found = true;
                }
            }

            if (!found)
            {
                cout << "Account not found!\n";
            }
        }

        if (choice == 7)
        {
            cout << "Total Accounts: " << Account::getTotalAccounts() << endl;
        }

        if (choice == 8)
        {
            break;
        }
    }

    delete[] acc;
    return 0;
}
