#include "ArraySum.h"

int main()
{
    int choice;

    while (true)
    {
        cout << "\n===== Array Sum System =====\n";
        cout << "1. Compute Sum\n";
        cout << "2. Exit\n";

        cout << "Enter your choice: ";
        cin >> choice;

        if (choice == 1)
        {
            int n;
            cout << "Enter array size: ";
            cin >> n;

            ArraySum obj(n);
            obj.inputArray();

            cout << "\nIterative Sum: " << obj.iterativeSum();
            cout << "\nRecursive Sum: " << obj.getRecursiveSum() << "\n";
        }

        if (choice == 2)
        {
            break;
        }
    }

    return 0;
}
