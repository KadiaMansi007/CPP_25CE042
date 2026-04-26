#include "Rectangle.h"

int main()
{
    Rectangle rect[100];
    int count = 0;
    int choice, no;

    do
    {
        cout << "\n===== Rectangle Management System =====\n";
        cout << "1. Add Rectangle\n";
        cout << "2. Update Rectangle\n";
        cout << "3. Display All Rectangles\n";
        cout << "0. Exit\n";

        cout << "Enter your choice: ";
        cin >> choice;

        if (choice == 1)
        {
            rect[count].setRectangle(count + 1);
            count++;
        }

        if (choice == 2)
        {
            cout << "Enter Rectangle No: ";
            cin >> no;

            for (int i = 0; i < count; i++)
            {
                if (rect[i].getRectNo() == no)
                {
                    rect[i].updateDimensions();
                }
            }
        }

        if (choice == 3)
        {
            for (int i = 0; i < count; i++)
            {
                rect[i].display();
            }
        }

    } while (choice != 0);

    return 0;
}
