#include "Employee.h"

// Default constructor
Employee::Employee()
{
    empID = 0;
    name = "Default";
    basicSalary = 0;
    bonus = 500; // ✅ default bonus
}

// Parameterized constructor
Employee::Employee(int id, string n, float basic, float b)
{
    empID = id;
    name = n;
    basicSalary = basic;
    bonus = b;
}

// Input
void Employee::inputEmployee()
{
    cout << "\nEnter Employee ID: ";
    cin >> empID;
    cin.ignore();

    cout << "Enter Employee Name: ";
    getline(cin, name);

    cout << "Enter Basic Salary: ";
    cin >> basicSalary;

    cout << "Enter Bonus (Enter 0 for default 500): ";
    cin >> bonus;

    if (bonus == 0)
    {
        bonus = 500;
    }
}

// Display
void Employee::displayEmployee()
{
    cout << "\nEmployee ID: " << empID;
    cout << "\nName: " << name;
    cout << "\nBasic Salary: " << basicSalary;
    cout << "\nBonus: " << bonus;
    cout << "\nTotal Salary: " << calculateTotalSalary() << "\n";
}

// Getter
int Employee::getEmpID()
{
    return empID;
}
