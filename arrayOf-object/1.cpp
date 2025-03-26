#include<iostream>
using namespace std;

class teacher {
private:
    string name;
    string subject;
    int salary;
    int age;
    int experience;

public:
    void set(string a, string b, int c, int d, int e) {
        name = a;
        subject = b;
        salary = c;
        age = d;
        experience = e;
    }
    void get() {
        cout << "Teacher name is " << name << endl;
        cout << "subject of teacher " << subject << endl;
        cout << "salary of teacher " << salary << " RS. per month" << endl;
        cout << "Teacher is " << age << " years old" << endl;
        cout << "Teacher experience is " << experience << " years" << endl;
        cout << "- - - - - - - - - - - - - - - - - - - - - - - -" << endl;
    }
};
int main()
{
    teacher t[5];
    string nm,sub;
    int sly,a,exp;

    for (int i = 0; i < 5; i++)
    {
        cout << "Enter teacher Name: ";
        cin >> nm;
        cout << "Enter subject: ";
        cin >> sub;
        cout << "Enter salary: ";
        cin >> sly;
        cout << "Enter age: ";
        cin >> a;
        cout << "Enter experience: ";
        cin >> exp;
        cout << "- - - - - - - - - - - - - - - - - - - - - - - -" << endl;
        t[i].set(nm,sub,sly,a,exp);
    }
    for (int i = 0; i < 5; i++)
    {
        t[i].get();       
    }
}