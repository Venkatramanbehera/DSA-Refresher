#include <iostream>
using namespace std;

int main()
{
    int num;
    cout << "Enter a number" << endl;
    cin >> num;
    // if (num > 0)
    // {
    //     cout << "Positive Number" << endl;
    // }
    // else
    // {
    //     cout << "negtive number" << endl;
    // }

    // switch
    switch (num)
    {
    case 0:
        cout << "i am in case 0" << endl;
        break;
    case 7:
        cout << "i am in case 1" << endl;
        break;
    default:
        cout << "i am in default case " << endl;
    }
    return 0;
}