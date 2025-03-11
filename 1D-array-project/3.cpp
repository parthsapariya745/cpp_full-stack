#include <iostream>
using namespace std;

int main()
{
    int size;

    cout << "enter your array size: ";
    cin >> size;

    int box[size];
    for (int i = 0; i < size; i++) {
        cout << "box[" << i << "] = ";
        cin >> box[i];
    }
    
    cout << "---------------------------------" << endl;
    cout << "Revarse array: " << endl;
    for (int i = 0; i < size; i++) {
        cout << box[size - 1 - i] << " "; 
    }
}