#include<iostream>
using namespace std;

int main(){
    int size;
    float sum = 0,avg;

    cout << "Enter array size: ";
    cin >> size;

    int box[size];

    cout << "Enter array element:" << endl;
    for (int i = 0; i < size; i++)
    {
        cout << "box[" << i << "] = ";
        cin >> box[i];
    }
    
    for (int i = 0; i < size; i++)
    {
        sum += box[i];
        avg = sum / size;
    }
    cout << "Average of an Array: " << avg;
}