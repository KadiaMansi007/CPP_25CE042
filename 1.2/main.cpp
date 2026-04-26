#include "Book.h"

int main()
{
    Library lib[100];
    int count = 0;
    int choice, id;

    do
    {
        cout << "\n===== Library Management =====\n";
        cout << "1. Add Book\n";
        cout << "2. Issue Book\n";
        cout << "3. Return Book\n";
        cout << "4. Display All Books\n";
        cout << "5. Total Books\n";
        cout << "0. Exit\n";

        cout << "Enter your choice: ";
        cin >> choice;

        if (choice == 1)
        {
            lib[count].addBook();
            count++;
        }

        if (choice == 2)
        {
            cout << "Enter Book ID: ";
            cin >> id;

            for (int i = 0; i < count; i++)
            {
                if (lib[i].getBookID() == id)
                {
                    lib[i].issueBook();
                }
            }
        }

        if (choice == 3)
        {
            cout << "Enter Book ID: ";
            cin >> id;

            for (int i = 0; i < count; i++)
            {
                if (lib[i].getBookID() == id)
                {
                    lib[i].returnBook();
                }
            }
        }

        if (choice == 4)
        {
            for (int i = 0; i < count; i++)
            {
                lib[i].displayBook();
            }
        }

        if (choice == 5)
        {
            cout << "Total books in library: " << count << endl;
        }

    } while (choice != 0);

    return 0;
}
