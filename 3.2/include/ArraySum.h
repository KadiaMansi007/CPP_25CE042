#ifndef ARRAYSUM_H
#define ARRAYSUM_H

#include <iostream>
using namespace std;

class ArraySum
{
private:
    int* arr;
    int size;

    int recursiveSum(int);

public:
    ArraySum(int);
    ~ArraySum();

    void inputArray();
    int iterativeSum();
    int getRecursiveSum();
};

#endif
