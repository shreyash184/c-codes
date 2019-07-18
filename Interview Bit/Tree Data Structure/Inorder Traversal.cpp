/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

void inorder(TreeNode* root, vector<int> &res){
    if(!root)return;
    inorder(root->left, res);
    res.push_back(root->val);
    inorder(root->right, res);
}

vector<int> Solution::inorderTraversal(TreeNode* A) {
    //This is using stack O(n)
    // stack<struct TreeNode *>s;
    // vector<int>v;
    // struct TreeNode * curr = A;
    // while(curr || !s.empty()){
    //     if(curr){
    //         s.push(curr);
    //         curr=curr->left;
    //     }else{
    //         TreeNode * pNode = s.top();
    //         v.push_back(pNode->val);
    //         s.pop();
    //         curr = pNode->right;
    //     }
    // }
    // return v;
    vector<int>res;
    inorder(A, res);
    return res;
}
