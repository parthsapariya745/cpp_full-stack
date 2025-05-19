// stack CRUD //
#include<iostream>
using namespace std;

void push(int top, int val, int stack[]) {
    for (int i = 0; i <= top; i++) {
        stack[top] = val;
        cout << stack[i] << " ";
    }
    cout << endl;
}
void pop(int top, int stack[]) {
    for (int i = 0; i <= top; i++) {
        cout << stack[i] << " ";
    }
    cout << endl;
}
void peek(int top, int stack[]) {
    cout << "Top value: " << stack[top] << endl;
}
void isEmpty(int top, int stack[]) {
    if (top == -1) {
        cout << "stack is empty" << endl;
    }
    else {
        cout << "stack is not empty" << endl;
    }
}
void isFull(int top, int stack[]) {
    if (top == -1) {
        cout << "stack is not full" << endl;
    }
    else {
        cout << "stack is full" << endl;
    }
}
void size(int top, int stack[]) {
    cout << "Size of Stack: " << top + 1 << endl;
}
int main() {
    int option, top = -1, val;
    int *stack = new int[option];

    do {
        cout << endl << "--- O P T I O N ---" << endl << endl;
        cout << "1. Push" << endl;
        cout << "2. Pop" << endl;
        cout << "3. Peek" << endl;
        cout << "4. isEmpty" << endl;
        cout << "5. isFull" << endl;
        cout << "6. Size" << endl;
        cout << "0. Exit" << endl;
        cout << "--------------------------------------" << endl;

        cout << "Choose your Option: ";
        cin >> option;

        switch (option) {
        case 1:
            top++;
            
            cout << "Enter stack value: ";
            cin >> val;

            push(top, val, stack);
            cout << "--------------------------------------" << endl;
            break;
        case 2:
            top--;
            
            pop(top, stack);
            cout << "--------------------------------------" << endl;
            break;
        case 3:
            peek(top, stack);
            cout << "--------------------------------------" << endl;
            break;
        case 4:
            isEmpty(top, stack);
            cout << "--------------------------------------" << endl;
            break;
        case 5:
            isFull(top, stack);
            cout << "--------------------------------------" << endl;
            break;
        case 6:
            size(top, stack);
            cout << "--------------------------------------" << endl;
            break;
        case 0:
            cout << endl << "- E X I T -" << endl << endl;
            break;
        default:
            cout << endl << "INVALID OPTION" << endl << endl;
            break;
        }
    } while (option != 0);    
}