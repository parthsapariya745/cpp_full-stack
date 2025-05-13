// selection sort //
#include<iostream>
using namespace std;

int main() {
    int size, temp, minIndex;
    cout << "Enter size of array: ";
    cin >> size;

    int box[size];
    for (int i = 0; i < size; i++) {
        cout << "box[" << i << "] = ";
        cin >> box[i];
    }
    cout << "Elements of array : ";
    for (int i = 0; i < size; i++) cout << box[i] << " ";

    for (int i = 0; i < size - 1; i++) {
        minIndex = i;
        for (int j = i; j < size; j++) {
            if (box[j] < box[minIndex]) minIndex = j;
        }
        temp = box[i]; 
        box[i] = box[minIndex];           
        box[minIndex] = temp; 
    }
    cout << endl << "Assending order   : ";
    for (int i = 0; i < size; i++) cout << box[i] << " ";
} 