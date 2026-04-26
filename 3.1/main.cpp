#include "Employee.h"

int main()
{
    Employee* emp = new Employee[100];
    int count = 0;
    int choice, id;

    while (true)
    {
        cout << "\n===== Payroll System =====\n";
        cout << "1. Add Employee\n";
        cout << "2. Display All Employees\n";
        cout << "3. Search Employee by ID\n";
        cout << "4. Exit\n";

        cout << "Enter your choice: ";
        cin >> choice;

        if (choice == 1)
        {
            emp[count].inputEmployee();
            count++;
        }

        if (choice == 2)
        {
            for (int i = 0; i < count; i++)
            {
                emp[i].displayEmployee();
            }
        }

        if (choice == 3)
        {
            cout << "Enter Employee ID: ";
            cin >> id;

            bool found = false;

            for (int i = 0; i < count; i++)
            {
                if (emp[i].getEmpID() == id)
                {
                    emp[i].displayEmployee();
                    found = true;
                }
            }

            if (!found)
            {
                cout << "Employee not found!\n";
            }
        }

        if (choice == 4)
        {
            break;
        }
    }

    delete[] emp;
    return 0;
}
