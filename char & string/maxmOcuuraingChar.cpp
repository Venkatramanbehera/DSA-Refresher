#include<iostream>
#include<string.h>
using namespace std;

char toLowerCase(char ch) {
    if (ch >= 'a' && ch <= 'z') {
        return ch;
    }
    else {
        char res = ch - 'A' + 'a';
        return res;
    }
}

void maximuOccuringChar(string s) {
    int res[26] = { 0 };
    for (int i = 0; i < s.length(); i++) {
        res[toLowerCase(s[i]) - 'a']++;
    }
    int min = 0;
    int minIndex = 0;
    for (int i = 0; i < 26; i++) {
        if (res[i] > min) {
            min = res[i];
            minIndex = i;
        }
    }
    char result = 'a' + minIndex;
    cout << "minIndex -> " << result << endl;
}

int main() {
    string s1 = "output";
    maximuOccuringChar(s1);
    return 0;
}