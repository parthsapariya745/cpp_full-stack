#include <iostream>
using namespace std;

int main()
{
    char user;
    while (user != 0)
    {
        cout << "Press + for Addition" << endl;
        cout << "Press - for Subtraction" << endl;
        cout << "Press * for Multiplication" << endl;
        cout << "Press / for Divison" << endl;
        cout << "Press % for Mode" << endl;
        cout << "press 0 for exit" << endl;
        cout << "------------------------------------" << endl;

        switch (user)
        {
            int a, b;

            cout << "Enter your calculator sign: ";
            cin >> user;

            cout << "a = ";
            cin >> a;
            cout << "b = ";
            cin >> b;
            
        case '+':
            cout << "a + b = " << a + b << endl;
            break;

        case '-':
            cout << "a - b = " << a - b << endl;
            break;

        case '*':
            cout << "a * b = " << a * b << endl;
            break;

        case '/':
            cout << "a / b = " << (float)a / b << endl;
            break;

        case '%':
            cout << "a % b = " << a % b << endl;
            break;

        case 0:
            cout << "Exit" << endl;
            break;

        default:
            cout << "INVALID NUMBER!" << endl;
            break;
        }
    }
}