#include "Student.h"

// ============================================
// STUDENT (ABSTRACT BASE CLASS) IMPLEMENTATION
// ============================================

Student::Student() {
    studentName = "Unknown";
    studentID = "N/A";
    marks = 0.0;
    grade = "Not Computed";
}

Student::Student(string name, string id, double m) {
    studentName = name;
    studentID = id;
    marks = (m >= 0 && m <= 100) ? m : 0;
    grade = "Not Computed";
}

Student::~Student() {}

void Student::inputStudentDetails() {
    cout << "Enter Student Name: ";
    cin.ignore();
    getline(cin, studentName);

    cout << "Enter Student ID: ";
    getline(cin, studentID);

    do {
        cout << "Enter Marks (0-100): ";
        cin >> marks;
        if (marks < 0 || marks > 100) {
            cout << "Error: Marks must be between 0 and 100! Try again." << endl;
        }
    } while (marks < 0 || marks > 100);
}

void Student::displayDetails() const {
    cout << "\n========================================" << endl;
    cout << "           STUDENT DETAILS" << endl;
    cout << "========================================" << endl;
    cout << "Student Name    : " << studentName << endl;
    cout << "Student ID      : " << studentID << endl;
    cout << "Marks           : " << fixed << setprecision(2) << marks << endl;
    cout << "Grade           : " << grade << endl;
}

// ============================================
// UNDERGRADUATE CLASS IMPLEMENTATION
// ============================================

Undergraduate::Undergraduate() : Student() {
    yearOfStudy = 1;
    department = "Unknown";
}

Undergraduate::Undergraduate(string name, string id, double m, int year, string dept)
    : Student(name, id, m) {
    yearOfStudy = (year >= 1 && year <= 4) ? year : 1;
    department = dept;
}

Undergraduate::~Undergraduate() {}

void Undergraduate::computeGrade() {
    // Undergraduate grading standards (more lenient)
    if (marks >= 85) {
        grade = "A+ (Outstanding)";
    } else if (marks >= 75) {
        grade = "A (Excellent)";
    } else if (marks >= 65) {
        grade = "B+ (Very Good)";
    } else if (marks >= 55) {
        grade = "B (Good)";
    } else if (marks >= 45) {
        grade = "C (Average)";
    } else if (marks >= 35) {
        grade = "D (Pass)";
    } else {
        grade = "F (Fail)";
    }
}

void Undergraduate::inputStudentDetails() {
    cout << "\n--- UNDERGRADUATE STUDENT ---" << endl;
    Student::inputStudentDetails();

    do {
        cout << "Enter Year of Study (1-4): ";
        cin >> yearOfStudy;
        if (yearOfStudy < 1 || yearOfStudy > 4) {
            cout << "Error: Year must be between 1 and 4! Try again." << endl;
        }
    } while (yearOfStudy < 1 || yearOfStudy > 4);

    cout << "Enter Department: ";
    cin.ignore();
    getline(cin, department);
}

void Undergraduate::displayDetails() const {
    cout << "\n========================================" << endl;
    cout << "      UNDERGRADUATE STUDENT DETAILS" << endl;
    cout << "========================================" << endl;
    cout << "Student Name    : " << studentName << endl;
    cout << "Student ID      : " << studentID << endl;
    cout << "Department      : " << department << endl;
    cout << "Year of Study   : " << yearOfStudy << endl;
    cout << "Marks           : " << fixed << setprecision(2) << marks << endl;
    cout << "Grade           : " << grade << endl;
    cout << "========================================" << endl;
}

// ============================================
// POSTGRADUATE CLASS IMPLEMENTATION
// ============================================

Postgraduate::Postgraduate() : Student() {
    specialization = "Unknown";
    thesisTopic = "Not Assigned";
    hasPublications = false;
}

Postgraduate::Postgraduate(string name, string id, double m, string spec, string thesis, bool pubs)
    : Student(name, id, m) {
    specialization = spec;
    thesisTopic = thesis;
    hasPublications = pubs;
}

Postgraduate::~Postgraduate() {}

void Postgraduate::computeGrade() {
    // Postgraduate grading standards (more rigorous)
    if (marks >= 90) {
        grade = "A+ (Exceptional)";
    } else if (marks >= 80) {
        grade = "A (Excellent)";
    } else if (marks >= 70) {
        grade = "B+ (Very Good)";
    } else if (marks >= 65) {
        grade = "B (Good)";
    } else if (marks >= 60) {
        grade = "B- (Satisfactory)";
    } else if (marks >= 55) {
        grade = "C (Pass)";
    } else {
        grade = "F (Fail - Need Improvement)";
    }

    // Additional bonus for publications
    if (hasPublications && marks >= 60) {
        grade += " [With Publications]";
    }
}

void Postgraduate::inputStudentDetails() {
    cout << "\n--- POSTGRADUATE STUDENT ---" << endl;
    Student::inputStudentDetails();

    cout << "Enter Specialization: ";
    cin.ignore();
    getline(cin, specialization);

    cout << "Enter Thesis Topic: ";
    getline(cin, thesisTopic);

    int pubChoice;
    cout << "Has Publications? (1 for Yes, 0 for No): ";
    cin >> pubChoice;
    hasPublications = (pubChoice == 1);
}

void Postgraduate::displayDetails() const {
    cout << "\n========================================" << endl;
    cout << "      POSTGRADUATE STUDENT DETAILS" << endl;
    cout << "========================================" << endl;
    cout << "Student Name    : " << studentName << endl;
    cout << "Student ID      : " << studentID << endl;
    cout << "Specialization  : " << specialization << endl;
    cout << "Thesis Topic    : " << thesisTopic << endl;
    cout << "Publications    : " << (hasPublications ? "Yes" : "No") << endl;
    cout << "Marks           : " << fixed << setprecision(2) << marks << endl;
    cout << "Grade           : " << grade << endl;
    cout << "========================================" << endl;
}
