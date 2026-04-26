#ifndef CAR_H
#define CAR_H

#include "Fuel.h"
#include "Brand.h"

class Car : public Fuel, public Brand
{
private:
    int carID;

public:
    Car(string = "", string = "", int = 0);
    void displayCar();
    int getID();
};

#endif
