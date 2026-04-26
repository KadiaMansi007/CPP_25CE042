#include "NegativeNumberException.h"


int main()
{
    SqrtCalc obj;
    char choice;

    cout << "===== Square Root with Custom Exception =====\n";

    do
    {
        try
        {
            obj.getInput();
            obj.calculate();
        }
        catch (NegativeNumberException e)
        {
            e.message();
        }
        catch (const char* msg)
        {
            cout << msg << endl;
        }

        cout << "\nDo you want to continue? (y/n): ";
        cin >> choice;

    } while (choice == 'y' || choice == 'Y');

    cout << "Program ended safely.\n";

    return 0;
}
