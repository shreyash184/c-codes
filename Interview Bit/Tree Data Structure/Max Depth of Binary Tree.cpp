/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
 
int height(TreeNode * root){
    if(!root)return 0;
    int l = height(root->left);
    int r = height(root->right);
    return 1+max(l,r);
}
int Solution::maxDepth(TreeNode* A) {
    if(!A)return 0;
    return height(A);
}
