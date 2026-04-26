#ifndef STUDENT_H
#define STUDENT_H

#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

// Abstract Base Class - Generic Grading Framework
class Student {
protected:
    string studentName;
    string studentID;
    double marks;
    string grade;

public:
    Student();
    Student(string name, string id, double m);
    virtual ~Student();

    // Pure virtual function - forces derived classes to implement
    virtual void computeGrade() = 0;

    virtual void inputStudentDetails();
    virtual void displayDetails() const;

    string getStudentName() const { return studentName; }
    string getStudentID() const { return studentID; }
    double getMarks() const { return marks; }
    string getGrade() const { return grade; }
};

// Derived Class - Undergraduate Student
class Undergraduate : public Student {
private:
    int yearOfStudy;
    string department;

public:
    Undergraduate();
    Undergraduate(string name, string id, double m, int year, string dept);
    ~Undergraduate();

    void computeGrade() override;
    void inputStudentDetails() override;
    void displayDetails() const override;
};

// Derived Class - Postgraduate Student
class Postgraduate : public Student {
private:
    string specialization;
    string thesisTopic;
    bool hasPublications;

public:
    Postgraduate();
    Postgraduate(string name, string id, double m, string spec, string thesis, bool pubs);
    ~Postgraduate();

    void computeGrade() override;
    void inputStudentDetails() override;
    void displayDetails() const override;
};

#endif
