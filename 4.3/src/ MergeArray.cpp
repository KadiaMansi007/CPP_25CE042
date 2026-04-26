#include "MergeArray.h"

// Constructor
MergeArray::MergeArray(int a, int b)
{
    n = a;
    m = b;

    arr1 = new int[n];
    arr2 = new int[m];
    merged = new int[n + m];
}

// Destructor
MergeArray::~MergeArray()
{
    delete[] arr1;
    delete[] arr2;
    delete[] merged;
}

// Input
void MergeArray::inputArrays()
{
    cout << "Enter " << n << " sorted elements for Array 1:\n";
    for (int i = 0; i < n; i++)
        cin >> arr1[i];

    cout << "Enter " << m << " sorted elements for Array 2:\n";
    for (int i = 0; i < m; i++)
        cin >> arr2[i];
}

// Merge logic
void MergeArray::mergeArrays()
{
    int i = 0, j = 0, k = 0;

    while (i < n && j < m)
    {
        if (arr1[i] < arr2[j])
            merged[k++] = arr1[i++];
        else
            merged[k++] = arr2[j++];
    }

    while (i < n)
        merged[k++] = arr1[i++];

    while (j < m)
        merged[k++] = arr2[j++];

    cout << "Arrays merged successfully!\n";
}

// Display
void MergeArray::displayMerged()
{
    cout << "Merged Array: ";
    for (int i = 0; i < n + m; i++)
        cout << merged[i] << " ";
    cout << endl;
}
