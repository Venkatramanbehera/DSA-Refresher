#include<iostream>
#include<vector>
#include<queue>
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

int findElement(vector<int> in, int start, int end, int element) {
    for (int i = start; i <= end; i++) {
        if (in[i] == element) {
            return i;
        }
    }
    return -1;
}

TreeNode* buildTreeUsingInorderAndPreorder(vector<int> in, vector<int> pre, int& preOrderIndex, int startIndex, int endIndex) {
    if (preOrderIndex == pre.size() || startIndex > endIndex) {
        return NULL;
    }

    int element = pre[preOrderIndex++];
    TreeNode* newNode = new TreeNode(element);
    int pos = findElement(in, startIndex, endIndex, element);

    newNode->left = buildTreeUsingInorderAndPreorder(in, pre, preOrderIndex, startIndex, pos - 1);
    newNode->right = buildTreeUsingInorderAndPreorder(in, pre, preOrderIndex, pos + 1, endIndex);
    return newNode;
}

TreeNode* buildTreeUsingInorderAndPostOrder(vector<int> in, vector<int> post, int& postIndex, int start, int end) {
    // cout << " postIndex " << postIndex << endl;
    if (start > end)
        return nullptr;
    int element = post[postIndex--];
    TreeNode* rootNode = new TreeNode(element);
    int pos = findElement(in, start, end, element);
    rootNode->right = buildTreeUsingInorderAndPostOrder(in, post, postIndex, pos + 1, end);
    rootNode->left = buildTreeUsingInorderAndPostOrder(in, post, postIndex, start, pos - 1);
    return rootNode;
}

void levelOrderTraversalWithSpace(TreeNode* root) {
    queue<TreeNode*> q;
    q.push(root);
    q.push(NULL);

    while (!q.empty()) {
        TreeNode* frontNode = q.front();
        q.pop();
        if (frontNode == NULL) {
            cout << endl;
            if (!q.empty()) {
                q.push(NULL);
            }
        }
        else {
            cout << frontNode->data << " ";
            if (frontNode->left != NULL) {
                q.push(frontNode->left);
            }
            if (frontNode->right != NULL) {
                q.push(frontNode->right);
            }
        }
    }
}

int main() {
    vector<int> pre;
    pre.push_back(1);
    pre.push_back(6);
    pre.push_back(7);
    pre.push_back(8);
    vector<int> in;
    in.push_back(1);
    in.push_back(6);
    in.push_back(8);
    in.push_back(7);
    int preOrderIndex = pre.size() - 1;
    TreeNode* root = buildTreeUsingInorderAndPostOrder(in, pre, preOrderIndex, 0, 3);
    levelOrderTraversalWithSpace(root);
    return 0;
}