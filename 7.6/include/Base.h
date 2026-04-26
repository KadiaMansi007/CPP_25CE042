#ifndef BASE_H
#define BASE_H

#include <iostream>
using namespace std;

class Base
{
public:
    Base();
    ~Base();               // NON-virtual destructor (for demo)

    virtual void show();
};

class Derived : public Base
{
    int* data;

public:
    Derived();
    ~Derived();            // will NOT be called properly without virtual base destructor

    void show();
};

#endif
