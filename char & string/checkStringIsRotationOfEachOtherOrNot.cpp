#include<iostream>
using namespace std;

bool check(string s1, string s2) {
    int m = s1.length();
    int n = s2.length();
    int end = m - n + 1;
    for (int i = 0; i < end; i++) {
        bool isPresent = true;
        for (int j = 0; j < n; j++) {
            if (s1[i + j] != s2[j]) {
                isPresent = false;
                break;
            }
        }
        if (isPresent == true) {
            return true;
        }
    }
    return false;
}

int main() {
    string s1 = "ABCD";
    string s2 = "CDAB";
    string temp = s1 + s2;
    cout << check(temp, s2) << endl;
    return 0;
}