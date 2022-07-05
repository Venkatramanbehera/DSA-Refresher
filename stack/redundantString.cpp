// Q -> check the string is redundant or not
// (a + b) - yes
// (a) - no
#include<iostream>
#include<stack>
using namespace std;

bool checkRedundant(string s) {
    stack <char> st;

    for (int i = 0; i < s.length(); i++) {
        char ch = s[i];
        if (ch == '(' || ch == '+' || ch == '-' || ch == '*' || ch == '/') {
            st.push(ch);
        }
        else if (ch == ')') {
            bool isCharPresent = true;
            while (st.top() != '(') {
                char topChar = st.top();
                if (topChar == '+' || topChar == '-' || topChar == '*' || topChar == '/') {
                    isCharPresent = false;
                }
                st.pop();
            }
            if (isCharPresent) {
                return true;
            }
            st.pop();
        }
    }
    return false;
}

int main() {
    string s = "((a+b))";
    cout << " Redundant " << checkRedundant(s) << endl;
    return 0;
}