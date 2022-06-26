// LIFO(Last In First Out)
// Stack is a DataStructure it follows Last In First Out.
#include<iostream>
#include<stack>
using namespace std;

void printMiddle(stack<int>& st, int totalElemnt) {

}

int main() {
    // creation
    stack<int> st;
    // insertion
    // st.push(5);
    // // check empty or not
    // cout << st.empty() << endl;
    // // check size
    // cout << st.size() << endl;
    // // top element
    // cout << st.top() << endl;

    // Q1 
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        int num;
        cin >> num;
        st.push(num);
    }
    while (!st.empty()) {
        cout << st.top() << " ";
        st.pop();
    }
    cout << endl;
    return 0;
}