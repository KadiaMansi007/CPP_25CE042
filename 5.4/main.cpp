#include "Student.h"

int main()
{
    Student s[50];
    int count = 0;
    int choice;

    while (true)
    {
        cout << "\n===== Student Display System =====\n";
        cout << "1. Add Student\n";
        cout << "2. Display All\n";
        cout << "3. Exit\n";

        cout << "Enter choice: ";
        cin >> choice;

        if (choice == 1)
        {
            s[count].input();
            count++;
        }
        else if (choice == 2)
        {
            if (count == 0)
            {
                cout << "No records!\n";
                continue;
            }

            s[0].displayHeader();

            for (int i = 0; i < count; i++)
            {
                s[i].display();
            }

            cout << setfill('-') << setw(50) << "-" << endl;
        }
        else if (choice == 3)
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
