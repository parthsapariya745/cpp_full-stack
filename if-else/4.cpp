#include <iostream>
using namespace std;

int main()
{
    int a, b, c;

    cout << "Enter the first value: ";
    cin >> a;

    cout << "Enter the second value: ";
    cin >> b;

    cout << "Enter the third value: ";
    cin >> c;

    if (a != b && a != c && b != c)
    {
        if (a < b)
        {
            if (a < c)
            {
                cout << "First value is Min...";
            }
            else
            {
                cout << "third value is Min...";
            }
        }
        else
        {
            if (b < c)
            {
                cout << "second value is Min...";
            }
            else
            {
                cout << "third value is Min...";
            }
        }
    }
    else
    {
        cout << "this value are same";
    }
}