// merge sort //
#include<iostream>
using namespace std;

void merge(int box[], int low, int mid, int high) {
    int temp1 = mid - low + 1; // 0 - 0 + 1 = temp1 = 1
    int temp2 = high - mid;    // 1 - 0     = temp2 = 1

    int left[temp1]; 
    for (int i = 0; i < temp1; i++) {
        left[i] = box[low + i];
    }

    int right[temp2]; 
    for (int j = 0; j < temp2; j++) {
        right[j] = box[mid + 1 + j];
    }

    int i = 0, j = 0, k = low;

    while (i < temp1 && j < temp2) {
        if (left[i] <= right[j]) {
            box[k] = left[i];
            i++;
        }
        else {
            box[k] = right[j];
            j++;   
        }
        k++;
    }
    while (i < temp1) {
        box[k] = left[i];
        i++;
        k++;
    }
    while (j < temp2) {
        box[k] = right[j];
        j++; 
        k++; 
    }
}
void mergeSort(int box[], int low, int high) {
    if (low == high) return;

    int mid = (low + high) / 2;
    mergeSort(box, low, mid);
    mergeSort(box, mid + 1, high);

    merge(box, low, mid, high); // 0 0 1
}
int main() {
    int size, low, high;
    cout << "Enter size of array: ";
    cin >> size;

    int box[size];
    for (int i = 0; i < size; i++) {
        cout << "box[" << i << "] = ";
        cin >> box[i]; 
    }
    cout << "Elements of array : ";
    for (int i = 0; i < size; i++) cout << box[i] << " "; 

    mergeSort(box, 0, size - 1);

    cout << endl << "Assending order   : ";
    for (int i = 0; i < size; i++) cout << box[i] << " "; 
}