#include <iostream>
using namespace std;

int main()
{
    int n ;
    cin >> n;
    for(int row = 1; row <= n; row++){
        if(row == 1){
            for(int i = 1; i <= n; i++){
                cout << i << " ";
            }
        }
        else if(row == n){
            cout << n << " ";
        }
        else{
            cout << row << " ";
            for(int k = 1; k <= (n-row-1); k++){
                cout << "  ";
            }
            cout << n << " ";
        }
        cout << endl;
    }
    return 0;
}