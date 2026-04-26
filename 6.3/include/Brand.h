#ifndef BRAND_H
#define BRAND_H

#include <iostream>
using namespace std;

class Brand
{
protected:
    string brandName;

public:
    Brand(string = "");
    void displayBrand();
};

#endif
