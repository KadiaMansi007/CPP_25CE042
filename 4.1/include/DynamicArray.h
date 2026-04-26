#ifndef DYNAMICARRAY_H
#define DYNAMICARRAY_H

#include <iostream>
using namespace std;

class DynamicArray
{
private:
    int* arr;
    int size;

public:
    DynamicArray();
    ~DynamicArray();

    void insertElement(int);
    void deleteElement(int);
    void display();
};

#endif
