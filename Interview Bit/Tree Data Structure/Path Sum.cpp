/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

int Solution::hasPathSum(TreeNode* A, int B) {
    if(!A)return 0;
    else{
        if(B-A->val==0 && !A->left && !A->right)return 1;
        return (hasPathSum(A->left, B-A->val)) || (hasPathSum(A->right, B-A->val));
    }
}
