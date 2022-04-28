#include <iostream>
using namespace std;

int main()
{
    cout << "Left shift operator" << endl;
    cout << " (5 << 1) " << (5 << 1) << endl;
    // every right shift we have to multiply the number by 2( but not always )
    cout << "Right shift operator" << endl;
    cout << " (5 >> 1) " << (5 >> 1) << endl;
    // every left shift we have to divide the number by 2( but not always )
    return 0;
}