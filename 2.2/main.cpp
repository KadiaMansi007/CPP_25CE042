#include "Student.h"

int main()
{
    Student s[100];
    int count = 0;
    int choice, roll;

    do
    {
        cout << "\n===== Student Academic Record System =====\n";
        cout << "1. Add Student (User Input)\n";
        cout << "2. Add Student (Default Data)\n";
        cout << "3. Display All Students\n";
        cout << "4. Search Student by Roll No\n";
        cout << "0. Exit\n";

        cout << "Enter your choice: ";
        cin >> choice;

        if (choice == 1)
        {
            s[count].inputStudent();  // updated
            count++;
        }

        if (choice == 2)
        {
            cout << "Enter Roll No for default student: ";
            cin >> roll;

            s[count] = Student(roll, "Test Student", 75, 80, 85);
            count++;
            cout << "Default student added!\n";
        }

        if (choice == 3)
        {
            for (int i = 0; i < count; i++)
            {
                s[i].displayStudent();
            }
        }

        if (choice == 4)
        {
            cout << "Enter Roll No to search: ";
            cin >> roll;

            bool found = false;

            for (int i = 0; i < count; i++)
            {
                if (s[i].getRollNo() == roll)
                {
                    s[i].displayStudent();
                    found = true;
                }
            }

            if (!found)
            {
                cout << "Student not found!\n";
            }
        }

    } while (choice != 0);

    return 0;
}
