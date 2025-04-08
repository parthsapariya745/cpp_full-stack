#include <iostream>
using namespace std;

void add(int a, int b) {
    cout << "a + b = " << a + b << endl;
    cout << "------------------------------------" << endl;
}
void sub(int a, int b) {
    cout << "a - b = " << a - b << endl;
    cout << "------------------------------------" << endl;
}
void multi(int a, int b) {
    cout << "a * b = " << a * b << endl;
    cout << "------------------------------------" << endl;
}
void divison(int a, int b) {
    cout << "a / b = " << (float)a / b << endl;
    cout << "------------------------------------" << endl;
}
void mode(int a, int b) {
    cout << "a % b = " << a % b << endl;
    cout << "------------------------------------" << endl;
}
int main()
{
    int user,a,b;
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
            add(a,b);
            break;
        case 2:
            cout << "a = ";
            cin >> a;
            cout << "b = ";
            cin >> b;
            sub(a,b);
            break;
        case 3:
            cout << "a = ";
            cin >> a;
            cout << "b = ";
            cin >> b;
            multi(a,b);
            break;
        case 4:
            cout << "a = ";
            cin >> a;
            cout << "b = ";
            cin >> b;
            divison(a,b);
            break;
        case 5:
            cout << "a = ";
            cin >> a;
            cout << "b = ";
            cin >> b;
            mode(a,b);
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