#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    set<int> s;
    // set<int, greater<int> > s;
    s.insert(20);
    s.insert(10);
    s.insert(30);
    s.insert(60);
    s.insert(70);
    set<int>::iterator it;
    cout << "Elements are" << endl;
    for (it = s.begin(); it != s.end(); it++)
    {
        cout << *it << " ";
    }
    cout << endl;
    cout << "Size of set " << s.size() << endl;
    return 0;
}