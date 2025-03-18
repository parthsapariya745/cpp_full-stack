#include<iostream>
using namespace std;

int power(int base, int exponent) {
    int temp = 1;
    for (int i = 1; i <= exponent; i++)
    {
        temp *= base;
    }
    cout << base << " ^ " << exponent << " = " << temp;
}
int main() {
    int base, exponent;
    cout << "enter base: ";
    cin >> base;

    cout << "enter exponent: ";
    cin >> exponent;
    power(base,exponent);
}