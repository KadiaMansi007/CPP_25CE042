#include "UniqueList.h"

int main()
{
    UniqueList obj;

    cout << "===== Remove Duplicates Using STL set =====\n";

    obj.inputData();

    // Display set (unique + sorted)
    obj.displaySet();

    // Convert to vector
    vector<int> v = obj.convertToVector();

    cout << "\n===== Converted Vector =====\n";
    for (int x : v)
    {
        cout << x << " ";
    }

    cout << endl;

    return 0;
}
