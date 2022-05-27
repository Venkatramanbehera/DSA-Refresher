#include<iostream>
using namespace std;
// coins array [1,2]
// total no of ways to make total amount
int solve(int* arr, int amount, int size, int starting) {
    if (amount == 0) {
        return 1;
    }
    if (amount < 0) {
        return 0;
    }
    int ways = 0;
    for (int i = starting; i < size; i++) {
        ways += solve(arr, amount - arr[i], size, i);
    }
    return ways;
}
int main() {
    int coins[] = { 1,2 };
    int amount = 4;
    int ans = solve(coins, amount, 2, 0);
    cout << ans << endl;
    return 0;
}