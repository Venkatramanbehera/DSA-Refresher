#include<iostream>
#include<vector>
using namespace std;
// vector is dynamic array 

int main() {
    vector<int> v;
    vector<int> v2(5, 1);
    cout << " Capacity " << v.capacity() << endl;
    v.push_back(1);
    cout << " Capacity " << v.capacity() << endl;
    v.push_back(2);
    cout << " Capacity " << v.capacity() << endl;
    v.push_back(3);
    cout << " Capacity " << v.capacity() << endl;
    cout << " Size " << v.size() << endl;

    cout << " At index 2 -> " << v.at(2) << endl;

    cout << " Front " << v.front() << endl;
    cout << " Back " << v.back() << endl;

    cout << " Before Pop " << endl;
    for (int i : v)
        cout << i << " ";
    cout << endl;
    v.pop_back();
    cout << " After Pop " << endl;
    for (int i : v)
        cout << i << " ";
    cout << endl;

    cout << " Before clear " << v.size() << endl;
    v.clear();
    cout << " After clear " << v.size() << endl;

    cout << " New vector " << endl;
    for (int i : v2)
        cout << i << " ";
    cout << endl;
    vector<int> copy(v2);

    cout << " copy vector " << endl;
    for (int i : copy)
        cout << i << " ";
    cout << endl;
    return 0;
}