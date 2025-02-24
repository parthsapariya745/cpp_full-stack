#include<iostream>
using namespace std;

int main(){
    int a,b;

    cout << "Enter first value: ";
    cin >> a;

    cout << "Enter second value: ";
    cin >> b;

    if (a < b)
    {
        cout << "The minimum value is: " << a;
    }
    else
    {
        cout << "The minimum value is: " << b;
    }
}