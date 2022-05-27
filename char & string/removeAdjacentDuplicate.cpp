#include<iostream>
using namespace std;

void removeAdjacent(string s) {
    string result;
    for (char S : s) {
        if (result.empty() || result.back() != S) {
            result.push_back(S);
        }
        else {
            result.pop_back();
        }
    }
    cout << result << endl;
}

int main() {
    string s = "azxxzy";
    // cout << s.empty() << endl;
    removeAdjacent(s);
    return 0;
}