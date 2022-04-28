#include <iostream>
using namespace std;

int main()
{
    int n = 5;
    for(int row=1; row<= n; row++){
        for(int space = 1; space <= n-row; space++){
            cout << "  ";
        }
        if(row == 1 || row == n){
            for(int i=1; i<= row; i++){
                cout << i << "   ";
            }
        }
        else{
            cout << 1 << " ";
            // for space inside hollow
            for(int space = 1; space <= ((row-1)*2)-1; space++){
                cout << "  " ;
            }
            cout << " " << row ;
        }
        cout << endl;
    }
    return 0;
}