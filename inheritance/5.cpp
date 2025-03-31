// Hybrid inheritance // 
#include<iostream>
using namespace std;

class mainParent {
    public:
    void fun1() {
        cout << "The class name is main parent" << endl;
    }
};
class parent1 : public mainParent {
    public:
    void fun2() {
        cout << "The class name is parent1" << endl;
    }
};
class parent2 : public mainParent {
    public:
    void fun3() {
        cout << "The class name is parent2" << endl;
    }
};
class child : public parent1, public parent2 {
    public:
    void fun4() {
        cout << "The class name is child" << endl;
    }
};
int main() {
    child obj;
    obj.parent1::fun1();
}
//            grandparent

//      parent1          parent2

//               child