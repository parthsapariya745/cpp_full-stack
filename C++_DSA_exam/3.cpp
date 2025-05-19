// Bubble sort //
#include<iostream>
using namespace std;

int main() {
    int size, temp;
    cout << "Enter size of array: ";
    cin >> size;

    int box[size];
    for (int i = 0; i < size; i++) {
        cout << "box[" << i << "] = ";
        cin >> box[i];
    }
    cout << "Elements of Array: ";
    for (int i = 0; i < size; i++) cout << box[i] << " ";
    
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - 1; j++) {
            if (box[j] > box[j + 1]) {
                temp = box[j];
                box[j] = box[j + 1];
                box[j + 1] = temp;
            }   
        }
    } 
    cout << endl << "Sorted Array: ";
    for (int i = 0; i < size; i++) cout << box[i] << " ";
}