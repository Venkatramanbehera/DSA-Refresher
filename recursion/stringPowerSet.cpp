#include<iostream>
using namespace std;

void printPowerSet(string input, int index, string output) {
    if (index == input.length()) {
        cout << output << endl;
        return;
    }

    char ch = input[index];

    // exclude
    printPowerSet(input, index + 1, output);


}

void findCombination(string input, int i, string output) {
    if (i == input.length()) {
        cout << output << endl;
        return;
    }

    char ch = input[i];
    // no space 
    output.push_back(ch);
    findCombination(input, i + 1, output);
    // with space
    output.push_back(' ');
    if (input[i + 1] != '\0') {
        findCombination(input, i + 1, output);
    }
}

void findSequence(int leftSum, int rightSum, char* output, int i, int j) {
    // base case

    // 00
    // 01
    // 10
    // 11
}

int main() {
    string str = "123";
    findCombination(str, 0, "");
    return 0;
}