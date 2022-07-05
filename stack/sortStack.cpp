#include<iostream>
#include<stack>
using namespace std;

void insertAtPos(stack<int>& s, int ele) {
    // BC
    if (s.empty() || ele > s.top()) {
        s.push(ele);
        return;
    }

    // step 1
    int data = s.top();
    s.pop();

    // RR
    insertAtPos(s, ele);

    // Backtracking
    s.push(data);
}

void sortStack(stack<int>& s) {
    if (s.empty()) {
        return;
    }

    int data = s.top();
    s.pop();

    sortStack(s);

    insertAtPos(s, data);
}

int main() {
    stack<int> s;
    s.push(9);
    s.push(3);
    s.push(5);
    sortStack(s);
    // insertAtPos(s, 2);
    while (!s.empty()) {
        cout << s.top() << " ";
        s.pop();
    }
    return 0;
}