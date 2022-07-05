#include<iostream>
#include<queue>
using namespace std;

int main() {
    // creation
    queue <int> q;
    // push element
    q.push(3);
    q.push(5);
    q.push(8);
    q.push(9);
    // front element
    cout << " Front " << q.front() << endl;
    // remove element
    q.pop();
    // size
    cout << " Size " << q.size() << endl;
    // empty or not
    cout << " Is Empty " << q.empty() << endl;
    // printing Queue
    while (!q.empty()) {
        cout << q.front() << " ";
        q.pop();
    }
    return 0;
}