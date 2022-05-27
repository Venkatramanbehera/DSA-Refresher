#include<iostream>
using namespace std;

int main() {
    string s1 = "babbar";
    string s2 = "abb";
    cout << s1.find(s2) << endl;
    // if present return index
    // else it returns nps (or number values is greater 
    // than length of the string size)

    string result = "this is the example";
    cout << result.erase(0, 4) << endl;
    return 0;
}