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

pair<int, bool> isSum(TreeNode* root) {
    cout << root->data << endl;
    if (root->left->left == NULL && root->left->right != NULL) {
        cout << " Call -1 " << endl;
        return make_pair(root->left->data, true);
    }
    if (root->right->right == NULL && root->right->left != NULL) {
        cout << " Call -2 " << endl;
        return make_pair(root->right->data, true);
    }
    if (root->left->left == NULL && root->right->right == NULL) {
        return make_pair(root->left->data + root->right->data, true);
    }
    pair<int, bool> leftIsSum = isSum(root->left);
    pair<int, bool> rightIsSum = isSum(root->right);
    if (leftIsSum.first + rightIsSum.first == root->data) {
        return make_pair(root->data + leftIsSum.first + rightIsSum.first, leftIsSum.second && rightIsSum.second);
    }
    return make_pair(root->data + leftIsSum.first + rightIsSum.first, false);
}

int sum(TreeNode* root) {
    if (root == NULL) {
        return 0;
    }
    return sum(root->left) + sum(root->right) + root->data;
}

int isSumTree(TreeNode* root) {
    int ls, rs;
    if ((root == NULL) || (root->left == NULL && root->right == NULL)) {
        return 1;
    }

    ls = sum(root->left);
    rs = sum(root->right);

    if (root->data == ls + rs && isSumTree(root->left) && isSumTree(root->right)) {
        return 1;
    }

    return 0;
}

int main() {
    TreeNode* root = buildTree();
    cout << isSumTree(root) << endl;
    return 0;
}
// 10 20 10 -1 -1 10 -1 -1 30 -1 -1
// 3 1 -1 -1 2 -1 -1