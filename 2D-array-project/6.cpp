#include<iostream>
using namespace std;

int main()
{
    int size;
    
    cout << "Enter a row & col size: ";
    cin >> size;
    
    int box1[size][size];
    for (int row = 0; row < size; row++) {
        for (int col = 0; col < size; col++) {
            cout << "box1[" << row << "][" << col << "] = ";
            cin >> box1[row][col];
        }
    }
    cout << "------------------------------------------" << endl;
    int box2[size][size];
    for (int row = 0; row < size; row++) {
        for (int col = 0; col < size; col++) {
            cout << "box2[" << row << "][" << col << "] = ";
            cin >> box2[row][col];
        }
    }
    cout << "------------------------------------------" << endl;
    for (int row = 0; row < size; row++) {
        for (int col = 0; col < size; col++) {
            cout << box1[row][col] << " ";
        }
        cout << endl;
    }
    cout << "------------------------------------------" << endl;
    for (int row = 0; row < size; row++) {
        for (int col = 0; col < size; col++) {
            cout << box2[row][col] << " ";
        }
        cout << endl;
    }
    cout << "------------------------------------------" << endl;
    int sum[size][size];
    for (int row = 0; row < size; row++) {
        for (int col = 0; col < size; col++) {
            sum[row][col] = box1[row][col] + box2[row][col];
            cout << sum[row][col] << " ";
        }
        cout << endl;
    }
}