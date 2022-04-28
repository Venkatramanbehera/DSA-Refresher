#include <iostream>
using namespace std;

int main()
{
    int a, b;
    cout << "Enter value of a & b" << endl;
    cin >> a >> b;
    cout << "Enter the operator" << endl;
    char ch;
    cin >> ch;
    switch (ch)
    {
    case '+':
        cout << (a + b) << endl;
        break;
    case '-':
        cout << (a - b) << endl;
        break;
    case '/':
        cout << (a / b) << endl;
        break;
    case '*':
        cout << (a * b) << endl;
        break;
    case '%':
        cout << (a % b) << endl;
        break;
    }
    return 0;
}