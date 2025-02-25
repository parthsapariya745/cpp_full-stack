#include <iostream>
using namespace std;

int main(){
    int a = 1,user;

    cout << "Enter any number: ";
    cin >> user;

    while (a <= user)
    {
        cout << a << " ";
        a++;
    }
}