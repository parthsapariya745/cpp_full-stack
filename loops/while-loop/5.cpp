#include <iostream>
using namespace std;

int main(){
    int fy,ly;

    cout << "Enter the first number: ";
    cin >> fy;

    cout << "Enter the last number: ";
    cin >> ly;

    while (fy <= ly)
    {
        cout << fy << " ";
        fy += 4;
    }
}