#include<iostream>
using namespace std;

int main(){
    for (int row = 1; row <= 5; row++)
    {
        for (int space = 2; space <= row; space++)
        {
            cout << "- ";
        }
        for (int col = row; col <= 5; col++)
        {
            if (col %2 == 0)
            {
                cout << "0 ";
            }
            else
            {
                cout << "1 ";
            }
        }
        cout << endl;
    }
}