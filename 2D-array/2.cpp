#include <iostream>
using namespace std;

int main()
{
    int Size,sum = 0;

    cout << "Enter your row & col size: ";
    cin >> Size;

    int box[Size][Size];

    cout << "Enter your array element: " << endl;
    for (int row = 0; row < Size; row++)
    {
        for (int col = 0; col < Size; col++)
        {
            cout << "box[" << row << "]" << "[" << col << "] = ";
            cin >> box[row][col];
        }
    }
    cout << endl;
    for (int row = 0; row < Size; row++)
    {
        for (int col = 0; col < Size; col++)
        {
            cout << box[row][col] << " ";
        }
        cout << endl;
    }
    cout << endl;
    for (int row = 0; row < Size; row++)
    {
        for (int col = 0; col < Size; col++)
        {
            if (row + col == Size - 1)
            {   
                cout << box[row][col] << " " << endl;
                sum += box[row][col];
            }         
        }
    }
    cout << "Diagonal element sum: " << sum;
}