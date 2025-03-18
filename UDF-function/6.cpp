#include<iostream>
using namespace std;

int lar(){
    int size,lar = 0;
    cout << "enter array size: ";
    cin >> size;
    
    int box[size];
    for (int i = 0; i < size; i++)
    {
        cout << "enter array element: ";
        cin >> box[i];
        if (box[i] > lar)
        {
            lar = box[i];
        }
    }
    cout << "Largest element: " << lar;
}
int main()
{
    lar();
}