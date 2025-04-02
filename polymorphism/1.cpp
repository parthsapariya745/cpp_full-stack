// Method overloading //
#include<iostream>
using namespace std;

class student{
    public:
    void datatype(int a) {
        cout << "INT: " << a << endl;
    }
    void datatype(double b) {
        cout << "DOUBLE: " << b << endl;
    }
    void datatype(char c) {
        cout << "CHAR: " << c << endl;
    }
    void datatype(string d) {
        cout << "STRING: " << d << endl;
    }
};
int main() {
    student obj;
    obj.datatype(5);
    obj.datatype(5.45);
    obj.datatype('P');
    obj.datatype("Parth");
}