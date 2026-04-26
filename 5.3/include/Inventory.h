#ifndef INVENTORY_H
#define INVENTORY_H

#include <iostream>
#include <fstream>
#include <string>
using namespace std;

class Inventory
{
private:
    string name;
    int quantity;
    float price;

public:
    void addItem(string);
    void viewItems(string);
    void searchItem(string);
};

#endif
