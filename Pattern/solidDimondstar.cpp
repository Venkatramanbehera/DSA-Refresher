#include <iostream>
using namespace std;

int main()
{
    int n = 5;
    // first half of diamonds
    for (int i = 1; i <= n; i++)
    {
        // for space 
        for (int j = 1; j <= n-i; j++)
        {
            cout << "  ";
        }
        // for start
        for(int k= 1; k <= (i*2)-1; k++){
            if((k & 1) == 0){
                cout << "  ";
            }else{
                cout << "* ";
            }
        }
        cout << endl;
    }
    // second half of diamonds
    for(int i=1; i <= n-1; i++){
        // for space 
        for(int l= 1; l <= i; l++){
            cout << "  ";
        }
        // for start
        for(int m=1; m <= ((n*2)-(i*2)); m++){
            if((m & 1) == 0){
                cout << "  ";
            }else{
                cout << "* ";
            }
        }
        cout << endl;
    }
    return 0;
}