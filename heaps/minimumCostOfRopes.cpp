#include<iostream>
#include<queue>
using namespace std;

int minCost(int arr[], int n) {
    int countSum = 0;
    priority_queue<int, vector<int>, greater<int> > minHeap;
    for (int i = 0; i < n; i++) {
        minHeap.push(arr[i]);
    }
    while (n > 1) {
        int firstElem = minHeap.top();
        minHeap.pop();
        int secondElem = minHeap.top();
        minHeap.pop();
        int result = firstElem + secondElem;
        cout << countSum << endl;
        countSum += result;
        minHeap.push(result);
        n--;
    }
    return countSum;
}

int main() {
    int arr[] = { 4, 2, 7, 6, 9 };
    int n = 5;
    cout << minCost(arr, n) << endl;
    return 0;
}