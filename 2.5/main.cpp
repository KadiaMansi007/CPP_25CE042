#include "Loan.h"

int main()
{
    Loan l[100];
    int count = 0;
    int choice, id;

    while (true)
    {
        cout << "\n===== Loan EMI Management System =====\n";
        cout << "1. Add Loan\n";
        cout << "2. Display All Loans\n";
        cout << "3. Show EMI by Loan ID\n";
        cout << "4. Search Loan by ID\n";
        cout << "5. Exit\n";

        cout << "Enter your choice: ";
        cin >> choice;

        if (choice == 1)
        {
            l[count].inputLoan();
            count++;
        }

        if (choice == 2)
        {
            for (int i = 0; i < count; i++)
            {
                l[i].displayLoan();
            }
        }

        if (choice == 3)
        {
            cout << "Enter Loan ID: ";
            cin >> id;

            bool found = false;

            for (int i = 0; i < count; i++)
            {
                if (l[i].getLoanID() == id)
                {
                    l[i].showEMI(); // uses private function internally
                    found = true;
                }
            }

            if (!found)
            {
                cout << "Loan not found!\n";
            }
        }

        if (choice == 4)
        {
            cout << "Enter Loan ID: ";
            cin >> id;

            bool found = false;

            for (int i = 0; i < count; i++)
            {
                if (l[i].getLoanID() == id)
                {
                    l[i].displayLoan();
                    found = true;
                }
            }

            if (!found)
            {
                cout << "Loan not found!\n";
            }
        }

        if (choice == 5)
        {
            break;
        }
    }

    return 0;
}
