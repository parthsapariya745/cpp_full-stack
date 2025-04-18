// C R U D in linked list //
#include <iostream>
using namespace std;

struct node {
public:
    int data;
    node *next;

    node(int val) {
        data = val;
        next = NULL;
    }
};
void insertBegin(int Val, node *&head) {
    node *temp = new node(Val);

    if (head != NULL) {
        temp->next = head;
    } 
    head = temp;
}
void insertEnd(int Val, node *&head) {
    node *n1 = new node(Val);

    if (head == NULL) {
        head = n1;
    } 
    else {
        node *temp = head;
        while (temp->next != NULL) {
            temp = temp->next;
        }
        temp->next = n1;
    }
}
void insertAnyPosition(int anyPosition, int Val, node *&head) {
    node *temp = head;

    while (temp != NULL) {
        if (temp->data == anyPosition) {
            cout << "Enter the value: ";
            cin >> Val;

            node *n1 = new node(Val);
            n1->next = temp->next;      
            temp->next = n1;
        }
        temp = temp->next;  
    }
}
void read(int Val, node *head) {
    node *temp = head;

    while (temp != NULL) {
        cout << temp->data << " - " << temp->next << endl;
        temp = temp->next;
    }
    cout << "-----------------------------" << endl;
}
void update(int anyPosition, int Val, node *head) {
    node *temp = head;

    while (temp != NULL) {
        if (temp->data == anyPosition) {
            cout << "Enter the value: ";
            cin >> Val;

            temp->data = Val;
        }
        temp = temp->next;  
    }
    cout << "-----------------------------" << endl;
}
void remove(int deletePosition, node *head) {
    node *temp = head;
    
    while (temp != NULL) {
        if (deletePosition == 1) {
            node *n1 = NULL;
            head->next = n1;
            n1 = head;
            head = NULL;
        }
        else {
            
            break;
        }
        temp = temp->next;  
    }
    cout << "-----------------------------" << endl;
}
int main() {
    int user, Val, anyPosition, deletePosition;
    node *head = NULL;
    do {
        cout << "Press 1 Create / Insert" << endl;
        cout << "Press 2 read" << endl;
        cout << "Press 3 update" << endl;
        cout << "Press 4 delete" << endl;
        cout << "Press 0 exit" << endl;
        cout << "-----------------------------" << endl;

        cout << "Enter your number: ";
        cin >> user;

        switch (user) {
        case 1:
            cout << endl << "-------- I N S E R T --------" << endl << endl;
            cout << "Press 1 beginning of the list" << endl;
            cout << "Press 2 ending of the list" << endl;
            cout << "Press 3 any position of the list" << endl;
            cout << "-----------------------------" << endl;

            int insertPos;

            cout << "Choose your insert number: ";
            cin >> insertPos;

            if (insertPos >= 1 && insertPos <= 2) {
                cout << "Enter the value: ";
                cin >> Val;
            }
            cout << "-----------------------------" << endl;
            switch (insertPos) {
            case 1: // begin
                insertBegin(Val, head);
                break;
            case 2: // end
                insertEnd(Val, head);
                break;
            case 3: // any position
                cout << "Enter value position: ";
                cin >> anyPosition;
                
                insertAnyPosition(anyPosition, Val, head);
                break;
            default:
                cout << "Invalid position" << endl << endl;
                cout << "-----------------------------" << endl;
                break;
            }
            break;
        case 2:
            cout << endl << "-------- R E A D --------" << endl << endl;
            read(Val, head);
            break;
        case 3:
            cout << endl << "-------- U P D A T E --------" << endl << endl;

            cout << "Enter value position: ";
            cin >> anyPosition;

            update(anyPosition, Val, head);
            break;
        case 4:
            cout << endl << "-------- D E L E T E --------" << endl << endl;

            cout << "Enter your delete position: ";
            cin >> deletePosition;
            
            remove(deletePosition, head);
            break;
        case 0:
            cout << "E X I T!" << endl;
            break;
        default:
            cout << "Invalid number" << endl;
            break;
        }
    } while (user != 0);
}