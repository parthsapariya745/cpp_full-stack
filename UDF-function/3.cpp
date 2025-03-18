#include<iostream>
using namespace std;

char alpha(char a){
    if (a == 'a' || a == 'e' || a == 'i' || a == 'o' || a == 'u') {
        cout << a << " is a vowel";
    }
    else {
        cout << a << " is a consonant";
    }
    return a;
}
int main()
{   
    char a;
    cout << "Enter a character: ";
    cin >> a;
    alpha(a);
}