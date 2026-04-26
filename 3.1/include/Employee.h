#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include <iostream>
#include <string>
using namespace std;

class Employee
{
private:
    int empID;
    string name;
    float basicSalary;
    float bonus;

    inline float calculateTotalSalary()
    {
        return basicSalary + bonus;
    }

public:
    Employee();
    Employee(int, string, float, float);

    void inputEmployee();
    void displayEmployee();

    int getEmpID();
};

#endif
