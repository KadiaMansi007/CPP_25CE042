#ifndef TEMPERATURE_H
#define TEMPERATURE_H

#include <iostream>
using namespace std;

class Fahrenheit; // forward declaration

class Celsius
{
    float temp;

public:
    Celsius(float t = 0);

    float getTemp();

    // Convert Celsius → Fahrenheit
    operator Fahrenheit();

    // comparison
    bool operator==(Celsius c);
};

class Fahrenheit
{
    float temp;

public:
    Fahrenheit(float t = 0);

    float getTemp();

    // Convert Fahrenheit → Celsius
    operator Celsius();

    // comparison
    bool operator==(Fahrenheit f);
};

#endif
