#ifndef LOAN_H
#define LOAN_H

#include <iostream>
#include <string>
using namespace std;

class Loan
{
private:
    int loanID;
    string name;
    float amount;
    float rate;
    int months;

    float calculateEMI(); // 🔒 now private

public:
    Loan();
    Loan(int, string, float, float, int);

    void inputLoan();
    void displayLoan();
    void showEMI(); // public wrapper

    int getLoanID();
};

#endif
