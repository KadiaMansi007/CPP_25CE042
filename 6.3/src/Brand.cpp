#include "Brand.h"

Brand::Brand(string b)
{
    brandName = b;
}

void Brand::displayBrand()
{
    cout << "Brand: " << brandName << endl;
}
