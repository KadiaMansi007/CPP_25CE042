#include "Inventory.h"

// Add item
void Inventory::addItem(string filename)
{
    ofstream file(filename, ios::app); // append mode

    if (!file)
    {
        cout << "Error opening file!\n";
        return;
    }

    cout << "Enter item name: ";
    cin >> name;

    cout << "Enter quantity: ";
    cin >> quantity;

    cout << "Enter price: ";
    cin >> price;

    file << name << " " << quantity << " " << price << endl;

    file.close();
    cout << "Item added successfully!\n";
}

// View all items
void Inventory::viewItems(string filename)
{
    ifstream file(filename);

    if (!file)
    {
        cout << "No inventory file found!\n";
        return;
    }

    cout << "\n--- Inventory List ---\n";

    while (file >> name >> quantity >> price)
    {
        cout << "Name: " << name
             << ", Quantity: " << quantity
             << ", Price: " << price << endl;
    }

    file.close();
}

// Search item
void Inventory::searchItem(string filename)
{
    ifstream file(filename);

    if (!file)
    {
        cout << "File not found!\n";
        return;
    }

    string searchName;
    cout << "Enter item name to search: ";
    cin >> searchName;

    bool found = false;

    while (file >> name >> quantity >> price)
    {
        if (name == searchName)
        {
            cout << "\nItem Found!\n";
            cout << "Name: " << name
                 << ", Quantity: " << quantity
                 << ", Price: " << price << endl;

            found = true;
        }
    }

    if (!found)
    {
        cout << "Item not found!\n";
    }

    file.close();
}
