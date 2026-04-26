#include "FileCounter.h"

int main()
{
    FileCounter obj;
    int choice;
    string filename;

    while (true)
    {
        cout << "\n===== File Counter System =====\n";
        cout << "1. Read File\n";
        cout << "2. Display Result\n";
        cout << "3. Exit\n";

        cout << "Enter choice: ";
        cin >> choice;

        if (choice == 1)
        {
            cout << "Enter file name: ";
            cin >> filename;

            obj.processFile(filename);
        }
        else if (choice == 2)
        {
            obj.displayResult();
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
