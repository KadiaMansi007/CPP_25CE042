#ifndef TEMPLATEARRAY_H
#define TEMPLATEARRAY_H

#include <iostream>
using namespace std;

template <class T>
class TemplateArray
{
private:
    T arr[100];
    int size;

public:
    void inputArray()
    {
        cout << "Enter size: ";
        cin >> size;

        cout << "Enter elements:\n";
        for (int i = 0; i < size; i++)
            cin >> arr[i];
    }

    void display()
    {
        cout << "Array: ";
        for (int i = 0; i < size; i++)
            cout << arr[i] << " ";
        cout << endl;
    }

    T findMax()
    {
        T max = arr[0];
        for (int i = 1; i < size; i++)
        {
            if (arr[i] > max)
                max = arr[i];
        }
        return max;
    }

    void reverseArray()
    {
        for (int i = 0; i < size / 2; i++)
        {
            T temp = arr[i];
            arr[i] = arr[size - i - 1];
            arr[size - i - 1] = temp;
        }
    }

    void leaderElements()
    {
        cout << "Leader Elements: ";

        for (int i = 0; i < size; i++)
        {
            bool isLeader = true;

            for (int j = i + 1; j < size; j++)
            {
                if (arr[j] > arr[i])
                {
                    isLeader = false;
                    break;
                }
            }

            if (isLeader)
                cout << arr[i] << " ";
        }
        cout << endl;
    }
};

#endif
