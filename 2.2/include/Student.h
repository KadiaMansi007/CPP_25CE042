#ifndef STUDENT_H
#define STUDENT_H

#include <iostream>
#include <string>
using namespace std;

class Student
{
private:
    int rollNo;
    string name;
    float marks1, marks2, marks3;

public:
    Student();
    Student(int, string, float, float, float);

    void inputStudent();   // changed
    void displayStudent();
    float calculateAverage();

    int getRollNo();
};

#endif
