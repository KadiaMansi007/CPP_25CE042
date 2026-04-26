#include "Person.h"

Person::Person(string n, int a)
{
    name = n;
    age = a;
}

void Person::displayPerson()
{
    cout << "Name: " << name << ", Age: " << age << endl;
}
