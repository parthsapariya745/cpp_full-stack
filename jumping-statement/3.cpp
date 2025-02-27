#include <iostream>
using namespace std;

int main()
{
    int user, temp = 0, first = 0, third = 0, sum = 0;

    cout << "enter any number: ";
    cin >> user;

    third = user % 10;

    if (user < 10)
    {
        first = temp;
    }
    else
    {
        while (user >= 10)
        {
            user = user / 10;
            first = user;
        }
    }
    sum = first + third;
    cout << "The sum of first and last value: " << first << " + " << third << " = " << sum;
}