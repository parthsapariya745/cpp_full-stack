#include<iostream>
using namespace std;

int main(){
    for (int row = 1; row <= 5; row++)
    {
        for (int space = 4; space >= row; space--)
        {
            cout << "- ";
        }
        for (int col = 1; col <= row; col++)
        {
            cout << "* ";
        }
        for (int col = row - 1; col >= 1; col--)
        {
            cout << "* ";
        }
        for (int space = 4; space >= row; space--)
        {
            cout << "- ";
        }
        cout << endl;
    }
}