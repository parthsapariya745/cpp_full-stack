// Multilevel inheritance //
#include<iostream>
using namespace std;

class student{
    public:
    string name;

    student(string name) {
        this->name = name;
    }
};
class parth : public student{
    public:
    int age;

    parth(string name, int age) : student(name) {
        this->age = age;
    }
};
class child : public parth{
    public:
    int rollNo;

    child(string name, int age, int rollNo) : parth(name, age) {
        this->rollNo = rollNo;
    }

    void display() {
        cout << "My name is " << name << endl;
        cout << "Age is " << age << " Years old" << endl;
        cout << "Roll no is " << rollNo << endl;
    }
};
int main() {
    child s1("parth sapariya",18,2);
    s1.display();
}
//        grandparent

//          parent

//          child