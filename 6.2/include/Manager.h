#ifndef MANAGER_H
#define MANAGER_H

#include "Employee.h"

class Manager : public Employee
{
private:
    string department;

public:
    Manager(string = "", int = 0, int = 0, string = "");
    void displayManager();
};

#endif
