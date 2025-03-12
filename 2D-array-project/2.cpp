#include<iostream>
using namespace std;

int main()
{
    int size;
    
    cout << "Enter a row & col size: ";
    cin >> size;
    
    int box[size][size];
    for (int row = 0; row < size; row++) {
        for (int col = 0; col < size; col++) {
            cout << "box[" << row << "][" << col << "] = ";
            cin >> box[row][col];
        }
    }
    for (int row = 0; row < size; row++) {
        for (int col = 0; col < size; col++) {
            cout << box[row][col] << " ";
        }
        cout << endl;
    }
    cout << "sum of col: ";
    for (int col = 0; col < size; col++) {
        int sum = 0;
        for (int row = 0; row < size; row++) {
            sum += box[row][col];
        }
        cout << sum << " ";
    }
}