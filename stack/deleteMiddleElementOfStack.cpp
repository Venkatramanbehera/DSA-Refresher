#include<iostream>
#include<stack>
using namespace std;

void deleteMid(stack<int>& s, int sizeOfStack) {
    // base case
    if (s.size() == (sizeOfStack / 2) + 1) {
        // cout << " Middle Element " << s.top() << endl;
        s.pop();
        return;
    }

    // step 1
    int topEle = s.top();
    s.pop();

    // step 2
    deleteMid(s, sizeOfStack);

    // step 3
    s.push(topEle);
}

int main() {
    stack <int> st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    st.push(5);
    st.push(6);
    deleteMid(st, st.size());
    while (!st.empty()) {
        cout << st.top() << " ";
        st.pop();
    }
    return 0;
}