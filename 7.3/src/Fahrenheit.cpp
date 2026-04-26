#include "Fahrenheit.h"

// ---------------- Celsius ----------------
Celsius::Celsius(float t)
{
    temp = t;
}

float Celsius::getTemp()
{
    return temp;
}

// C → F
Celsius::operator Fahrenheit()
{
    return Fahrenheit((temp * 9 / 5) + 32);
}

bool Celsius::operator==(Celsius c)
{
    return temp == c.temp;
}

// ---------------- Fahrenheit ----------------
Fahrenheit::Fahrenheit(float t)
{
    temp = t;
}

float Fahrenheit::getTemp()
{
    return temp;
}

// F → C
Fahrenheit::operator Celsius()
{
    return Celsius((temp - 32) * 5 / 9);
}

bool Fahrenheit::operator==(Fahrenheit f)
{
    return temp == f.temp;
}
