#include<iostream>
using namespace std;

class student{
public:
    static int fun() {
        string name = "Parth";
        int age = 18;
        cout << name << endl << age;
        cout << endl << "-------------------" << endl;
        cout << sizeof(name) << endl << sizeof(age);
    }
};
int main() {
    student::fun();
}