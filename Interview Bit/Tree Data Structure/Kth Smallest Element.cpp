/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
 void inorder(TreeNode * root, vector<int>&v){
     if(!root)return;
     else{
         inorder(root->left, v);
         v.push_back(root->val);
         inorder(root->right, v);
     }
 }
int Solution::kthsmallest(TreeNode* A, int B) {
    vector<int>v;
    inorder(A, v);
    return v[B-1];
}
