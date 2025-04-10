// Dynamic Memory Allocation with oop //
#include <iostream>
using namespace std;

class Number {
private:
    int *num; 

public:
    Number(int value) {
        int *num = new int(value);  
        cout << "Value: " << *num << endl;
    }
    ~Number() {
        delete num;  
        num = NULL;
    }
};
int main() {
    Number n1(100);  
}