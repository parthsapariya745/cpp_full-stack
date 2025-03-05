#include<iostream>
using namespace std;

int main(){
    int size;

    cout << "Enter array size: ";
    cin >> size;

    int box1[size];

    cout << "Enter first array element:" << endl;
    for (int i = 0; i < size; i++)
    {
        cout << "box[" << i << "] = ";
        cin >> box1[i];
    }

    int box2[size];

    cout << "Enter second array element:" << endl;
    for (int i = 0; i < size; i++)
    {
        cout << "box2[" << i << "] = ";
        cin >> box2[i];
    }

    int box3[size];

    cout << "sum: ";
    for (int i = 0; i < size; i++)
    {
        box3[i] = box1[i] + box2[i];
        cout << box3[i] << " ";
    }
}