#include<iostream>
using namespace std;

int rev(string user){
    int length = 0;
    for (int i = 0; i < user[i]; i++) 
    {
        length++;
    }
    for (int i = 0; i < length; i++) 
    {
        cout << user[length - 1 - i];
    }
}
int main(){
    string user;
    cout << "enter string: ";
    cin >> user;
    rev(user);
}