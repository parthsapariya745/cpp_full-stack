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
void insertBegin(int val, node *&head) {
    node *temp = new node(val);

    if (head != NULL) temp->next = head;
    head = temp;
}
void insertEnd(int val, node *&head) {
    node *n1 = new node(val);

    if (head == NULL) head = n1;
    else {
        node *temp = head;
        while (temp->next != NULL) temp = temp->next;
        temp->next = n1;
    }
}
void insertAnyPosition(int anyPosition, node *&head) {
    node *temp = head;
    int val;

    while (temp != NULL) {
        if (temp->data == anyPosition) {
            cout << "Enter the value: ";
            cin >> val;

            node *n1 = new node(val);
            n1->next = temp->next;      
            temp->next = n1;
        }
        temp = temp->next;  
    }
    cout << "-----------------------------" << endl;
}
void read(node *head) {
    node *temp = head;

    while (temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl << "-----------------------------" << endl;
}
void update(int anyPosition, node *head) {
    node *temp = head;
    int val;

    while (temp != NULL) {
        if (temp->data == anyPosition) {
            cout << "Enter update value: ";
            cin >> val;

            temp->data = val;
        }
        temp = temp->next;  
    }
    cout << "-----------------------------" << endl;
}
void remove(int deletePosition, node *&head) {
    node *temp = head;
    
    if (deletePosition == 1) {
        head = head->next;
        delete temp;
        temp = NULL;
    }
    else {
        int count = 1;
        while (temp != NULL && count < deletePosition - 1) {
            temp = temp->next;
            count++;
        }
        node *n1 = temp->next;
        temp->next = n1->next;
        delete n1;
        n1 = NULL;
    }
    cout << "-----------------------------" << endl;
}
int main() {
    int user, val, anyPosition, deletePosition;
    node *head = NULL;
    do {
        cout << endl << "-------- O P T I O N --------" << endl << endl;
        cout << "1. Create / Insert" << endl;
        cout << "2. Read" << endl;
        cout << "3. Update" << endl;
        cout << "4. Delete / Remove" << endl;
        cout << "0. Exit" << endl;
        cout << "-----------------------------" << endl;

        cout << "Enter your number: ";
        cin >> user;

        switch (user) {
        case 1: // I N S E R T
            cout << "1. beginning of the list" << endl;
            cout << "2. ending of the list" << endl;
            cout << "3. any position of the list" << endl;
            cout << "0. Exit" << endl;
            cout << "-----------------------------" << endl;

            int insertPos;

            cout << "Choose your insert option: ";
            cin >> insertPos;

            if (insertPos >= 1 && insertPos <= 2) {
                cout << "Enter the value: ";
                cin >> val;
            }
            cout << "-----------------------------" << endl;
            switch (insertPos) {
            case 1: // Begin
                insertBegin(val, head);
                break;
            case 2: // End
                insertEnd(val, head);
                break;
            case 3: // Any Position
                cout << "Enter value position: ";
                cin >> anyPosition;
                
                insertAnyPosition(anyPosition, head);
                break;
            case 0:
                cout << endl << "- E X I T -" << endl << endl;
                break;
            default:
                cout << "Invalid position" << endl << endl << "-----------------------------" << endl;
                break;
            }
            break;
        case 2: // R E A D
            if (head != NULL) read(head);
            else cout << "please press 1 insert value" << endl << "-----------------------------" << endl;
            break;
        case 3: // U P D A T E
            if (head != NULL) {
                cout << "Enter value position: ";
                cin >> anyPosition;

                update(anyPosition, head);
            }
            else cout << "please press 1 insert value" << endl << "-----------------------------" << endl;
            break;
        case 4: // D E L E T E
            if (head != NULL) {
                cout << "Enter your delete position: ";
                cin >> deletePosition;
            
                remove(deletePosition, head);
            }
            else cout << "please press 1 insert value" << endl << "-----------------------------" << endl;
            break;
        case 0:
            cout << endl << "-------- E X I T --------" << endl << endl;
            break;
        default:
            cout << "Invalid number" << endl << "-----------------------------" << endl;
            break;
        }
    } while (user != 0);
}