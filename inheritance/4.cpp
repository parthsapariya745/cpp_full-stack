// Hierarchical inheritance //
#include<iostream>
using namespace std;

class parent {
    public:
    void fun1() {
        cout << "The class name is parent" << endl;
    }
};
class child1 : public parent {
    public:
    void fun2() {
        cout << "The class name is child1" << endl;
    }
};
class child2 : public parent {
    public:
    void fun3() {
        cout << "The class name is child2" << endl;
    }
};
int main() {
    child1 a;
    a.fun1();
}
//            parent

//    child1          child2