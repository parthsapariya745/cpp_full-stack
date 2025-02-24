#include <iostream>
using namespace std;

int main()
{
    int a, b, c, d;

    cout << "Enter the first value: ";
    cin >> a;

    cout << "Enter the second value: ";
    cin >> b;

    cout << "Enter the third value: ";
    cin >> c;

    cout << "Enter the fourth value: ";
    cin >> d;

    if (a != b && a != c && a != d && b != c && b != d && c != d)
    {
        if (a > b)
        {
            if (a > c)
            {
                if (a > d)
                {
                    cout << "first value is Max...";
                }
                else
                {
                    cout << "fourth value is Max...";
                }
            }
            else
            {
                if (c > d)
                {
                    cout << "third value is Max...";
                }
                else
                {
                    cout << "fourth value is Max...";
                }
            }
        }
        else
        {
            if (b > c)
            {
                if (b > d)
                {
                    cout << "second value is Max...";
                }
                else
                {
                    cout << "fourth value is Max...";
                }
            }
            else
            {
                if (c > d)
                {
                    cout << "third value is Max...";
                }
                else
                {
                    cout << "fourth value is Max...";
                }
            }
        }
    }
    else
    {
        cout << "this value are same";
    }
}