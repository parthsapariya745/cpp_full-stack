#include<iostream>
using namespace std;

int main() {
    int size, searchKey;

    cout << "Enter array size: ";
    cin >> size;

    int box[size];
    for (int i = 0; i < size; i++) {
        cout << "box[" << i << "] = ";
        cin >> box[i];
    }
    cout << "------------------------------------" << endl;
    for (int i = 0; i < size; i++) cout << box[i] << " ";
    cout << endl << "------------------------------------" << endl;
    
    cout << "Enter search key: ";
    cin >> searchKey;

    for (int i = 0; i < size; i++) {
        if (box[i] == searchKey) cout << "Search key found are Successfully" << endl; 

        else cout << "Search key are not found" << endl;
    }
}