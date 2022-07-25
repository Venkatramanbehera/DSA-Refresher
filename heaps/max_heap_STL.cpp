#include<iostream>
#include<queue>
using namespace std;

int main() {
    // MAX HEAP
    priority_queue<int> maxHeap;
    maxHeap.push(2);
    maxHeap.push(5);

    cout << maxHeap.top() << endl;
    maxHeap.pop();
    cout << maxHeap.top() << endl;
    cout << " Empty Queue " << maxHeap.empty() << endl;
    // MIN HEAP
    priority_queue<int, vector <int>, greater<int> > minHeap;
    minHeap.push(9);
    minHeap.push(1);
    cout << minHeap.top() << endl;
    return 0;
}