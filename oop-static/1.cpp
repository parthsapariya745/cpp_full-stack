#include<iostream>
using namespace std;

int x = 20;
int main()
{
    int x = 10;
    cout << "x = " << x << endl << "x = " << ::x;
}