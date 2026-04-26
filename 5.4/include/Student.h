#ifndef STUDENT_H
#define STUDENT_H

#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

class Student
{
private:
    int rollNo;
    string name;
    float marks;
    float fees;

public:
    void input();
    void displayHeader();
    void display();
};

ostream& currency(ostream&); // user-defined manipulator

#endif
