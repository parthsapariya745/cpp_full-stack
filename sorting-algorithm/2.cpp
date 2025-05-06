// selection sort //
#include<iostream>
using namespace std;

int main() {
    int size, temp, min;
    cout << "Enter size of array: ";
    cin >> size;

    int box[size];
    for (int i = 0; i < size; i++) {
        cout << "box[" << i << "] = ";
        cin >> box[i];
    }
    cout << "Elements of array : ";
    for (int i = 0; i < size; i++) {
        cout << box[i] << " ";
    }
    for (int i = 0; i < size - 1; i++) {
        min = i; 
        for (int j = i + 1; j < size; j++) {
            if (box[j] < box[min]) {
                min = j; 
            }
        }
        temp = box[i]; 
        box[i] = box[min];           
        box[min] = temp; 
    }
    cout << endl << "Assending order   : ";
    for (int i = 0; i < size; i++) {
        cout << box[i] << " ";
    }
}