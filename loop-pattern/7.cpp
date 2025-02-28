#include<iostream>
using namespace std;

int main(){
    for (char i = 'A'; i <= 'E'; i++)
    {
        for (char j = i; j >= 'A'; j--)
        {
            cout << j << " ";
        }
        cout << endl;
    }
}