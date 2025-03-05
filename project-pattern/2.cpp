#include<iostream>
using namespace std;

int main(){
    int count = 11;

    for (int row = 1; row <= 4; row++)
    {
        for (int col = 1; col <= row; col++)
        {
            cout << count << " ";
            count++;
        }
        cout << endl;
    }
}