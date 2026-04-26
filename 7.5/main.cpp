#include "Student.h"
#include <vector>

using namespace std;

const int MAX_STUDENTS = 100;

void displayMenu() {
    cout << "\n========================================" << endl;
    cout << "     ADVANCED GRADING SYSTEM" << endl;
    cout << "========================================" << endl;
    cout << "1. Add Undergraduate Student" << endl;
    cout << "2. Add Postgraduate Student" << endl;
    cout << "3. Display All Students" << endl;
    cout << "4. Compute Grades for All Students" << endl;
    cout << "5. Search Student by ID" << endl;
    cout << "6. Display Grade Statistics" << endl;
    cout << "7. Calculate Class Average" << endl;
    cout << "8. Exit" << endl;
    cout << "Enter your choice: ";
}

void displayGradeStatistics(vector<Student*>& students) {
    if (students.empty()) {
        cout << "\nNo students in the system!" << endl;
        return;
    }

    int ugCount = 0, pgCount = 0;
    int ugPass = 0, pgPass = 0;
    int ugFail = 0, pgFail = 0;
    int ugA = 0, pgA = 0;

    for (size_t i = 0; i < students.size(); i++) {
        Undergraduate* ug = dynamic_cast<Undergraduate*>(students[i]);
        Postgraduate* pg = dynamic_cast<Postgraduate*>(students[i]);

        if (ug != nullptr) {
            ugCount++;
            if (ug->getGrade().find("Fail") == string::npos) {
                ugPass++;
            } else {
                ugFail++;
            }
            if (ug->getGrade().find("A+") != string::npos || ug->getGrade().find("A ") != string::npos) {
                ugA++;
            }
        } else if (pg != nullptr) {
            pgCount++;
            if (pg->getGrade().find("Fail") == string::npos) {
                pgPass++;
            } else {
                pgFail++;
            }
            if (pg->getGrade().find("A+") != string::npos || pg->getGrade().find("A ") != string::npos) {
                pgA++;
            }
        }
    }

    cout << "\n========================================" << endl;
    cout << "        GRADE STATISTICS" << endl;
    cout << "========================================" << endl;
    cout << "\nUNDERGRADUATE STUDENTS:" << endl;
    cout << "  Total Students : " << ugCount << endl;
    cout << "  Passed         : " << ugPass << endl;
    cout << "  Failed         : " << ugFail << endl;
    cout << "  A Grade        : " << ugA << endl;
    cout << "  Pass Percentage: " << (ugCount > 0 ? (ugPass * 100.0 / ugCount) : 0) << "%" << endl;

    cout << "\nPOSTGRADUATE STUDENTS:" << endl;
    cout << "  Total Students : " << pgCount << endl;
    cout << "  Passed         : " << pgPass << endl;
    cout << "  Failed         : " << pgFail << endl;
    cout << "  A Grade        : " << pgA << endl;
    cout << "  Pass Percentage: " << (pgCount > 0 ? (pgPass * 100.0 / pgCount) : 0) << "%" << endl;
    cout << "========================================" << endl;
}

void calculateClassAverage(vector<Student*>& students) {
    if (students.empty()) {
        cout << "\nNo students in the system!" << endl;
        return;
    }

    double totalMarks = 0;
    int ugCount = 0, pgCount = 0;
    double ugTotal = 0, pgTotal = 0;

    for (size_t i = 0; i < students.size(); i++) {
        double marks = students[i]->getMarks();
        totalMarks += marks;

        if (dynamic_cast<Undergraduate*>(students[i]) != nullptr) {
            ugCount++;
            ugTotal += marks;
        } else if (dynamic_cast<Postgraduate*>(students[i]) != nullptr) {
            pgCount++;
            pgTotal += marks;
        }
    }

    cout << "\n========================================" << endl;
    cout << "         CLASS AVERAGE RESULTS" << endl;
    cout << "========================================" << endl;
    cout << "Overall Class Average : " << fixed << setprecision(2)
         << (totalMarks / students.size()) << endl;
    cout << "Undergraduate Average : " << fixed << setprecision(2)
         << (ugCount > 0 ? (ugTotal / ugCount) : 0) << endl;
    cout << "Postgraduate Average  : " << fixed << setprecision(2)
         << (pgCount > 0 ? (pgTotal / pgCount) : 0) << endl;
    cout << "========================================" << endl;
}

int main() {
    vector<Student*> students;
    int choice;


    do {
        displayMenu();
        cin >> choice;

        switch(choice)
        {
            case 1:
            {

                Undergraduate* ug = new Undergraduate();
                ug->inputStudentDetails();
                students.push_back(ug);
                cout << "\nUndergraduate student added successfully!" << endl;
                break;
            }

            case 2:
            {

                Postgraduate* pg = new Postgraduate();
                pg->inputStudentDetails();
                students.push_back(pg);
                cout << "\nPostgraduate student added successfully!" << endl;
                break;
            }

            case 3: {
                if (students.empty()) {
                    cout << "\nNo students in the system!" << endl;
                } else {
                    cout << "\n========== ALL STUDENTS ==========" << endl;
                    for (size_t i = 0; i < students.size(); i++) {
                        students[i]->displayDetails();
                    }
                }
                break;
            }

            case 4: {
                if (students.empty()) {
                    cout << "\nNo students in the system!" << endl;
                } else {
                    cout << "\n--- COMPUTING GRADES FOR ALL STUDENTS ---" << endl;
                    for (size_t i = 0; i < students.size(); i++) {
                        students[i]->computeGrade();
                    }
                    cout << "Grades computed successfully!" << endl;

                    // Display all students with computed grades
                    cout << "\n========== STUDENTS WITH COMPUTED GRADES ==========" << endl;
                    for (size_t i = 0; i < students.size(); i++) {
                        students[i]->displayDetails();
                    }
                }
                break;
            }

            case 5: {
                if (students.empty()) {
                    cout << "\nNo students in the system!" << endl;
                } else {
                    string searchID;
                    cout << "Enter Student ID to search: ";
                    cin >> searchID;

                    bool found = false;
                    for (size_t i = 0; i < students.size(); i++) {
                        if (students[i]->getStudentID() == searchID) {
                            students[i]->displayDetails();
                            found = true;
                            break;
                        }
                    }
                    if (!found) {
                        cout << "Student with ID " << searchID << " not found!" << endl;
                    }
                }
                break;
            }

            case 6: {
                displayGradeStatistics(students);
                break;
            }

            case 7: {
                calculateClassAverage(students);
                break;
            }

            case 8: {
                cout << "\nExiting system. Cleaning up memory..." << endl;
                for (size_t i = 0; i < students.size(); i++) {
                    delete students[i];
                }
                students.clear();
                cout << "Memory cleanup complete. Goodbye!" << endl;
                break;
            }

            default:
                cout << "\nInvalid choice! Please try again." << endl;
        }

    } while (choice != 8);

    return 0;
}
