#include<iostream>
using namespace std;

int main()
{
    int size,value = 0;
    
    cout << "Enter a row & col size: ";
    cin >> size;
    
    int box[size][size];
    for (int row = 0; row < size; row++) {
        for (int col = 0; col < size; col++) {
            cout << "box[" << row << "][" << col << "] = ";
            cin >> box[row][col];
        }
    }
    cout << "Transpose matrix of an array: " << endl;
    for (int row = 0; row < size; row++) {
        for (int col = 0; col < size; col++) {
            cout << box[col][row] << " ";
        }
        cout << endl;
    }
}