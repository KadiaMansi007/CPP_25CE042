#include "Manager.h"

Manager::Manager(string n, int a, int id, string dept)
    : Employee(n, a, id)
{
    department = dept;
}

void Manager::displayManager()
{
    displayEmployee();
    cout << "Department: " << department << endl;
    cout << "--------------------------\n";
}
