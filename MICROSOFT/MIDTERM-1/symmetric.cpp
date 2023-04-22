#include<bits/stdc++.h>

using namespace std;

struct TreeNode{
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int val) : val(val), left(nullptr), right(nullptr) {}
    TreeNode(int val, TreeNode *left, TreeNode *right) : val(val), left(left), right(right) {}
};

class Binary{
    public:
        bool isMirror(TreeNode *root1, TreeNode *root2){
            if(!root1 && !root2)
                return true;
            if((!root1 && root2) || (root1 && !root2))
                return false;
            if(root1->val != root2->val)
                return false;
            return isMirror(root1->left, root2->right) && isMirror(root1->right, root2->left);
        }

        bool isSymmetric(TreeNode *root){
            if(!root->left && !root->right)
                return true;
            return isMirror(root->left, root->right);
        }
};

TreeNode *binaryTree(vector<int> nodes, int i, int n){
    TreeNode *node = new TreeNode();
    if(i<n){
        node->val = nodes[i];
        node->left = binaryTree(nodes, 2*i+1, n);
        node->right = binaryTree(nodes, 2*i+2, n);
    }
    return node;
}

int main(){
    int n;
    cin >> n;
    vector<int> nodes;
    for(int index=0; index<n; index++){
        int val;
        cin >> val;
        nodes.push_back(val);
    }
    Binary b;
    TreeNode *root = binaryTree(nodes, 0, nodes.size());
    if(b.isSymmetric(root))
        cout << "true" << endl;
    else
        cout << "false" << endl;
}
