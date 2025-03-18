#include<iostream>
using namespace std;

int swap(int a, int b){
    cout << "a = " << a << endl;
    cout << "b = " << b << endl << "-------------" << endl;

    a = a + b; 
    b = a - b; 
    a = a - b; 

    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
}
int main()
{
    int a,b;
    cout << "Enter a value: ";
    cin >> a; 

    cout << "Enter b value: ";
    cin >> b;
    swap(a,b);
}