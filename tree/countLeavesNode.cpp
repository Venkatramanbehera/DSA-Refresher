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

void countLeaves(TreeNode* root, int& count) {
    if (root == NULL)
        return;
    if (root->left == NULL && root->right == NULL)
        count++;
    countLeaves(root->left, count);
    countLeaves(root->right, count);
}


int main() {
    int count = 0;
    TreeNode* root = buildTree();
    countLeaves(root, count);
    cout << count << endl;
    return 0;
}
// 1 2 7 -1 -1 5 -1 -1 3 -1 -1