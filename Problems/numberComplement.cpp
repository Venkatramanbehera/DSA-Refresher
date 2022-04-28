#include<iostream>
using namespace std;

int main(){
    int n = 5;
    int mask = 0;
    // creating a mask mask value should be less then number
    while(mask < n){
        mask = (mask << 1) | 1;
        // left shift the mask and add 1 at end using | (( bitwise or operator ))
    }
    int res = ( ~n ) & mask;
    // deleta of n converted 0 to 1 and mask 
    cout << res << endl;
    return 0;
}