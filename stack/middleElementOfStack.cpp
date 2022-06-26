#include<iostream>
#include<stack>
using namespace std;

void printMiddle(stack <int>& st, int totalSize) {
    if (st.size() == (totalSize / 2) + 1) {
        cout << st.top() << endl;
        return;
    }
    int element = st.top();
    st.pop();
    printMiddle(st, totalSize);
    st.push(element);
}

void insertAtBottom(stack <int>& st, int item) {
    // base case 
    if (st.empty()) {
        st.push(item);
        return;
    }

    // step 1
    int topElement = st.top();
    st.pop();

    // step 2 (Recursive Call)
    insertAtBottom(st, item);

    // step 3 (Backtrack)
    st.push(topElement);
}

void reveseStack(stack<int>& st) {
    // BC
    if (st.empty()) {
        return;
    }

    // step 1
    int topElement = st.top();
    st.pop();

    // step 2
    reveseStack(st);

    // step 3
    insertAtBottom(st, topElement);
}

int main() {
    stack <int> st;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);
    st.push(60);
    // printMiddle(st, st.size());
    // insertAtBottom(st, 90);
    // while (!st.empty()) {
    //     cout << st.top() << " ";
    //     st.pop();
    // }
    // cout << endl;
    reveseStack(st);
    while (!st.empty()) {
        cout << st.top() << " ";
        st.pop();
    }
    return 0;
}