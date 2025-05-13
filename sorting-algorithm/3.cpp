// insertion sort //
#include<iostream>
using namespace std;

int main() {
    int size;
    cout << "Enter size of array: ";
    cin >> size;

    int box[size];
    for (int i = 0; i < size; i++) {
        cout << "box[" << i << "] = ";
        cin >> box[i]; 
    }
    cout << "Elements of array : ";
    for (int i = 0; i < size; i++) cout << box[i] << " "; 

    for (int i = 1; i < size; i++) {
        int key = box[i]; 
        int temp = i - 1; 
        
        while (temp >= 0 && box[temp] > key) {
            box[temp + 1] = box[temp]; 
            temp--; 
        }
        box[temp + 1] = key; 
    }
    cout << endl << "Assending order   : ";
    for (int i = 0; i < size; i++) cout << box[i] << " ";
}