#include "Circle.h"

int main()
{
    int n;

    cout << "Enter number of circles: ";
    cin >> n;

    Circle* c = new Circle[n];

    for (int i = 0; i < n; i++)
    {
        float r;
        cout << "Enter radius for circle " << i + 1 << ": ";
        cin >> r;

        c[i].setRadius(r);
    }

    cout << "\nAreas:\n";
    for (int i = 0; i < n; i++)
    {
        cout << "Circle " << i + 1
             << " Area: " << c[i].calculateArea() << endl;
    }

    cout << "\nTotal Circles Created: "
         << Circle::getTotalCircles() << endl;

    delete[] c;

    return 0;
}
