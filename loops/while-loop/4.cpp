#include <iostream>
using namespace std;

int main(){
    int user,a = 1;

    cout << "Enter any number: ";
    cin >> user;

    while (user >= a)
    {
        if (user %2 != 0)
        {
            cout << user << " ";
        }
        user--;
    }
}