#include "Inventory.h"

int main()
{
    Inventory obj;
    int choice;
    string filename = "inventory.txt";

    while (true)
    {
        cout << "\n===== Inventory System =====\n";
        cout << "1. Add Item\n";
        cout << "2. View All Items\n";
        cout << "3. Search Item\n";
        cout << "4. Exit\n";

        cout << "Enter choice: ";
        cin >> choice;

        if (choice == 1)
        {
            obj.addItem(filename);
        }
        else if (choice == 2)
        {
            obj.viewItems(filename);
        }
        else if (choice == 3)
        {
            obj.searchItem(filename);
        }
        else if (choice == 4)
        {
            break;
        }
        else
        {
            cout << "Invalid choice!\n";
        }
    }

    return 0;
}
