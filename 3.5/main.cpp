#include "SuperDigit.h"

int main()
{
    int choice;

    while (true)
    {
        cout << "\n===== Super Digit System =====\n";
        cout << "1. Calculate Super Digit\n";
        cout << "2. Exit\n";

        cout << "Enter your choice: ";
        cin >> choice;

        if (choice == 1)
        {
            string n;
            int k;

            cout << "Enter number (as string): ";
            cin >> n;

            cout << "Enter k (times to repeat): ";
            cin >> k;

            SuperDigit obj;
            int result = obj.calculateSuperDigit(n, k);

            cout << "Super Digit: " << result << endl;
        }
        else if (choice == 2)
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
