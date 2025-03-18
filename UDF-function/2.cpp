#include<iostream>
using namespace std;

int fun(int a){
    if (a %2 == 0) {
        cout << a << " is an even number";
    }
    else {
        cout << a << " is an odd number";
    }
}
int main()
{
    int a;
    cout << "Enter the value: ";
    cin >> a;
    fun(a);
}