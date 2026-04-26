#include "Car.h"

int main()
{
    int choice;
    Car c[50]; // static storage
    int count = 0;

    while (true)
    {
        cout << "\n===== Car Management System =====\n";
        cout << "1. Add Car\n";
        cout << "2. Display All Cars\n";
        cout << "3. Search by ID\n";
        cout << "4. Exit\n";

        cout << "Enter choice: ";
        cin >> choice;

        if (choice == 1)
        {
            string fuel, brand;
            int id;

            cout << "Enter Car ID: ";
            cin >> id;

            cout << "Enter Brand: ";
            cin >> brand;

            cout << "Enter Fuel Type: ";
            cin >> fuel;

            c[count] = Car(fuel, brand, id);
            count++;
        }

        else if (choice == 2)
        {
            if (count == 0)
            {
                cout << "No cars available!\n";
                continue;
            }

            for (int i = 0; i < count; i++)
                c[i].displayCar();
        }

        else if (choice == 3)
        {
            int searchID;
            cout << "Enter ID to search: ";
            cin >> searchID;

            bool found = false;

            for (int i = 0; i < count; i++)
            {
                if (c[i].getID() == searchID)
                {
                    c[i].displayCar();
                    found = true;
                }
            }

            if (!found)
                cout << "Car not found!\n";
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
