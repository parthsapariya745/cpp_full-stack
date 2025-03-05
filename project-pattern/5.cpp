#include<iostream>
using namespace std;

int main(){
    for (int row = 5; row >= 1; row--)
    {
        for (int space = 2; space <= row; space++)
        {
            cout << "- ";
        }
        
        for (int col = row; col < 5; col++)
        {
            cout << col << " ";
        }

        for (int col = 5; col >= row; col--)
        {
            cout << col << " ";
        }

        for (int space = 2; space <= row; space++)
        {
            cout << "- ";
        }
        cout << endl;
    }
}