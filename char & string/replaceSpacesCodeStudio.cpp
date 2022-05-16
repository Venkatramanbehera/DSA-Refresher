#include<iostream>
using namespace std;
// replace space with @40
string replaceSpace(string s1) {
    string res = "";
    for (int i = 0; i < s1.length(); i++) {
        if (s1[i] == ' ') {
            res.push_back('@');
            res.push_back('4');
            res.push_back('0');
        }
        else {
            res.push_back(s1[i]);
        }
    }
    return res;
}

int main() {
    string s1 = "Coding Ninjas Is A Coding Platform";
    cout << replaceSpace(s1) << endl;
    return 0;
}