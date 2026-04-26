#include "VectorOps.h"
#include <algorithm>

// Input vector
void VectorOps::inputData()
{
    int n, value;

    cout << "Enter number of elements: ";
    cin >> n;

    cout << "Enter elements:\n";
    for (int i = 0; i < n; i++)
    {
        cin >> value;
        v.push_back(value);
    }
}

// Show vector
void VectorOps::showVector()
{
    for (int x : v)
    {
        cout << x << " ";
    }
    cout << endl;
}

// STL reverse
void VectorOps::reverseUsingSTL()
{
    reverse(v.begin(), v.end());
}

// Iterator-based reverse
void VectorOps::reverseUsingIterators()
{
    auto start = v.begin();
    auto end = v.end() - 1;

    while (start < end)
    {
        swap(*start, *end);
        start++;
        end--;
    }
}
