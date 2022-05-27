#include<iostream>
using namespace std;

// a function which call itself is called as recursion

int factorial(int n) {
    // base case
    if (n == 0) {
        return 1;
    }
    // small problem
    // int small = factorial(n - 1);
    // big problems
    // int big = n * small;
    // int big = n * factorial(n - 1);
    return n * factorial(n - 1);
}

int power(int n) {
    // base case
    if (n == 0) {
        return 1;
    }
    return 2 * power(n - 1);
}

void printn(int n) {
    // base case
    if (n == 0) {
        return;
    }
    cout << n << endl;
    printn(n - 1);
}

void reachHome(int src, int dest) {
    cout << src << endl;
    if (src == dest) {
        cout << " All done " << endl;
        return;
    }
    src++;
    reachHome(src, dest);
}

int fibonacciSeries(int n) {
    // base case
    if (n == 0) {
        return 0;
    }
    if (n == 1) {
        return 1;
    }
    // RC
    return fibonacciSeries(n - 1) + fibonacciSeries(n - 2);
}
int climbStairs(int n) {
    if (n < 0) {
        return 0;
    }
    if (n == 0) {
        return 1;
    }
    return climbStairs(n - 1) + climbStairs(n - 2);
}

void printNumberInWords(int n, string words[]) {
    // base case 
    if (n == 0)
        return;
    int digit = n % 10;
    n = n / 10;
    printNumberInWords(n, words);
    cout << words[digit] << " ";
}

int main() {
    int n;
    cin >> n;
    // cout << factorial(n) << endl;
    // cout << power(n) << endl;
    // printn(n);
    // cout << "Reach home" << endl;
    // reachHome(n, 10);
    // cout << fibonacciSeries(n) << endl;
    // cout << climbStairs(n) << endl;
    string words[] = {
        "zero", "one", "two", "three", "four", "five", "six",
        "seven", "eight", "nine", "ten"
    };
    printNumberInWords(n, words);
    return 0;
}