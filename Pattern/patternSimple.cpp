#include <iostream>
using namespace std;
/*
1 
1 2 1
1 2 3 2 1
1 2 3 4 3 2 1
1 2 3 4 5 4 3 2 1
*/
int main()
{
    int n = 5;
    for(int row = 1; row <= n; row++){
        for(int j = 1; j <= row; j++){
            cout << j << " ";
        }
        for(int k = row-1; k >= 1; k--){
            cout << k << " ";
        }
        cout << endl;
    }
    return 0;
}