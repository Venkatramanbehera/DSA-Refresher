#include<iostream>
#include<stack>
using namespace std;

int minimalNormalTraversal(string str) {
    stack<char> s;
    int ans = 0;
    for (int i = 0; i < str.length(); i++) {
        if (str[i] == '{') {
            s.push('{');
        }
        else {
            if (!s.empty()) {
                s.pop();
            }
            else {
                s.push('{');
                ans++;
            }
        }
    }
    if ((s.size() & 1) == 1) {
        return -1;
    }
    ans += s.size() / 2;
    return ans;
}

int main() {
    string s = "{{{{}}";
    cout << minimalNormalTraversal(s) << endl;
    return 0;
}