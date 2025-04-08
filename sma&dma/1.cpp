// Stack Memory Allocation // 
#include<iostream>
using namespace std;

int fun(int box[]) {
    for (int i = 0; i < 5; i++)
    {
        cout << box[i] << " ";
    }
}
int main()
{
    int box[5] = {10,20,30,40,50};

    fun(box);
}