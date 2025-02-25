#include<iostream>
using namespace std;

int main(){
    int user,sum = 0;

    cout << "Enter any number: ";
    cin >> user;

    for (int i = 1; i <= user; i++)
    {
        sum += i;  
    }
    cout << sum << " ";
}