#include<iostream>
#include<vector>
#include<stack>
using namespace std;

vector<int> nextSmallerElement(vector<int>& arr) {
    stack<int> st;
    st.push(-1);
    int size = arr.size();
    vector<int> result(size);
    for (int i = size - 1; i >= 0; i--) {
        int item = arr[i];
        while (arr[st.top()] >= item) {
            st.pop();
        }
        if (st.top() == -1) {
            result[i] = size;
        }
        else {
            result[i] = st.top();
        }
        st.push(i);
    }
    return result;
}

vector<int> prevSmallerElement(vector<int>& arr) {
    stack<int> st;
    st.push(-1);
    int size = arr.size();
    vector<int> result(size);
    for (int i = 0; i < size; i++) {
        int item = arr[i];
        while (st.top() >= item) {
            st.pop();
        }
        result[i] = st.top();
        st.push(item);
    }
    return result;
}

vector<int> nextGreaterElement(vector<int>& arr) {
    stack<int> s;
    s.push(-1);
    int n = arr.size();
    vector<int> result(n);
    for (int i = n - 1; i >= 0; i--) {
        int item = arr[i];
        cout << " ITEM " << item << endl;
        while (item > s.top() && s.top() != -1) {
            s.pop();
        }
        result[i] = s.top();
        s.push(item);
    }
    return result;
}

int largestRectangularArea(vector<int>& vect) {
    vector<int> NS = nextSmallerElement(vect);
    vector<int> PS = prevSmallerElement(vect);
    int ans = INT16_MIN;
    for (int i = 0; i < NS.size(); i++) {
        int l = vect[i];
        int b = (NS[i] - PS[i]) - 1;
        ans = max(ans, l * b);
    }
    return ans;
}

int main() {
    vector<int> vect;
    vect.push_back(1);
    vect.push_back(3);
    vect.push_back(2);
    vect.push_back(4);
    // cout << largestRectangularArea(vect);
    vector<int> NS = nextGreaterElement(vect);
    // vector<int> PS = prevSmallerElement(vect);

    // cout << endl;
    for (int i = 0; i < NS.size(); i++) {
        cout << NS[i] << " ";
    }
    return 0;
}