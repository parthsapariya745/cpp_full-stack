#include <iostream>
using namespace std;

int sum(int a, int b) {
    return a + b;
}
int main() {
    int a, b;
    cout << "Enter a value: ";
    cin >> a;

    cout << "Enter b value: ";
    cin >> b;
    cout << "sum: " << sum(a, b);
}