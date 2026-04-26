#ifndef FUEL_H
#define FUEL_H

#include <iostream>
using namespace std;

class Fuel
{
protected:
    string fuelType;

public:
    Fuel(string = "");
    void displayFuel();
};

#endif
