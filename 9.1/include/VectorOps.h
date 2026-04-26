#ifndef VECTOROPS_H
#define VECTOROPS_H

#include <iostream>
#include <vector>
using namespace std;

class VectorOps
{
    vector<int> v;

public:
    void inputData();
    void showVector();

    void reverseUsingSTL();
    void reverseUsingIterators();
};

#endif
