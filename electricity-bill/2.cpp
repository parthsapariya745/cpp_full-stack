#include<iostream>
using namespace std;

int main(){
    int maths,english,science;

    cout << "Enter maths marks: ";
    cin >> maths;

    cout << "Enter english marks: ";
    cin >> english;

    cout << "Enter science marks: ";
    cin >> science;

    float avg = float(maths + english + science)/3;
    cout << "Average mark: " << avg;
}