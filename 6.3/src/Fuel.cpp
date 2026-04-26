#include "Fuel.h"

Fuel::Fuel(string f)
{
    fuelType = f;
}

void Fuel::displayFuel()
{
    cout << "Fuel Type: " << fuelType << endl;
}
