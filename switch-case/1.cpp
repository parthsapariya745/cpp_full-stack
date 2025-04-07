#include <iostream>
using namespace std;

void calculator()
{
    int user;
    int a, b;
    do
    {
        cout << "Press 1 for Addition" << endl;
        cout << "Press 2 for Subtraction" << endl;
        cout << "Press 3 for Multiplication" << endl;
        cout << "Press 4 for Divison" << endl;
        cout << "Press 5 for Mode" << endl;
        cout << "press 0 for exit" << endl;
        cout << "------------------------------------" << endl;

        cout << "Enter your number: ";
        cin >> user;

        switch (user)
        {
        case 1:
            cout << "a = ";
            cin >> a;
            cout << "b = ";
            cin >> b;
            cout << "a + b = " << a + b << endl;
            cout << "------------------------------------" << endl;
            break;

        case 2:
            cout << "a = ";
            cin >> a;
            cout << "b = ";
            cin >> b;
            cout << "a - b = " << a - b << endl;
            cout << "------------------------------------" << endl;
            break;

        case 3:
            cout << "a = ";
            cin >> a;
            cout << "b = ";
            cin >> b;
            cout << "a * b = " << a * b << endl;
            cout << "------------------------------------" << endl;
            break;

        case 4:
            cout << "a = ";
            cin >> a;
            cout << "b = ";
            cin >> b;
            cout << "a / b = " << (float)a / b << endl;
            cout << "------------------------------------" << endl;
            break;

        case 5:
            cout << "a = ";
            cin >> a;
            cout << "b = ";
            cin >> b;
            cout << "a % b = " << a % b << endl;
            cout << "------------------------------------" << endl;
            break;

        case 0:
            cout << "Exit!" << endl;
            break;

        default:
            cout << "INVALID NUMBER!" << endl;
            break;
        }
    } while (user != 0);
}
int main()
{
    calculator();
}