#include "Fahrenheit.h"
#include <queue>
#include <vector>

int main()
{
    int choice;

    // Fixed array storage
    Fahrenheit fArray[5];
    int fCount = 0;

    // Queue storage (FIFO)
    queue<Celsius> cQueue;

    do
    {
        cout << "\n===== Temperature System =====";
        cout << "\n1. Celsius to Fahrenheit (store in array)";
        cout << "\n2. Fahrenheit to Celsius (store in queue)";
        cout << "\n3. Compare Temperatures";
        cout << "\n4. Display Stored Values";
        cout << "\n5. Exit";
        cout << "\nEnter choice: ";
        cin >> choice;

        if (choice == 1)
        {
            float c;
            cout << "Enter Celsius: ";
            cin >> c;

            Celsius c1(c);
            Fahrenheit f = c1;

            if (fCount < 5)
            {
                fArray[fCount++] = f;
                cout << "Converted: " << f.getTemp() << " F stored in array.\n";
            }
            else
            {
                cout << "Array full!\n";
            }
        }
        else if (choice == 2)
        {
            float f;
            cout << "Enter Fahrenheit: ";
            cin >> f;

            Fahrenheit f1(f);
            Celsius c = f1;

            cQueue.push(c);
            cout << "Converted: " << c.getTemp() << " C stored in queue.\n";
        }
        else if (choice == 3)
        {
            float cVal, fVal;
            cout << "Enter Celsius: ";
            cin >> cVal;
            cout << "Enter Fahrenheit: ";
            cin >> fVal;

            Celsius c1(cVal);
            Fahrenheit f1(fVal);

            Celsius converted = f1;

            if (c1 == converted)
                cout << "Both temperatures are equal.\n";
            else
                cout << "Temperatures are NOT equal.\n";
        }
        else if (choice == 4)
        {
            cout << "\n--- Fahrenheit Array ---\n";
            for (int i = 0; i < fCount; i++)
            {
                cout << fArray[i].getTemp() << " F\n";
            }

            cout << "\n--- Celsius Queue ---\n";
            queue<Celsius> temp = cQueue;
            while (!temp.empty())
            {
                cout << temp.front().getTemp() << " C\n";
                temp.pop();
            }
        }

    } while (choice != 5);

    return 0;
}
