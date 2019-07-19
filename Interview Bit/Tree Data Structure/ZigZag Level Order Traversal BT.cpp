/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
vector<vector<int> > Solution::zigzagLevelOrder(TreeNode* A) {
    queue<TreeNode *>q;
    vector<vector<int>>ans;
    vector<int>v;
    q.push(A);
    int count = 1;
    while(!q.empty()){
        int Size = q.size();
        
        for(int i=0;i<Size;i++){
            TreeNode * x = q.front();
            v.push_back(x->val);
            q.pop();
            if(x->right)
                q.push(x->right);
            if(x->left)
                q.push(x->left);
        }
        if(count%2!=0){
            reverse(begin(v), end(v));
        }
        ans.push_back(v);
        count++;
        v.clear();
    }
    return ans;
}
