#include "Division.h"

int main()
{
    Division d;

    cout << "===== Exception Handling (Division Program) =====\n";

    try
    {
        d.getInput();     // input + validation
        d.calculate();    // division
    }
    catch (const char* msg)
    {
        cout << "Error: " << msg << endl;
    }

    cout << "Program ended safely.\n";

    return 0;
}
