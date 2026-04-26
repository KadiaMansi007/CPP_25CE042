#ifndef CURRENT_H
#define CURRENT_H

#include "Account.h"

class Current : public Account
{
private:
    float overdraft;

public:
    Current(int = 0, float = 0, float = 0);

    void withdraw(float);
    void display();
};

#endif
