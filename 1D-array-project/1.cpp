#include <iostream>
using namespace std;

int main()
{
    int size,min;

    cout << "enter your array size: ";
    cin >> size;

    int box[size];
    for (int i = 0; i < size; i++) {
        cout << "box[" << i << "] = ";
        cin >> box[i];
        if(box[i] < min){
            min = box[i];
        }
    }
    cout << "Minimum value: " << min;
}