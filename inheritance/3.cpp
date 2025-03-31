// Multiple inheritance //
#include<iostream>
using namespace std;

class parent1 {
    public:    
    string name;
    int age;

    parent1(string name, int age) {
        this->name = name;
        this->age = age;
    }
    void display() {
        cout << "My father name is " << name << endl;
        cout << "Age is " << age << " Years old" << endl;
        cout << "----------------------------------" << endl;
    }
};
class parent2 {
    public:    
    string name;
    int age;

    parent2(string name, int age) {
        this->name = name;
        this->age = age;
    }
    void display() {
        cout << "My mother name is " << name << endl;
        cout << "Age is " << age << " Years old" << endl;
        cout << "----------------------------------" << endl;
    }
};
class child : public parent1, public parent2 {
    public:    
    string name;
    int age;

    child(string name, int age) : parent1(name, age), parent2(name, age) {
        this->name = name;
        this->age = age;
    }
    void display() {
        cout << "My name is " << name << endl;
        cout << "Age is " << age << " Years old" << endl;
    }
};
int main() {
    parent1 f("kalpeshbhai",42);
    parent2 m("binaben",43);
    child p("parth",18);
    
    f.display();
    m.display();
    p.display();
}
//         parent1      parent2

//                 child