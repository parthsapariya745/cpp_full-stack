// linked list //
#include<iostream>
using namespace std;

struct node {
    int data;
    node *next;

    node(int val) {
        data = val;
        next = NULL;
    }
};
void insertBegin(int val, node *&head) {
    node *temp = new node(val);

    if (head != NULL) {
        temp->next = head;
    }
    head = temp;
}
void insertAnyPosition(int insertPos, int val, node *&head) {
    node *n1 = head;
    
    while (n1 != NULL) {
        if (n1->data == insertPos) {
            node *temp = new node(val);
            temp->next = n1->next;
            n1->next = temp;
        }        
        n1 = n1->next;
    }
}
void insertEnd(int val, node *&head) {
    node *temp = new node(val);

    if (head == NULL) {
        head = temp;
    }
    else
    {
        node *n1 = head;
        while (n1->next != NULL)
        {
            n1 = n1->next;
        }
        n1->next = temp;
    }
}
void read(node *head) {
    node *temp = head;

    cout << "data: ";
    while (temp != NULL) {
        cout << temp->data << " ";   
        temp = temp->next;
    }
    cout << endl;
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
}
int main() {
    int user, insertOption, val, position;
    node *head = NULL;
    do {
        cout << "--- O P T I O N ---" << endl;
        cout << "1. Insert" << endl;
        cout << "2. Read" << endl;
        cout << "3. Update" << endl;
        cout << "4. Delete" << endl;
        cout << "0. Exit" << endl;
        cout << "--------------------------" << endl;

        cout << "Enter your option: ";
        cin >> user;

        switch (user) {
        case 1: // Insert
            cout << "1. Insert at the Beginning" << endl;
            cout << "2. Insert at the Any Position" << endl;
            cout << "3. Insert at the Ending" << endl;
            cout << "--------------------------" << endl;

            cout << "Enter your Insert Option: ";
            cin >> insertOption;

            if (insertOption == 2) {
                cout << "Enter your Insert Position: ";
                cin >> position;
            }
            if (insertOption >= 1 && insertOption <= 3) {
                cout << "Enter Insert value: ";
                cin >> val;
            }

            switch (insertOption) {
            case 1: // begin
                insertBegin(val, head);
                break;
            case 2: // any position
                insertAnyPosition(position, val, head);
                break;
            case 3: // end
                insertEnd(val, head);
                break;
            default:
                cout << "Invalid option" << endl;
                break;
            }
            break;
        case 2: // read
            if (head != NULL) read(head); 
            else cout << "please press 1 insert value";
            break;
        case 3: // update
            if (head != NULL) {
                cout << "Enter your Update position: ";
                cin >> position;

                update(position, head);
            }
            else cout << "please press 1 insert value";
            break;
        case 4: // delete
            if (head != NULL) {
                cout << "Enter your Delete position: ";
                cin >> position;
            
                remove(position, head);
            }
            else cout << "please press 1 insert value";
            break;
        case 0:
            cout << "E X I T" << endl;
            break;
        default:
            cout << "Invalid option" << endl;
            break;
        }
    } while (user != 0);
}