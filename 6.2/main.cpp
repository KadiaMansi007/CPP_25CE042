#include "Manager.h"

int main()
{
    int choice;
    Manager m[50]; // static storage
    int count = 0;

    while (true)
    {
        cout << "\n===== Manager System =====\n";
        cout << "1. Add Manager\n";
        cout << "2. Display All\n";
        cout << "3. Search by ID\n";
        cout << "4. Exit\n";

        cout << "Enter choice: ";
        cin >> choice;

        if (choice == 1)
        {
            string name, dept;
            int age, id;

            cout << "Enter Name: ";
            cin >> name;

            cout << "Enter Age: ";
            cin >> age;

            cout << "Enter Employee ID: ";
            cin >> id;

            cout << "Enter Department: ";
            cin >> dept;

            m[count] = Manager(name, age, id, dept);
            count++;
        }

        else if (choice == 2)
        {
            if (count == 0)
            {
                cout << "No records!\n";
                continue;
            }

            for (int i = 0; i < count; i++)
                m[i].displayManager();
        }

        else if (choice == 3)
        {
            int searchID;
            cout << "Enter ID to search: ";
            cin >> searchID;

            bool found = false;

            for (int i = 0; i < count; i++)
            {
                if (m[i].getID() == searchID)
                {
                    m[i].displayManager();
                    found = true;
                }
            }

            if (!found)
                cout << "Manager not found!\n";
        }

        else if (choice == 4)
        {
            break;
        }

        else
        {
            cout << "Invalid choice!\n";
        }
    }

    return 0;
}
