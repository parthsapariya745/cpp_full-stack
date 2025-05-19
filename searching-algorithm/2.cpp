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
    for (int i = 1; i < size; i++) {
        int key = box[i];
        int j = i - 1; 

        while (j >= 0 && box[j] > key) {
            box[j + 1] = box[j];
            j--;
        }
        box[j + 1] = key;
    }
    for (int i = 0; i < size; i++) {
        cout << box[i] << " ";
    }
    cout << endl << "------------------------------------" << endl;

    cout << "Enter search key: ";
    cin >> searchKey;

    int lowPoint = 0;
    int midPoint = (size - 1) / 2; 
    int highPoint = size - 1;

    if (searchKey < box[midPoint]) {
        highPoint = midPoint;
        midPoint = (highPoint) / 2;   
        box[midPoint] = searchKey;
    }
    if (searchKey > box[midPoint]) { 
        midPoint = (lowPoint + highPoint) / 2;
        box[midPoint] = searchKey;
    } 
    if (searchKey == box[midPoint]) cout << "Target Value = " << searchKey;
}