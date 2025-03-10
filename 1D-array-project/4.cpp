#include <iostream>
using namespace std;

int main()
{
    int size, max1 = 0, max2 = 0;

    cout << "enter your array size: ";
    cin >> size;

    int box[size];
    for (int i = 0; i < size; i++)
    {
        cout << "box[" << i << "] = ";
        cin >> box[i];
    }
    for (int i = 0; i < size; i++)
    {
        if (box[i] > max1)
        {
            max1 = box[i]; 
        }
    }
    for (int i = 0; i < size; i++)
    {
        if (box[i] != max1 && box[i] > max2)
        {
            max2 = box[i];
        }
    }
    cout << "Second largest value: " << max2;
}