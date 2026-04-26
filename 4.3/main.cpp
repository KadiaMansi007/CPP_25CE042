#include "MergeArray.h"

int main()
{
    int choice;

    while (true)
    {
        cout << "\n===== Merge Sorted Arrays System =====\n";
        cout << "1. Merge Arrays\n";
        cout << "2. Exit\n";

        cout << "Enter choice: ";
        cin >> choice;

        if (choice == 1)
        {
            int n, m;

            cout << "Enter size of first array: ";
            cin >> n;

            cout << "Enter size of second array: ";
            cin >> m;

            MergeArray obj(n, m);

            obj.inputArrays();
            obj.mergeArrays();
            obj.displayMerged();
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
