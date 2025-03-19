#include<iostream>
using namespace std;
// chain of pointer
int main()
{
    int a = 10;

    int *ptr1;
    ptr1 = &a;

    int **ptr2;
    ptr2 = &ptr1;

    int ***ptr3;
    ptr3 = &ptr2;

    int ****ptr4;
    ptr4 = &ptr3;

    int *****ptr5;
    ptr5 = &ptr4;

    cout << "SUM = " << *****ptr5 + *****ptr5;
}