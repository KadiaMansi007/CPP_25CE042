#include "ArraySum.h"

// Constructor
ArraySum::ArraySum(int s)
{
    size = s;
    arr = new int[size];
}

// Destructor
ArraySum::~ArraySum()
{
    delete[] arr;
}

// Input
void ArraySum::inputArray()
{
    cout << "\nEnter " << size << " elements:\n";
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
}

// Iterative sum
int ArraySum::iterativeSum()
{
    int sum = 0;
    for (int i = 0; i < size; i++)
    {
        sum += arr[i];
    }
    return sum;
}

// Recursive sum
int ArraySum::recursiveSum(int n)
{
    if (n == 0)
        return 0;

    return arr[n - 1] + recursiveSum(n - 1);
}

// Wrapper
int ArraySum::getRecursiveSum()
{
    return recursiveSum(size);
}
