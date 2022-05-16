#include<iostream>
#include<vector>
using namespace std;

string reverse(string s) {
    int start = 0;
    int end = s.length() - 1;
    while (start < end) {
        swap(s[start++], s[end--]);
    }
    return s;
}

// (o/p) -> skeeg ziuq eitcapr edoc
// Tc - O(n^2)
// Sc - O(n) using a vector thats why
void reverseWord2(string s) {
    vector <string> temp;
    string s1 = "";
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == ' ') {
            temp.push_back(reverse(s1));
            s1 = "";
        }
        else {
            s1 += s[i];
        }
    }
    temp.push_back(reverse(s1));
    for (int i = 0; i < temp.size(); i++) {
        cout << temp[i] << " ";
    }
}

// (o/p) -> code practice quiz geeks
// Tc - O(n)
// Sc - O(n) using a vector thats why
void reverseWord(string s) {
    vector <string> temp;
    string s1 = "";
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == ' ') {
            temp.push_back(s1);
            s1 = "";
        }
        else {
            s1 += s[i];
        }
    }
    temp.push_back(s1);
    for (int i = temp.size() - 1; i >= 0; i--) {
        cout << temp[i] << " ";
    }
}

int main() {
    string s = "geeks quiz practice code";
    // (o/p) -> code practice quiz geeks
    reverseWord2(s);
    return 0;
}