#include<iostream>
using namespace std;

int prime(int a){
    int count = 0;
    for (int i = 1; i <= a; i++) {
        if (a % i == 0) {
            count++;
        }
    }
    if (count > 2) {
        cout << a << " is not prime number";
    }
    else {
        cout << a <<" is prime number";
    }
}

int main(){
    int a;
    cout << "Enter the value: ";
    cin >> a;
    prime(a);
}