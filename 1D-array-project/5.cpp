#include <iostream>
using namespace std;

int main()
{
    int size, temp = 0;

    cout << "enter your array size: ";
    cin >> size;

    int box[size];
    for (int i = 0; i < size; i++) {
        cout << "box[" << i << "] = ";
        cin >> box[i];
    }

    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size; j++) {
            if (box[j] > box[j + 1]) {
                temp = box[j];
                box[j] = box[j + 1];
                box[j + 1] = temp;
            }
        }
    }
    cout << "assending order: ";
    for (int i = 0; i < size; i++) {
        cout << box[i] << " ";
    }
    cout << endl << "duplicates value remove: ";
    for (int i = 0; i < size; i++) {
        if (box[i] != box[i + 1]) {
            cout << box[i] << " ";
        }
    }
}