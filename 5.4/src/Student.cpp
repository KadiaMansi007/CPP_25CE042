#include "Student.h"

// Input
void Student::input()
{
    cout << "Enter Roll No: ";
    cin >> rollNo;

    cout << "Enter Name: ";
    cin >> name;

    cout << "Enter Marks: ";
    cin >> marks;

    cout << "Enter Fees: ";
    cin >> fees;
}

// Header
void Student::displayHeader()
{
    cout << setfill('-') << setw(50) << "-" << endl;

    cout << setfill(' ')
         << setw(10) << "Roll"
         << setw(15) << "Name"
         << setw(10) << "Marks"
         << setw(15) << "Fees" << endl;

    cout << setfill('-') << setw(50) << "-" << endl;
}

// Display
void Student::display()
{
    cout << setfill(' ')
         << setw(10) << rollNo
         << setw(15) << name
         << setw(10) << fixed << setprecision(2) << marks
         << setw(10) << currency << fees << endl;
}

// User-defined manipulator
ostream& currency(ostream& out)
{
    out << "RS. ";
    return out;
}
