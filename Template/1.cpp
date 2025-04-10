#include<iostream>
using namespace std;

template<typename P>
P sum(P a, P b) {
    cout << a << " + " << b << " = " << a + b << endl;
}
int main() {
    sum(10,15);
    sum(10.15,15.25);
}