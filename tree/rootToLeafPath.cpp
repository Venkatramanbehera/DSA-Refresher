#include<iostream>
#include<vector>
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

void solve(vector<int> ans, TreeNode* root, vector< vector<int> >& result) {
    if (root == NULL) {
        return;
    }
    ans.push_back(root->data);
    if (root->left == NULL && root->right == NULL)
        result.push_back(ans);
    // cout << "Data" << root->data << endl;
    solve(ans, root->left, result);
    solve(ans, root->right, result);
    // ans.pop_back();
}

void rootPath(TreeNode* root) {
    vector< vector<int > > result;
    vector<int > ans;
    solve(ans, root, result);
    for (int i = 0; i < result.size(); i++) {
        for (int j = 0; j < result[0].size(); j++) {
            cout << result[i][j] << " ";
        }
        cout << endl;
    }
}

int main() {
    TreeNode* root = buildTree();
    rootPath(root);
    return 0;
}