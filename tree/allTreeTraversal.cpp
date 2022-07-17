#include<iostream>
#include<vector>
#include<queue>
#include<map>
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

// Q1 - Zig zag traversal
vector <int> zigZagTraversal(TreeNode* root)
{
    // Code here
    vector<int> result;
    queue<TreeNode*> q;
    q.push(root);
    bool leftToRight = true;
    // Level order
    while (!q.empty()) {
        int size = q.size();
        vector<int> ans(size);
        cout << "SIZE" << size << endl;
        // process the level
        for (int i = 0; i < size; i++) {
            TreeNode* frontNode = q.front();
            q.pop();

            int index = leftToRight ? i : size - i - 1;
            ans[index] = frontNode->data;

            if (frontNode->left)
                q.push(frontNode->left);
            if (frontNode->right)
                q.push(frontNode->right);
        }
        // for every order we need to change the left to right boolean value
        leftToRight = !leftToRight;
        for (auto i : ans) {
            result.push_back(i);
        }
    }
    return result;
}

// Q2 - Boundary Tree traversal
// left traversal of Q2
void leftTraversal(TreeNode* root, vector<int>& ans) {
    if (root == NULL)
        return;
    if (root->left == NULL && root->right == NULL)
        return;
    ans.push_back(root->data);
    if (root->left) {
        leftTraversal(root->left, ans);
    }
    else {
        leftTraversal(root->right, ans);
    }
}
// leaf traversal of Q2
void leafTraversal(TreeNode* root, vector<int>& ans) {
    if (root == NULL)
        return;
    if (root->left == NULL && root->right == NULL)
        ans.push_back(root->data);
    leafTraversal(root->left, ans);
    leafTraversal(root->right, ans);
}
// right rev traversal of Q2
void rightRevTraversal(TreeNode* root, vector<int>& ans) {
    if (root == NULL)
        return;
    if (root->left == NULL && root->right == NULL)
        return;
    if (root->right)
        rightRevTraversal(root->right, ans);
    else
        rightRevTraversal(root->left, ans);
    // after comeback we need to push
    ans.push_back(root->data);
}
vector<int> boundary(TreeNode* root) {
    vector<int> ans;
    if (root == NULL)
        return ans;
    ans.push_back(root->data);
    // left node print
    leftTraversal(root->left, ans);
    // left leaf node print
    leafTraversal(root->left, ans);
    // right leaf node print
    leafTraversal(root->right, ans);
    // right traversal
    rightRevTraversal(root->right, ans);
    return ans;
}
// Q3 - vertical traversal
vector<int> verticalTraversal(TreeNode* root) {
    map<int, map<int, vector<int> > > nodes;
    queue<pair<TreeNode*, pair<int, int> > > q;
    vector<int> result;

    if (root == NULL)
        return result;
    q.push(make_pair(root, make_pair(0, 0)));
    while (!q.empty()) {
        pair<TreeNode*, pair<int, int> > temp = q.front();
        q.pop();
        TreeNode* frontNode = temp.first;
        int hd = temp.second.first;
        int level = temp.second.second;

        nodes[hd][level].push_back(frontNode->data);
        if (frontNode->left)
            q.push(make_pair(frontNode->left, make_pair(hd - 1, level + 1)));
        if (frontNode->right)
            q.push(make_pair(frontNode->right, make_pair(hd + 1, level + 1)));
    }
    for (auto i : nodes) {
        for (auto j : i.second) {
            for (auto k : j.second) {
                result.push_back(k);
            }
        }
    }
    return result;
}

// left view traversal
vector<int> leftViewTraversal(TreeNode* root) {
    map<int, int> mp;
    queue<pair<TreeNode*, int> > q;
    q.push(make_pair(root, 0));
    vector<int> result;
    while (!q.empty()) {
        pair<TreeNode*, int> temp = q.front();
        q.pop();
        int level = temp.second;
        TreeNode* frontNode = temp.first;
        if (mp.find(level) == mp.end()) {
            mp[level] = frontNode->data;
        }
        if (frontNode->left)
            q.push(make_pair(frontNode->left, level + 1));
        if (frontNode->right)
            q.push(make_pair(frontNode->right, level + 1));
    }
    for (auto i : mp) {
        result.push_back(i.second);
    }
    return result;
}

void solve(TreeNode* root, vector<int>& result, int level) {
    if (root == NULL)
        return;
    if (level == result.size()) {
        result.push_back(root->data);
    }
    solve(root->left, result, level + 1);
    solve(root->right, result, level + 1);

}

// left view traversal using recursion
vector<int> leftViewTraversalUsingRecursion(TreeNode* root) {
    vector<int> result;
    if (root == NULL)
        return result;
    solve(root, result, 0);
    return result;
}

// right view traversal
vector<int> rightViewTraversal(TreeNode* root) {
    map<int, int> mp;
    queue<pair< TreeNode*, int > > q;
    q.push(make_pair(root, 0));
    vector<int> result;
    while (!q.empty()) {
        pair<TreeNode*, int> temp = q.front();
        q.pop();
        int level = temp.second;
        TreeNode* newNode = temp.first;
        mp[level] = newNode->data;
        if (newNode->left)
            q.push(make_pair(newNode->left, level + 1));
        if (newNode->right)
            q.push(make_pair(newNode->right, level + 1));
    }
    for (auto i : mp) {
        result.push_back(i.second);
    }
    return result;
}

// Q - Diagonal Traversal
void solveDiagonal(TreeNode* root, int distance, map<int, vector<int> >& result) {
    if (root == NULL)
        return;
    result[distance].push_back(root->data);
    solveDiagonal(root->right, distance, result);
    solveDiagonal(root->left, distance + 1, result);
}
void diagonal(TreeNode* root) {
    map<int, vector<int> > result;
    solveDiagonal(root, 0, result);
    for (auto i : result) {
        for (auto j : i.second) {
            cout << j << " ";
        }
        cout << endl;
    }
}

int main() {
    TreeNode* root = buildTree();
    diagonal(root);
    // vector <int> res = zigZagTraversal(root);
    // vector <int> res = leftViewTraversalUsingRecursion(root);
    // for (int i = 0; i < res.size(); i++) {
    //     cout << res[i] << " ";
    // }
    return 0;
}

// 1 2 7 -1 -1 5 -1 -1 3 -1 -1
// 3 2 1 -1 -1 0 -1 -1 3 1 -1 -1 0 -1 -1
// 1 2 4 -1 -1 5 -1 -1 3 -1 6 -1 -1 