/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
 

vector<int> Solution::postorderTraversal(TreeNode* A) {
    vector<int>v;
    stack<TreeNode *>s;
    TreeNode * curr = A;
    while(curr || !s.empty()){
        if(curr){
            s.push(curr);
            curr=curr->left;
        }else{
            struct TreeNode * x = s.top()->right;
            if(!x){
                x = s.top(); 
                s.pop();
                v.push_back(x->val);
                while(!s.empty() && x == s.top()->right){
                    x = s.top();
                    s.pop();
                    v.push_back(x->val);
                }
            }else{
                curr = x;
            }
        }
    }
    return v;
}
