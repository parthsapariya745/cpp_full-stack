// doubly linked list // 
#include<iostream>
using namespace std;

class node {
    private:
    int data;
    node *prev;
    node *next;
    
    public:
    void fun() {
        node *head = new node();
        node *n2 = new node();
        node *n3 = new node();

        head->data = 10; head->prev = NULL; head->next = n2;
        n2->data = 20; n2->prev = head; n2->next = n3;
        n3->data = 30; n3->prev = n2; n3->next = NULL;
        
        cout << "Head Prev  : " << head->prev << endl << "n1 data    : " << head->data << endl << "n2 address : " << head->next << endl << endl; // head (n1)

        cout << "n1 address : " << n2->prev << endl << "n2 data    : " << n2->data << endl << "n3 address : " << n2->next << endl << endl; // n2

        cout << "n2 address : " << n3->prev << endl << "n3 data    : " << n3->data << endl << "Tail next  : " << n3->next << endl; // n3
    }
};
int main() {
    node obj1;
    obj1.fun();
}