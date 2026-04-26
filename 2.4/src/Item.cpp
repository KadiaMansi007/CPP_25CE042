#include "Item.h"

// Default constructor
Item::Item()
{
    itemID = 0;
    name = "";
    price = 0;
    quantity = 0;
}

// Parameterized constructor
Item::Item(int id, string n, float p, int q)
{
    itemID = id;
    name = n;
    price = p;
    quantity = q;
}

// Input item (user-based)
void Item::inputItem()
{
    cout << "\nEnter Item ID: ";
    cin >> itemID;
    cin.ignore();

    cout << "Enter Item Name: ";
    getline(cin, name);

    cout << "Enter Price: ";
    cin >> price;

    cout << "Enter Quantity: ";
    cin >> quantity;
}

// Add stock
void Item::addStock()
{
    int qty;
    cout << "Enter quantity to add: ";
    cin >> qty;

    if (qty > 0)
    {
        quantity += qty;
        cout << "Stock updated successfully!\n";
    }
    else
    {
        cout << "Invalid quantity!\n";
    }
}

// Sell item
void Item::sellItem()
{
    int qty;
    cout << "Enter quantity to sell: ";
    cin >> qty;

    if (qty <= 0)
    {
        cout << "Invalid quantity!\n";
    }
    else if (qty > quantity)
    {
        cout << "Not enough stock available!\n";
    }
    else
    {
        quantity -= qty;
        cout << "Item sold successfully!\n";
    }
}

// Display item
void Item::displayItem()
{
    cout << "\nItem ID: " << itemID;
    cout << "\nName: " << name;
    cout << "\nPrice: " << price;
    cout << "\nQuantity: " << quantity << "\n";
}

// Getter
int Item::getItemID()
{
    return itemID;
}
