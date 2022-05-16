#include<iostream>
#include<string.h>
using namespace std;

bool checkPalindrome(char ch[]) {
    int len = strlen(ch);
    int start = 0;
    int end = len - 1;
    while (start < end) {
        if (ch[start] != ch[end]) {
            return false;
        }
        else {
            start++;
            end--;
        }
    }
    return true;
}

bool isFirstLatterCapital(char ch[]) {

}

char toLowerCase(char ch) {
    if (ch >= 'a' && ch <= 'z') {
        return ch;
    }
    else {
        char res = ch - 'A' + 'a';
        return res;
    }
}

bool checkPalindromeRemoveSpace(char ch[]) {

    return true;
}

int main() {
    char ch[] = "chihck";
    cout << checkPalindrome(ch) << endl;
    return 0;
}