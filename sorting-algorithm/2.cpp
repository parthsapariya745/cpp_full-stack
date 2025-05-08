// selection sort //
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
    cout << "Elements of array : ";
    for (int i = 0; i < size; i++) cout << box[i] << " ";

    for (int i = 0; i < size; i++) {
        for (int j = i; j < size; j++) {
            if (box[i] > box[j]) { 
                temp = box[i]; 
                box[i] = box[j];           
                box[j] = temp; 
            }
        }
    }
    cout << endl << "Assending order   : ";
    for (int i = 0; i < size; i++) cout << box[i] << " ";
}