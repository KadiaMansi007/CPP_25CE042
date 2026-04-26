#include "DynamicArray.h"

// Constructor
DynamicArray::DynamicArray()
{
    arr = nullptr;
    size = 0;
}

// Destructor
DynamicArray::~DynamicArray()
{
    delete[] arr;
}

// Insert at end
void DynamicArray::insertElement(int value)
{
    int* newArr = new int[size + 1];

    for (int i = 0; i < size; i++)
        newArr[i] = arr[i];

    newArr[size] = value;

    delete[] arr;
    arr = newArr;
    size++;

    cout << "Element inserted!\n";
}

// Delete from position
void DynamicArray::deleteElement(int pos)
{
    if (pos < 1 || pos > size)
    {
        cout << "Invalid position!\n";
        return;
    }

    int* newArr = new int[size - 1];

    for (int i = 0, j = 0; i < size; i++)
    {
        if (i != pos - 1)
        {
            newArr[j] = arr[i];
            j++;
        }
    }

    delete[] arr;
    arr = newArr;
    size--;

    cout << "Element deleted!\n";
}

// Display
void DynamicArray::display()
{
    if (size == 0)
    {
        cout << "Array is empty!\n";
        return;
    }

    cout << "Array: ";
    for (int i = 0; i < size; i++)
        cout << arr[i] << " ";
    cout << endl;
}
