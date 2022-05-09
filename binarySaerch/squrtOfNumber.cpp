#include<iostream>
using namespace std;

int binarySearch(int n) {
    int s = 0;
    int e = n;
    int mid = s + (e - s) / 2;
    int ans = 0;
    while (s <= e) {
        int square = mid * mid;
        // we have to check the square of iterator number to the last element 
        // or target element
        if (square == n) {
            return mid;
        }
        // if mid of square is less then target number move to right
        // there may be a chance we can get an another number
        else if (square < n) {
            s = mid + 1;
            ans = mid;
        }
        else {
            e = mid - 1;
        }
        mid = s + (e - s) / 2;
    }
    return ans;
}

double morePrecession(int n, int pres, int num) {
    double factor = 1;
    double ans = num;
    for (int i = 0; i < pres; i++) {
        factor = factor / 10;
        // 0.1
        // 0.01
        // 0.001
        for (double j = ans; j * j < n; j += factor) {
            ans = j;
        }
    }
    return ans;
}

int main() {
    int n = 37;
    int num = binarySearch(n);
    cout << " Precession " << morePrecession(n, 3, num);
    return 0;
}