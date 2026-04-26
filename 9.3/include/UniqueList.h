#ifndef UNIQUELIST_H
#define UNIQUELIST_H

#include <iostream>
#include <set>
#include <vector>
using namespace std;

class UniqueList
{
    set<int> s;

public:
    void inputData();
    void displaySet();
    vector<int> convertToVector();
};

#endif
