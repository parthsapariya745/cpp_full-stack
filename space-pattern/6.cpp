#include<iostream>
using namespace std;

int main(){
    for (int row = 1; row <= 5; row++)
    {
        for (int space = 2; space <= row; space++)
        {
            cout << "- ";
        }
        for (int col = 5; col >= row; col--)
        {
            cout << col << " ";
        }
        cout << endl;
    }
}