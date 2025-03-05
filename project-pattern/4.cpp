#include<iostream>
using namespace std;

int main(){
    for (int row = 5; row >= 1; row--)
    {
        for (int space = 4; space >= row; space--)
        {
            cout << "- ";
        }
        
        for (int col = 1; col <= row; col++)
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