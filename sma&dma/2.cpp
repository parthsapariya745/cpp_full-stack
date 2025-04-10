// Dynamic Memory Allocation with procedural //
#include<iostream>
using namespace std;

int main()
{
    double *ptr = new double(20.45);

    cout << "value: " << *ptr << endl;
    cout << "address: " << ptr << endl;
    cout << "sizeof value: " << sizeof(*ptr) << " bytes" << endl;
    cout << "sizeof address: " << sizeof(ptr) << " bytes" << endl;
    
    delete ptr;
    ptr = NULL;

    cout << "address: " << ptr << endl;
}