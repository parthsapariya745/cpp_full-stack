#include<iostream>
using namespace std;

// abstrac class and surface //
class myClass1 {
    public:
    virtual void fun() = 0;
    virtual void fun() = 0;
    virtual void fun() = 0;
};
// abstrac class //
class myClass2 {
    public:
    virtual void fun() = 0;
    void fun2() {
        cout << "hello" << endl;
    }
};
// normal class //
class myClass3 {
    public:
    void fun() {
        cout << "hi" << endl;
    }
};
int main() {
    
}