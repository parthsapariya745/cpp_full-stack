#include<iostream>
using namespace std;

int main()
{
    int size,lar = 0;
    
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
    for (int row = 0; row < size; row++) {
        for (int col = 0; col < size; col++) {
            if (box[row][col] > lar) {
                lar = box[row][col];
            }
        }
    }
    cout << "Largest element: " << lar;
}