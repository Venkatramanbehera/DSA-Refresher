#include <iostream>
using namespace std;

void ramesh(int n)
{
    n++;
    cout << "ramesh " << n << endl;
}

void rahul(int n)
{
    n++;
    cout << "rahul " << n << endl;
    ramesh(n);
}

void func1(int n)
{
    n++;
    cout << "func1 " << n << endl;
    rahul(n);
}

int main()
{
    int n = 21;
    cout << "Execution start" << endl;
    func1(n);
    cout << "Execution end " << n << endl;
    return 0;
}