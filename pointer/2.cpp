#include<iostream>
using namespace std;
// array of pointer
int main() {
    int a[6] = {2,6,4,5,8,7};
    
    for (int i = 0; i < 6; i++)
    {
        cout << i <<" - " << &a[i] << endl;
    }    
}