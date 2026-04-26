#include "Point.h"

int main()
{
    Point p;
    int choice, x, y;

    while (true)
    {
        cout << "\n===== Point System =====\n";
        cout << "1. Set Point\n";
        cout << "2. Move Point (Chain)\n";
        cout << "3. Update using Pointer\n";
        cout << "4. Display Point\n";
        cout << "5. Exit\n";

        cout << "Enter choice: ";
        cin >> choice;

        if (choice == 1)
        {
            cout << "Enter x and y: ";
            cin >> x >> y;
            p = Point(x, y);
        }
        else if (choice == 2)
        {
            int dx1, dy1, dx2, dy2;

            cout << "Enter first move (dx dy): ";
            cin >> dx1 >> dy1;

            cout << "Enter second move (dx dy): ";
            cin >> dx2 >> dy2;

            p.move(dx1, dy1).move(dx2, dy2); // 🔥 chaining
            cout << "Point moved using chaining!\n";
        }
        else if (choice == 3)
        {
            p.updateByPointer(&p); // pass by pointer
        }
        else if (choice == 4)
        {
            p.display();
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
