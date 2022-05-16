#include<iostream>
#include<vector>
using namespace std;
void printVector(vector <int> v) {
    for (int i : v) {
        cout << i << " ";
    }
    cout << endl;
}

// not a stable algorithms
vector<int> selectionSort(vector <int> v) {
    int size = v.size();
    for (int i = 0; i < size; i++) {
        // iterate the element 
        int min_index = i;
        for (int j = i + 1; j < size; j++) {
            // find out the minimum index and update the min_index
            if (v[min_index] > v[j]) {
                min_index = j;
            }
        }
        // swap it to the first iterate element and minimum element
        swap(v[i], v[min_index]);
    }
    return v;
}

// stable algorithms
vector<int> bubbleSort(vector <int> v) {
    int size = v.size();
    // round is always size-1
    bool isSwap;
    for (int i = 0; i < size - 1; i++) {
        isSwap = false;
        // in every ith rotations ith number of element got sorted in the last of the vector
        for (int j = 0; j < size - i - 1; j++) {
            if (v[j] > v[j + 1]) {
                swap(v[j], v[j + 1]);
                isSwap = true;
            }
        }
        // if the inside condition is not checked that means its already sorted 
        // so no need of again checking
        if (isSwap == false) {
            break;
        }
    }
    return v;
}

vector<int> insertionSort(vector<int> v) {
    int  size = v.size();
    for (int i = 1; i < size; i++) {
        int temp = v[i];
        int j;
        for (j = i - 1; j >= 0; j--) {
            if (v[j] > temp) {
                v[j + 1] = v[j];
            }
            else {
                break;
            }
        }
        v[j + 1] = temp;
    }
    return v;
}

int main() {
    vector<int> vect;
    vect.push_back(10);
    vect.push_back(1);
    vect.push_back(4);
    vect.push_back(7);
    vect.push_back(8);
    vect.push_back(2);
    printVector(vect);
    vector<int> res = insertionSort(vect);
    printVector(res);
    return 0;
}