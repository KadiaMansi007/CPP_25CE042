#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include "Person.h"

class Employee : public Person
{
protected:
    int empID;

public:
    Employee(string = "", int = 0, int = 0);
    void displayEmployee();
    int getID();
};

#endif
