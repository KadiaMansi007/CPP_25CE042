#include "Calculator.h"

int main()
{
    Calculator obj;
    int choice;

    while (true)
    {
        cout << "\n===== Calculator System =====\n";
        cout << "1. Add Integers\n";
        cout << "2. Add Floats\n";
        cout << "3. Add Int + Float\n";
        cout << "4. Display Results\n";
        cout << "5. Exit\n";

        cout << "Enter choice: ";
        cin >> choice;

        if (choice == 1)
        {
            int a, b;
            cout << "Enter two integers: ";
            cin >> a >> b;

            int res = obj.add(a, b);
            obj.storeResult(res);

            cout << "Result: " << res << endl;
        }

        else if (choice == 2)
        {
            float a, b;
            cout << "Enter two floats: ";
            cin >> a >> b;

            float res = obj.add(a, b);
            obj.storeResult(res);

            cout << "Result: " << res << endl;
        }

        else if (choice == 3)
        {
            int a;
            float b;

            cout << "Enter integer and float: ";
            cin >> a >> b;

            float res = obj.add(a, b);
            obj.storeResult(res);

            cout << "Result: " << res << endl;
        }

        else if (choice == 4)
        {
            obj.displayResults();
        }

        else if (choice == 5)
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
