#include "TemplateArray.h"

int main()
{
    int choice, type;

    while (true)
    {
        cout << "\n===== Template Array System =====\n";
        cout << "1. Perform Operations\n";
        cout << "2. Exit\n";

        cout << "Enter your choice: ";
        cin >> choice;

        if (choice == 1)
        {
            cout << "\nSelect Data Type:\n";
            cout << "1. Integer\n";
            cout << "2. Float\n";
            cout << "3. Character\n";
            cin >> type;

            if (type == 1)
            {
                TemplateArray<int> obj;
                obj.inputArray();

                obj.display();
                cout << "Max: " << obj.findMax() << endl;

                obj.reverseArray();
                cout << "Reversed: ";
                obj.display();

                obj.leaderElements();
            }

            if (type == 2)
            {
                TemplateArray<float> obj;
                obj.inputArray();

                obj.display();
                cout << "Max: " << obj.findMax() << endl;

                obj.reverseArray();
                cout << "Reversed: ";
                obj.display();

                obj.leaderElements();
            }

            if (type == 3)
            {
                TemplateArray<char> obj;
                obj.inputArray();

                obj.display();
                cout << "Max: " << obj.findMax() << endl;

                obj.reverseArray();
                cout << "Reversed: ";
                obj.display();

                obj.leaderElements();
            }
        }

        if (choice == 2)
        {
            break;
        }
    }

    return 0;
}
