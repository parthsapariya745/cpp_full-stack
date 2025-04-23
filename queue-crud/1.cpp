// C R U D in Queue //
#include<iostream>
using namespace std;

void enqueue(int val, int &start, int &end, int queue[]) {
    for (int i = start; i <= end; i++) {
        queue[end] = val;
        cout << queue[i] << " ";
    }
    end++;
    cout << endl << "--------------------------------------" << endl;
}
void dequeue(int &start, int &end, int queue[]) {
    start++;
    for (int i = start; i < end; i++) {
        cout << queue[i] << " ";
    }
    cout << endl << "--------------------------------------" << endl;
}
void front( int &start, int queue[]) {
    cout << "Front value: " << queue[start] << endl;
    cout << "--------------------------------------" << endl;
}
void rear(int &end, int queue[]) {
    cout << "Rear value: " << queue[end - 1] << endl;
    cout << "--------------------------------------" << endl;
}
void isEmpty(int &start, int &end, int queue[]) {
    if (start == -1 && end == -1) {
        cout << "Queue is Empty" << endl;
    }
    else {
        cout << "Queue is not Empty" << endl;
    }
    cout << "--------------------------------------" << endl;
}
void isFull(int &start, int &end, int queue[]) {
    if (start == -1 && end == -1) {
        cout << "Queue is not Full" << endl;
    }
    else {
        cout << "Queue is Full" << endl;
    }
    cout << "--------------------------------------" << endl;
}
void size(int &start, int &end, int queue[]) {
    cout << "Size of Queue: " << end - start << endl;
    cout << "--------------------------------------" << endl;
}
int main() {
    int option, val, start = -1, end = -1;
    int *queue = new int[option];  
    do {
        cout << "--- O P T I O N ---" << endl;
        cout << "1. Enqueue" << endl;
        cout << "2. Dequeue" << endl;
        cout << "3. Front" << endl;
        cout << "4. Rear" << endl;
        cout << "5. isEmpty" << endl;
        cout << "6. isFull" << endl;
        cout << "7. Size" << endl;
        cout << "0. Exit" << endl;
        cout << "--------------------------------------" << endl;

        cout << "Choose your option: ";
        cin >> option;

        switch (option) {
        case 1:
            cout << "Enter enqueue value: ";
            cin >> val;
            if (start == -1 && end == -1) {
                start++;
                end++;
            }
            enqueue(val, start, end, queue);
            break;
        case 2:
            dequeue(start, end, queue);
            break;
        case 3:
            front(start, queue);
            break;
        case 4:
            rear(end, queue);
            break;
        case 5:
            isEmpty(start, end, queue);
            break;
        case 6:
            isFull(start, end, queue);
            break;
        case 7:
            size(start, end, queue);
            break;
        case 0:
            cout << "- E X I T -" << endl;
            break;
        default:
            cout << "Invalid option" << endl;
            break;
        }
    } while (option != 0);
}