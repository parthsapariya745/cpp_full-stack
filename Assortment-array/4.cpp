#include<iostream>
using namespace std;

int main() {
    int size, rnum, cnum, sum = 0, sum2 = 0;
    
    cout << "Enter the row & col size: ";
    cin >> size;

    int box[size][size];
    for (int row = 0; row < size; row++) {
        for (int col = 0; col < size; col++) {
            cout << "a[" << row << "][" << col << "] = ";
            cin >> box[row][col];
        }
    }
    
    cout << "Enter row number: ";
    cin >> rnum;
    
    if (rnum < size) {
        cout << "Elements of row " << rnum << ": ";
        for (int row = 0; row < size; row++) {   
            cout << box[rnum][row] << " "; 
            sum += box[rnum][row];
        }
        cout << endl << "The sum of row " << rnum << ": " << sum << endl;
    }
    else {
        cout << "Invalid row size" << endl;
    }
    cout << "-------------------------------------------" << endl;
    
    cout << "Enter column number: ";
    cin >> cnum;

    if (cnum < size) {
        cout << "Elements of column " << cnum << ": ";
        for (int col = 0; col < size; col++) {   
            cout << box[col][cnum] << " ";
            sum2 += box[col][cnum];
        }
        cout << endl << "The sum of column " << cnum << ": " << sum2 << endl;
    }
    else {
        cout << "Invalid col size" << endl;
    }
}