/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
vector<int> Solution::preorderTraversal(TreeNode* root) {
    stack<TreeNode *> nodeStack; 
    nodeStack.push(root); 
    vector<int>v;
    while (nodeStack.empty() == false) 
    { 
        struct TreeNode *node = nodeStack.top(); 
        v.push_back(node->val);
        nodeStack.pop(); 
        if (node->right) 
            nodeStack.push(node->right); 
        if (node->left) 
            nodeStack.push(node->left); 
    } 
    return v;
}
