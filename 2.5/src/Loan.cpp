#include "Loan.h"
#include <cmath>

// Constructor
Loan::Loan()
{
    loanID = 0;
    name = "";
    amount = 0;
    rate = 0;
    months = 0;
}

// Parameterized constructor
Loan::Loan(int id, string n, float amt, float r, int m)
{
    loanID = id;
    name = n;
    amount = amt;
    rate = r;
    months = m;
}

// Input
void Loan::inputLoan()
{
    cout << "\nEnter Loan ID: ";
    cin >> loanID;
    cin.ignore();

    cout << "Enter Applicant Name: ";
    getline(cin, name);

    cout << "Enter Loan Amount: ";
    cin >> amount;

    cout << "Enter Annual Interest Rate (%): ";
    cin >> rate;

    cout << "Enter Tenure (months): ";
    cin >> months;
}

// 🔒 Private EMI calculation
float Loan::calculateEMI()
{
    float r = rate / (12 * 100);

    if (r == 0)
        return amount / months;

    return (amount * r * pow(1 + r, months)) /
           (pow(1 + r, months) - 1);
}

// Public wrapper
void Loan::showEMI()
{
    cout << "Monthly EMI: " << calculateEMI() << endl;
}

// Display
void Loan::displayLoan()
{
    cout << "\nLoan ID: " << loanID;
    cout << "\nName: " << name;
    cout << "\nAmount: " << amount;
    cout << "\nInterest Rate: " << rate;
    cout << "\nTenure: " << months << "\n";
}

// Getter
int Loan::getLoanID()
{
    return loanID;
}
