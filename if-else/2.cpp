#include<iostream>
using namespace std;

int main(){
    int user;

    cout << "Enter any number: ";
    cin >> user;

    if (user < 0)
    {
        cout << "The number is Negative";
    }
    else if (user == 0)
    {
        cout << "The number is Neutral";
    }
    else
    {
        cout << "The number is Positive";
    }
}