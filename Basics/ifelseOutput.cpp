#include <iostream>
using namespace std;

int main()
{
    /*
    questions 1
    if (0)
    {
        cout << "HI" << endl;
    }
    else
    {
        cout << "Bye" << endl;
    }
    */

    int a = 1;
    switch (a)
    {
    case 1:
        cout << "One";
    case 2:
        cout << "Two";
    case 3:
        cout << "Three";
    default:
        cout << "Default";
    }
    return 0;
}