#include<iostream>
#include<queue>
#include<stack>
using namespace std;

queue<int> modifyQueue(queue<int> q, int k) {
    int size = q.size();
    stack<int> s;
    int count = 0;
    while (count < k) {
        s.push(q.front());
        q.pop();
        count++;
    }
    while (!s.empty()) {
        q.push(s.top());
        s.pop();
    }
    count = 0;
    while (count < size - k) {
        int res = q.front();
        q.pop();
        q.push(res);
        count++;
    }
    // cout << q.front() << endl;
    return q;
}

int main() {
    int k = 3;
    queue<int> q;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    q.push(5);
    queue<int> result = modifyQueue(q, k);
    while (!result.empty()) {
        cout << result.front() << " ";
        result.pop();
    }
    return 0;
}