#include<iostream>
using namespace std;

int main() {
    int size;
    cout << "Enter the array's size: ";
    cin >> size;

    int box[size];
    for (int i = 0; i < size; i++) {
        cout << "a[" << i << "] = ";
        cin >> box[i];
    }
    cout << "Negative elements from an Array: ";
    for (int i = 0; i < size; i++) {
        if (box[i] < 0) {
            cout << box[i] << " ";
        }
    }
}