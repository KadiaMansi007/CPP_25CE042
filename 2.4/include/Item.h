#ifndef ITEM_H
#define ITEM_H

#include <iostream>
#include <string>
using namespace std;

class Item
{
private:
    int itemID;
    string name;
    float price;
    int quantity;

public:
    Item(); // default constructor
    Item(int, string, float, int); // parameterized constructor

    void inputItem();
    void addStock();
    void sellItem();
    void displayItem();

    int getItemID();
};

#endif
