#include "DynamicArray.h"

int main()
{
    DynamicArray obj;
    int choice, value, pos;

    while (true)
    {
        cout << "\n===== Dynamic Array System =====\n";
        cout << "1. Insert Element\n";
        cout << "2. Delete Element\n";
        cout << "3. Display Array\n";
        cout << "4. Exit\n";

        cout << "Enter your choice: ";
        cin >> choice;

        if (choice == 1)
        {
            cout << "Enter value: ";
            cin >> value;
            obj.insertElement(value);
        }
        else if (choice == 2)
        {
            cout << "Enter position to delete: ";
            cin >> pos;
            obj.deleteElement(pos);
        }
        else if (choice == 3)
        {
            obj.display();
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
