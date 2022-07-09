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

int height(Node* root) {
    if (root == NULL) {
        return 0;
    }

    if (root->left == NULL && root->right == NULL) {
        return 0;
    }

    int leftData = height(root->left);
    int rightData = height(root->right);

    return 1 + max(leftData, rightData);
}

int main() {
    Node* root = buildTree();
    cout << " Height is " << height(root) << endl;
    return 0;
}