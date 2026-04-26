#include "Account.h"

int main()
{
    Account acc[100];
    int count = 0;
    int choice, id;

    while (true)
    {
        cout << "\n===== Digital Savings Account System =====\n";
        cout << "1. Create Account\n";
        cout << "2. Deposit Money\n";
        cout << "3. Withdraw Money\n";
        cout << "4. Display All Accounts\n";
        cout << "5. Search Account by ID\n";
        cout << "6. Exit\n";

        cout << "Enter your choice: ";
        cin >> choice;

        if (choice == 1)
        {
            acc[count].createAccount();
            count++;
        }

        if (choice == 2)
        {
            cout << "Enter Account ID: ";
            cin >> id;

            for (int i = 0; i < count; i++)
            {
                if (acc[i].getAccID() == id)
                {
                    acc[i].deposit();
                }
            }
        }

        if (choice == 3)
        {
            cout << "Enter Account ID: ";
            cin >> id;

            for (int i = 0; i < count; i++)
            {
                if (acc[i].getAccID() == id)
                {
                    acc[i].withdraw();
                }
            }
        }

        if (choice == 4)
        {
            for (int i = 0; i < count; i++)
            {
                acc[i].display();
            }
        }

        if (choice == 5)
        {
            cout << "Enter Account ID: ";
            cin >> id;

            bool found = false;

            for (int i = 0; i < count; i++)
            {
                if (acc[i].getAccID() == id)
                {
                    acc[i].display();
                    found = true;
                }
            }

            if (!found)
            {
                cout << "Account not found!\n";
            }
        }

        if (choice == 6)
        {
            break;
        }
    }

    return 0;
}
