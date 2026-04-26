#include "Complex.h"

int main()
{
    Complex c1, c2, result;
    int choice;

    while (true)
    {
        cout << "\n===== Complex Number System =====\n";
        cout << "1. Add Complex Numbers\n";
        cout << "2. Subtract Complex Numbers\n";
        cout << "3. Exit\n";

        cout << "Enter choice: ";
        cin >> choice;

        if (choice == 1)
        {
            cout << "\nEnter First Complex Number:\n";
            c1.input();

            cout << "Enter Second Complex Number:\n";
            c2.input();

            result = c1 + c2;

            cout << "Result: ";
            result.display();
        }

        else if (choice == 2)
        {
            cout << "\nEnter First Complex Number:\n";
            c1.input();

            cout << "Enter Second Complex Number:\n";
            c2.input();

            result = c1 - c2;

            cout << "Result: ";
            result.display();
        }

        else if (choice == 3)
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
