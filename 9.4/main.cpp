#include "Directory.h"

int main()
{
    Directory d;
    int choice;
    string folder, file;

    cout << "===== Directory Management System =====\n";

    do
    {
        cout << "\n1. Add Folder";
        cout << "\n2. Add File to Folder";
        cout << "\n3. Display Directory";
        cout << "\n4. Exit";
        cout << "\nEnter choice: ";
        cin >> choice;

        if (choice == 1)
        {
            cout << "Enter folder name: ";
            cin >> folder;
            d.addFolder(folder);
        }
        else if (choice == 2)
        {
            cout << "Enter folder name: ";
            cin >> folder;

            cout << "Enter file name: ";
            cin >> file;

            d.addFile(folder, file);
        }
        else if (choice == 3)
        {
            d.displayDirectory();
        }

    } while (choice != 4);

    return 0;
}
