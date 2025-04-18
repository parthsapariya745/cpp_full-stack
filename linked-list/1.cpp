// singly linked list //
#include <iostream>
using namespace std;

struct node {
public:
    int data;
    node *next;

    void fun() {
        node *head = new node();
        head->data = 10;

        node *ptr = new node();
        ptr->data = 20;
        head->next = ptr;
        
        ptr = new node();
        ptr->data = 30;
        head->next->next = ptr;
        
        ptr = new node();
        ptr->data = 40;
        head->next->next->next = ptr;
        
        ptr = new node();
        ptr->data = 50;
        ptr->next = NULL;
        head->next->next->next->next = ptr;
        
        ptr = head;
        while (ptr != NULL) {
            cout << ptr->data << " -- " << ptr->next << endl;
            ptr = ptr->next;
        }
    }
};
int main() {
    node obj1;
    obj1.fun();
}