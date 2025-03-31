// single inheritance //
#include<iostream>
using namespace std;

class student {
    public:
    string name;

    student(string name) {
        this->name = name;
    }
};
class parth : public student {
    public:
    int age;
    
    parth(string name, int age) : student(name) {
        this->age = age;
    }
    void display() {
        cout << "My name is: " << name << endl;
        cout << "Age is " << age << " years old" << endl; 
    }
};

int main() {
    parth s1("parth sapariya",18);
    s1.display();
}
//     parent

//     child