#include<iostream>
using namespace std;

class TreeNode {

public:
    int data;
    TreeNode* left;
    TreeNode* right;

    TreeNode(int data) {
        this->data = data;
        this->left = this->right = NULL;
    }

};

TreeNode* buildTree() {
    int data;
    cin >> data;

    if (data == -1)
        return NULL;
    TreeNode* newNode = new TreeNode(data);
    newNode->left = buildTree();
    newNode->right = buildTree();
    return newNode;
}

void inOrderTraversal(TreeNode* root) {
    if (root == NULL) {
        return;
    }
    inOrderTraversal(root->left);
    cout << root->data << " ";
    inOrderTraversal(root->right);
}

bool isHeap(TreeNode* tree) {
    if (tree == NULL || (tree->left == NULL && tree->right == NULL)) {
        return true;
    }
    if ((tree->data >= tree->left->data && tree->data >= tree->right->data) && isHeap(tree->left) && isHeap(tree->right)) {
        return true;
    }
    return false;
}

int main() {
    TreeNode* root = buildTree();
    // inOrderTraversal(root);
    cout << isHeap(root) << endl;
    return 0;
}

// 1 2 7 -1 -1 5 -1 -1 3 -1 -1
// 5 2 -1 -1 3 -1 -1
// 8 7 -1 -1 6 5 -1 -1 9 -1 -1