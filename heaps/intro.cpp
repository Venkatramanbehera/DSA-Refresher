#include<iostream>
using namespace std;

class Heap {
public:
    int arr[250];
    int size;
    Heap() {
        size = 0;
    }
    void insertAtHeap(int val) {
        size = size + 1;
        int index = size;
        arr[index] = val;

        while (index > 1) {
            int parentIndex = index / 2;
            if (arr[parentIndex] < arr[index]) {
                swap(arr[parentIndex], arr[index]);
                index = parentIndex;
            }
            else {
                break;
            }
        }
    }
    void deleteFromHeap() {
        if (size == 0) {
            cout << " Can not delete the Heap" << endl;
            return;
        }
        // step 1 swap 1st and last
        swap(arr[1], arr[size]);
        // step 2 size change
        size--;
        // step 3 - correct position
        int index = 1;
        while (index <= size) {
            int largest = index;
            int leftCh = 2 * index;
            int rightCh = 2 * index + 1;
            if (leftCh <= size && arr[leftCh] > arr[largest]) {
                largest = leftCh;
            }
            if (rightCh <= size && arr[rightCh] > arr[largest]) {
                largest = rightCh;
            }
            if (largest != index) {
                swap(arr[largest], arr[index]);
                index = largest;
            }
            else {
                break;
            }
        }
    }
    void print() {
        for (int i = 1; i <= size; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};

void heapify(int arr[], int n, int i) {
    int largest = i;
    int left = 2 * i;
    int right = (2 * i) + 1;
    if (left <= n && arr[left] > arr[largest]) {
        largest = left;
    }
    if (right <= n && arr[right] > arr[largest]) {
        largest = right;
    }
    if (largest != i) {
        swap(arr[largest], arr[i]);
        heapify(arr, n, largest);
    }
}

void makeHeap() {
    int arr[] = { -1, 2, 6, 8, 3, 7 };
    int n = 5;
    for (int i = n / 2; i >= 1; i--) {
        heapify(arr, n, i);
    }
    for (int i = 1; i <= n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    makeHeap();
    // Heap maxHeap;
    // maxHeap.insertAtHeap(2);
    // maxHeap.insertAtHeap(6);
    // maxHeap.insertAtHeap(3);
    // maxHeap.insertAtHeap(8);
    // maxHeap.insertAtHeap(7);
    // maxHeap.print();
    // maxHeap.deleteFromHeap();
    // maxHeap.print();
    return 0;
}