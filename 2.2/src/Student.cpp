#include "Student.h"

// Default constructor
Student::Student()
{
    rollNo = 0;
    name = "Default";
    marks1 = marks2 = marks3 = 0;
}

// Parameterized constructor
Student::Student(int r, string n, float m1, float m2, float m3)
{
    rollNo = r;
    name = n;
    marks1 = m1;
    marks2 = m2;
    marks3 = m3;
}

// Input student (UPDATED)
void Student::inputStudent()
{
    cout << "\nEnter Roll No: ";
    cin >> rollNo;
    cin.ignore();

    cout << "Enter Name: ";
    getline(cin, name);

    cout << "Enter marks for 3 subjects:\n";
    cin >> marks1 >> marks2 >> marks3;
}

// Average
float Student::calculateAverage()
{
    return (marks1 + marks2 + marks3) / 3;
}

// Display
void Student::displayStudent()
{
    cout << "\nRoll No: " << rollNo;
    cout << "\nName: " << name;
    cout << "\nMarks: " << marks1 << ", " << marks2 << ", " << marks3;
    cout << "\nAverage: " << calculateAverage() << "\n";
}

// Getter
int Student::getRollNo()
{
    return rollNo;
}
