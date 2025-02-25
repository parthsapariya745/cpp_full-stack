#include <iostream>
using namespace std;

int main(){
    int a = 1,user;

    cout << "Enter any number: ";
    cin >> user;

    do
    {   
        if (a %2 == 0)
        {
            cout << a << " ";
        }
        a++;
    } while (a <= user);
}