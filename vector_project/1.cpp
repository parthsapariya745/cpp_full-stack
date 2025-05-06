#include<iostream>
#include<vector>
using namespace std;

template<typename p1, typename p2>
class memoryCalculate {
    private:
    p1 ID;
    p2 name;
    
    public:
    memoryCalculate(p1 ID, p2 name) {
        this->ID = ID;
        this->name = name;
    }
    void display() {
        cout << "------------------------------" << endl;
        cout << "Student ID   : " << this->ID << endl;
        cout << "Student name : " << this->name << endl;
    }
};
int main() {
    int ID;
    string name;

    cout << "Enter your ID   : ";
    cin >> ID;
    cout << "Enter your name : ";
    cin >> name;

    memoryCalculate<int, string> details(ID, name);
    details.display();
}