#include<iostream>
using namespace std;

bool can(int arr[], int i, int& n) {
    cout << "Reached i " << i << " N " << n << endl;
    // Bc -
    if (i >= n) {
        // cout << "Reached i " << i << " N " << n << endl;
        cout << "Base case1" << endl;
        return true;
    }
    if (arr[i] == 0 && i < n) {
        // cout << "Reached out i " << i << " N " << n << endl;
        cout << "Base case2" << endl;
        return false;
    }
    int ind = arr[i];
    cout << "arr[i] " << arr[i] << endl;
    // RR
    bool result = can(arr, arr[i + ind + 1], n);
    return result;
}

void canReach(int A[], int N) {
    // code here
    // cout << "Can" <<
    int index = 0;
    cout << can(A, index, N) << endl;;
    // return 1;
}

int main() {
    int arr[] = { 1, 2, 0, 3, 0, 0 };
    int size = 6;
    canReach(arr, size);
    return 0;
}