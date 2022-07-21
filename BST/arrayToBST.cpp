#include<iostream>
#include<vector>
#include<queue>
using namespace std;

class Node {
public:
    int data;
    Node* left;
    Node* right;
    Node(int d) {
        this->data = d;
        this->left = NULL;
        this->right = NULL;
    }
};

Node* buildBST(vector<int>& num, int start, int end) {
    if (start > end)
        return NULL;
    int mid = (start + end) / 2;
    Node* root = new Node(num[mid]);
    root->left = buildBST(num, start, mid - 1);
    root->right = buildBST(num, mid + 1, end);
    return root;
}

void inOrderTraversal(Node* root) {
    // 
    if (root == NULL) {
        return;
    }
    inOrderTraversal(root->left);
    cout << root->data << " ";
    inOrderTraversal(root->right);
}

void arrToBst(vector<int>& num) {
    Node* root = buildBST(num, 0, num.size() - 1);
    inOrderTraversal(root);
}



int main() {
    vector<int> num;
    num.push_back(1);
    num.push_back(2);
    num.push_back(3);
    num.push_back(4);
    arrToBst(num);
    return 0;
}