#include <iostream>
using namespace std;

int main(){
    cout << "Press + for Addition" << endl;
    cout << "Press - for Subtraction" << endl;
    cout << "Press * for Multiplication" << endl;
    cout << "Press / for Divison" << endl;
    cout << "Press % for Mode" << endl;

    cout << "------------------------------------" << endl;

    int a,b;
    char user;

    cout << "Enter the calculator sign: ";
    cin >> user;

    cout << "a = ";
    cin >> a;

    cout << "b = ";
    cin >> b;
    
    switch (user)
    {
    case '+':
        cout << "a + b = " << a + b;
        break;

    case '-':
        cout << "a - b = " << a - b;
        break;
    
    case '*':
        cout << "a * b = " << a * b;
        break;

    case '/':
        cout << "a / b = " << (float)a / b;
        break;

    case '%':
        cout << "a % b = " << a % b;
        break;
    default:
        cout << "INVALID NUMBER!";
        break;
    }
}