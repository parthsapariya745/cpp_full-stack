#include<iostream>
using namespace std;

int point(int x) {
    int *ptr;
    ptr = &x;

    cout << ptr;    
}
int main() {
    int a;
    cout << "Enter the value: ";
    cin >> a;
    point(a);
}