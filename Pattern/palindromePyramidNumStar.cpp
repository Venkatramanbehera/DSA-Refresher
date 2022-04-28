#include <iostream>
using namespace std;

int main(){
    int n = 5;
    for(int row=1; row <= n; row++){
        for( int star = 1; star <= n-row; star++){
            cout << "* ";
        }
        for(int num=1; num <= (row*2)-1; num++){
            if((num & 1) == 0){
                cout << "* ";
            }else{
                cout << row << " ";
            }
        }
        for( int star = 1; star <= n-row; star++){
            cout << "* ";
        }
        cout << endl;
    }
    return 0;
}