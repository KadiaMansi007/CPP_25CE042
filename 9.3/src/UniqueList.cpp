#include "UniqueList.h"

// Input elements
void UniqueList::inputData()
{
    int n, value;

    cout << "Enter number of elements: ";
    cin >> n;

    cout << "Enter elements:\n";

    for (int i = 0; i < n; i++)
    {
        cin >> value;
        s.insert(value);  // duplicates automatically ignored
    }
}

// Display using iterator
void UniqueList::displaySet()
{
    cout << "\n===== Unique Sorted Elements (Set) =====\n";

    for (auto it = s.begin(); it != s.end(); it++)
    {
        cout << *it << " ";
    }
    cout << endl;
}

// Convert set to vector
vector<int> UniqueList::convertToVector()
{
    vector<int> v;

    for (auto it : s)
    {
        v.push_back(it);
    }

    return v;
}
