#include "Item.h"

int main()
{
    Item items[100];
    int count = 0;
    int choice, id;

    while (true)
    {
        cout << "\n===== Inventory Management System =====\n";
        cout << "1. Add Item\n";
        cout << "2. Increase Stock\n";
        cout << "3. Sell Item\n";
        cout << "4. Display All Items\n";
        cout << "5. Search Item by ID\n";
        cout << "6. Exit\n";

        cout << "Enter your choice: ";
        cin >> choice;

        if (choice == 1)
        {
            items[count].inputItem(); // only user input
            count++;
        }

        if (choice == 2)
        {
            cout << "Enter Item ID: ";
            cin >> id;

            for (int i = 0; i < count; i++)
            {
                if (items[i].getItemID() == id)
                {
                    items[i].addStock();
                }
            }
        }

        if (choice == 3)
        {
            cout << "Enter Item ID: ";
            cin >> id;

            for (int i = 0; i < count; i++)
            {
                if (items[i].getItemID() == id)
                {
                    items[i].sellItem();
                }
            }
        }

        if (choice == 4)
        {
            for (int i = 0; i < count; i++)
            {
                items[i].displayItem();
            }
        }

        if (choice == 5)
        {
            cout << "Enter Item ID: ";
            cin >> id;

            bool found = false;

            for (int i = 0; i < count; i++)
            {
                if (items[i].getItemID() == id)
                {
                    items[i].displayItem();
                    found = true;
                }
            }

            if (!found)
            {
                cout << "Item not found!\n";
            }
        }

        if (choice == 6)
        {
            break;
        }
    }

    return 0;
}
