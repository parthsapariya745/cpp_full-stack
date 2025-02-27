#include<iostream>
using namespace std;

int main(){
    char alpha = 'a';
    do
    {
        cout << alpha << " ";
        alpha += 4;
    } while (alpha <= 'z');
}