#include <iostream>
using namespace std;

int main()
{
    long long int user,count = 0;

    cout << "enter any number: ";
    cin >> user;

    while (user != 0)
    {
        user = user / 10;
        count++;
    }
    cout << "The number of digits: " << count;
}