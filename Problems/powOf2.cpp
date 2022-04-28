#include<iostream>
using namespace std;

int main()
{
    int n = 5;
    // Approach 1 
    cout << " Approach 1 " << endl;
    int count = 0;
    while(n != 0){
        int res = n & 1;
        if(res == 1){
            count++;
        }
        n = n >> 1;
    }
    if(count == 1){
        cout <<"pow of 2 "<< count << endl;
    }else{
        cout <<"not pow of 2 "<< count << endl;
    }
    // Approach 2
    cout << " Approach 2 " << endl;
    int res = n & (n-1);
    cout << (res == 0) << endl;
    return 0;
}