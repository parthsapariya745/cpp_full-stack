#include <iostream>
using namespace std;

int main()
{
    int size,max = 0;

    cout << "enter your array size: ";
    cin >> size;

    int box[size];

    for (int i = 0; i < size; i++)
    {
        cout << "box[" << i << "] = ";
        cin >> box[i];
        if(box[i] > max){
            max = box[i];
        }
    }
    cout << "Maximum value: " << max;
}