#include "FileProcessor.h"

int main()
{
    FileProcessor fp;
    string filename;
    char choice;

    cout << "===== File Processing with Exception Handling =====\n";

    do
    {
        cout << "\nEnter file path: ";
        cin >> filename;

        try
        {
            fp.processFile(filename);
            break; // success → exit loop
        }
        catch (const char *msg)
        {
            cout << "Error: " << msg << endl;

            cout << "Do you want to try again? (y/n): ";
            cin >> choice;

            if (choice == 'n' || choice == 'N')
            {
                cout << "Exiting program...\n";
                return 0;
            }
        }

    } while (true);

    cout << "\nProgram finished safely.\n";

    return 0;
}
