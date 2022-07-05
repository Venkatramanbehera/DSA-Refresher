#include<iostream>
#include<stack>
using namespace std;

// Q1 - sort the stack

void sortInsert(stack<int>& st, int data) {
    // BC
    if (st.empty() || st.top() < data) {
        st.push(data);
        return;
    }

    int topEle = st.top();
    st.pop();

    sortInsert(st, data);
    st.push(topEle);
}

void sortStack(stack<int>& st) {
    if (st.empty()) {
        return;
    }
    int topEle = st.top();
    st.pop();

    sortStack(st);

    sortInsert(st, topEle);
}

// Q2 - check redundant


int main() {
    stack<int > s;
    s.push(2);
    s.push(4);
    s.push(1);
    s.push(3);
    sortStack(s);
    while (!s.empty()) {
        cout << s.top() << " ";
        s.pop();
    }
    return 0;
}