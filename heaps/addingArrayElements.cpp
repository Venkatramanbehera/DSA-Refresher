#include<iostream>
#include<vector>
#include<queue>
using namespace std;

int minOperations(int arr[], int n, int k) {
    // code here
    int count = 0;
    priority_queue<int, vector<int>, greater<int>  > minHeap;
    for (int i = 0; i < n; i++) {
        minHeap.push(arr[i]);
    }
    while (minHeap.top() < k) {
        count++;
        int a = minHeap.top();
        minHeap.pop();
        int b = minHeap.top();
        minHeap.pop();
        minHeap.push(a + b);
    }
    return count;
}

int main() {
    int arr[] = { 2,1,5,10 };
    int k = 5;
    int n = 4;
    cout << minOperations(arr, n, k);
    return 0;
}
//  6 ,3, 7, 1, 5, 8, 9, 6, 8