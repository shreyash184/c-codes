/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
vector<vector<int> > Solution::levelOrder(TreeNode* A) {
    vector<vector<int>>ans;
    vector<int>v;
    queue<TreeNode *>q;
    q.push(A);
    while(!q.empty()){
        int Size = q.size();
        for(int i=0;i<Size;i++){
            TreeNode * x = q.front();
            q.pop();
            v.push_back(x->val);
            if(x->left)
                q.push(x->left);
            if(x->right)
                q.push(x->right);
        }
        ans.push_back(v);
        v.clear();
    }
    return ans;
}
