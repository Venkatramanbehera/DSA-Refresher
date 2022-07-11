#include<iostream>
using namespace std;
class Node {
public:
    int data;
    Node* left;
    Node* right;

    Node(int data) {
        this->data = data;
        left = NULL;
        right = NULL;
    }
};

Node* buildTree() {
    int data;
    cin >> data;
    if (data == -1) {
        return NULL;
    }

    Node* newNode = new Node(data);

    cout << " Left Of " << data << endl;
    newNode->left = buildTree();

    cout << " Right Of " << data << endl;
    newNode->right = buildTree();

    return newNode;
}

bool solve(Node* root) {
    cout << " Root Data " << root->data << endl;
    if (root->data == 0) {
        return 0;
    }
    if (root->data == 1) {
        return 1;
    }

    bool result1 = solve(root->left);
    bool result2 = solve(root->right);

    if (root->data == 2) {
        return result1 || result2;
    }
    else {
        return result1 && result2;
    }
}

int main() {
    Node* root = buildTree();
    bool ans = solve(root);
    cout << ans << endl;
    return 0;
}
// 2 1 - 1 - 1 3 0 - 1 - 1 1 - 1 - 1
// 3 2 1 -1 -1 0 -1 -1 3 1 -1 -1 0 -1 -1