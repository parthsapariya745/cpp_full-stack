// C R U D in Queue //
#include<iostream>
using namespace std;

void enqueue(int val, int queueSize, int &end, int queue[]) {
    if (end < queueSize - 1) {
        end++;
        queue[end] = val;
    }    
    else cout << endl << "Queue is Full" << endl;
    for (int i = 0; i <= end; i++) cout << queue[i] << " ";
    cout << endl << "--------------------------------------" << endl;
}
void dequeue(int &end, int queue[]) {
    for (int i = 0; i <= end; i++) queue[i] = queue[i + 1];
    end--;
    for (int i = 0; i <= end; i++) cout << queue[i] << " ";
    cout << endl << "--------------------------------------" << endl;
}
void front(int &start, int &end, int queue[]) {
    if (end >= start) cout << "Front value: " << queue[start] << endl;
    else cout << "Front value does not exist!" << endl;
    cout << "--------------------------------------" << endl;
}
void rear(int &start, int &end, int queue[]) {
    if (end >= start) cout << "Rear value: " << queue[end] << endl;
    else cout << "Rear value does not exist!" << endl;
    cout << "--------------------------------------" << endl;
}
void isEmpty(int &end, int queue[]) {
    if (end == -1) cout << "Queue is Empty" << endl;
    else cout << "Queue is not Empty" << endl;
    cout << "--------------------------------------" << endl;
}
void isFull(int queueSize, int &end, int queue[]) {
    if (end == queueSize - 1) cout << "Queue is Full" << endl;
    else cout << "Queue is not Full" << endl;
    cout << "--------------------------------------" << endl;
}
void size(int &end, int queue[]) {
    cout << "Size of Queue: " << end + 1 << endl << "--------------------------------------" << endl;
}
int main() {
    int option, queueSize, val, start = 0, end = -1;
    cout << "Enter queue size: ";
    cin >> queueSize;
    
    int *queue = new int[queueSize];  
    do {
        cout << "--- O P T I O N ---" << endl;
        cout << "1. Enqueue" << endl << "2. Dequeue" << endl << "3. Front" << endl << "4. Rear" << endl << "5. isEmpty" << endl << "6. isFull" << endl << "7. Size" << endl << "0. Exit" << endl;
        cout << "--------------------------------------" << endl;
        cout << "Choose your option: ";
        cin >> option;

        switch (option) {
        case 1:
            cout << "Enter enqueue value: ";
            cin >> val;
            enqueue(val, queueSize, end, queue);
            break;
        case 2:
            dequeue(end, queue);
            break;
        case 3:
            front(start, end, queue);
            break;
        case 4:
            rear(start, end, queue);
            break;
        case 5:
            isEmpty(end, queue);
            break;
        case 6:
            isFull(queueSize, end, queue); 
            break;
        case 7:
            size(end, queue);
            break;
        case 0:
            cout << "- E X I T -" << endl;
            delete[] queue;
            break;
        default:
            cout << "Invalid option" << endl;
            break;
        }
    } while (option != 0);
}