#include<iostream>
#include<queue>
#include<bits/stdc++.h>
using namespace std;

vector<int> getKthLargest(int arr[], int n, int k) {
    priority_queue<int, vector<int>, greater<int> > minHeap;
    for (int i = 0; i < k; i++) {
        minHeap.push(arr[i]);
    }
    for (int i = k; i < n; i++) {
        if (arr[i] > minHeap.top()) {
            minHeap.pop();
            minHeap.push(arr[i]);
        }
    }
    vector<int> result;
    while (!minHeap.empty()) {
        result.push_back(minHeap.top());
        minHeap.pop();
    }
    sort(result.begin(), result.end(), greater<int>());
    return result;
}

int main() {
    int arr[] = { 12, 5, 787, 1, 23 };
    int n = 5;
    int k = 2;
    vector<int> result = getKthLargest(arr, n, k);
    for (int i = 0; i < result.size(); i++) {
        cout << result[i] << " ";
    }
    return 0;
}