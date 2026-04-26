#include "WordFrequency.h"

int main()
{
    WordFrequency obj;
    int choice;
    string filename;

    while (true)
    {
        cout << "\n===== Word Frequency (File) =====\n";
        cout << "1. Read File\n";
        cout << "2. Display Frequency\n";
        cout << "3. Exit\n";

        cout << "Enter choice: ";
        cin >> choice;

        if (choice == 1)
        {
            cout << "Enter file name: ";
            cin >> filename;

            obj.readFromFile(filename);
        }
        else if (choice == 2)
        {
            obj.displayFrequency();
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
