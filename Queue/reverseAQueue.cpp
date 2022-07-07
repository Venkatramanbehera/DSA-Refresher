#include<iostream>
#include<queue>
#include<stack>
using namespace std;

void reverseQueue(queue<int> q) {
    if (q.empty()) {
        return;
    }

    int ele = q.front();
}

int main() {
    queue<int> q;
    q.push(2);
    q.push(4);
    q.push(6);
    q.push(8);
    // queue -> stack
    stack<int> s;
    while (!q.empty()) {
        int ele = q.front();
        q.pop();
        s.push(ele);
    }
    // stack -> queue
    while (!s.empty()) {
        int ele = s.top();
        s.pop();
        q.push(ele);
    }
    // print
    while (!q.empty()) {
        cout << q.front() << " ";
        q.pop();
    }
    return 0;
}