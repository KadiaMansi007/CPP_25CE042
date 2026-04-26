#include "Employee.h"

Employee::Employee(string n, int a, int id)
    : Person(n, a)
{
    empID = id;
}

void Employee::displayEmployee()
{
    displayPerson();
    cout << "Employee ID: " << empID << endl;
}

int Employee::getID()
{
    return empID;
}
