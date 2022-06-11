#include<iostream>
using namespace std;

void reverse(int i, int j, string& str) {
    cout << str << endl;
    if (i > j) {
        return;
    }
    swap(str[i], str[j]);
    i++;
    j--;
    reverse(i, j, str);
}

bool isPalindrome(string str, int i, int j) {
    if (i > j) {
        return true;
    }
    if (str[i] != str[j]) {
        return false;
    }
    else {
        return isPalindrome(str, (i + 1), (j - 1));
    }
}

// void powerSet() {

// }

int main() {
    string str = "ba";
    int size = str.size() - 1;
    // reverse(0, size, str);
    // reverseTwo(str, 0);
    cout << isPalindrome(str, 0, size);
    return 0;
}