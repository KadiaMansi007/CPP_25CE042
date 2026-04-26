#ifndef MERGEARRAY_H
#define MERGEARRAY_H

#include <iostream>
using namespace std;

class MergeArray
{
private:
    int *arr1, *arr2, *merged;
    int n, m;

public:
    MergeArray(int, int);
    ~MergeArray();

    void inputArrays();
    void mergeArrays();
    void displayMerged();
};

#endif
