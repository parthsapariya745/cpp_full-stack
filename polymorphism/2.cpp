// Method overriding //
#include<iostream>
using namespace std;

class parent {
    public:
    void fun() {
        cout << "parent class" << endl;
    }
};
class child : public parent {
    public:
    void fun() {
        cout << "child class" << endl;
    }
};
int main() {
    child obj;
    obj.fun();
}