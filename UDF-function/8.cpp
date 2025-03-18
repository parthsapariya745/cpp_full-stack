#include<iostream>
using namespace std;

int max(int a, int b, int c){
    if (a > b) {
        if (a > c) {
            cout << "Maximum number is: " << a;
        }
        else {
            cout << "Maximum number is: " << c;
        }
    }
    else {
        if (b > c) {
            cout << "Maximum number is: " << b;
        }
        else {
            cout << "Maximum number is: " << c;
        }
    }
    return a,b,c;
}
int main()
{
   int a,b,c;
   cout << "enter a value: ";
   cin >> a;

   cout << "enter b value: ";
   cin >> b;

   cout << "enter c value: ";
   cin >> c;
   max(a,b,c);
}