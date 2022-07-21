#include<iostream>
using namespace std;
class Node {
public:
    int data;
    Node* left;
    Node* right;
    Node(int d) {
        this->data = d;
        left = NULL;
        right = NULL;
    }
};

Node* buildBST(Node* root, int data) {
    if (root == NULL) {
        Node* temp = new Node(data);
        return temp;
    }
    if (data > root->data) {
        root->right = buildBST(root->right, data);
    }
    else {
        root->left = buildBST(root->left, data);
    }
    return root;
}

void createBST(Node*& root) {
    cout << "Enter the value for Root Node" << endl;
    int data;
    cin >> data;

    while (data != -1) {
        root = buildBST(root, data);
        cout << "Enter the data for node " << endl;
        cin >> data;
    }
}

void largestNode(Node* root, int K, int& count, int& ans) {
    if (root == NULL || count >= K)
        return;
    largestNode(root->right, K, count, ans);
    count++;
    if (K == count) {
        cout << root->data << endl;
        ans = root->data;
        return;
    }
    largestNode(root->left, K, count, ans);
}

int kthLargest(Node* root, int K)
{
    int count = 0;
    int ans = -1;
    //Your code here
    if (root == NULL)
        return 0;
    largestNode(root, K, count, ans);
    return ans;
}

int main() {
    Node* root = NULL;
    createBST(root);
    cout << kthLargest(root, 2);
    return 0;
}
// 100 50 20 70 150 120 170
// 78 69 80 4 72 79