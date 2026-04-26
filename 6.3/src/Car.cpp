#include "Car.h"

Car::Car(string f, string b, int id)
    : Fuel(f), Brand(b)
{
    carID = id;
}

void Car::displayCar()
{
    cout << "\nCar ID: " << carID << endl;
    displayBrand();
    displayFuel();
    cout << "----------------------\n";
}

int Car::getID()
{
    return carID;
}
