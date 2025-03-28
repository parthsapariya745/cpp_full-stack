#include<iostream>
using namespace std;

class myClass {
public:
    static int a;
    static float b;
    static char c;
    static string d;
};
int myClass::a = 10;
float myClass::b = 10.52;
char myClass::c = 'P';
string myClass::d = "parth sapariya";
int main() {
    cout << myClass::a << endl << myClass::b << endl << myClass::c << endl << myClass::d;
    cout << endl << "-------------------" << endl;
    cout << sizeof(myClass);
}