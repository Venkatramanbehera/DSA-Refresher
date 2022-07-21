#include<iostream>
#include<unordered_map>
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

TreeNode* constructTreeUsingInorderAndLevelOrder(int inorder[], int levelOrder[], int iStart, int iEnd, int size) {
    unordered_map<int, int> levelOrderMap;
    for (int i = 0; i < size; i++) {
        levelOrderMap[levelOrder[i]] = i;
    }
}

int main() {
    TreeNode* root = buildTree();
    return 0;
}