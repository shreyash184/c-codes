/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
 
 int find(TreeNode * root, vector<int>&path, int a){
    if(!root)return 0;
    path.push_back(root->val);
    if(root->val == a)return 1;
    if((root->left && find(root->left, path, a)) || (root->right && find(root->right, path, a)))
        return 1;
    path.pop_back();
    return 0;
 }
 
int Solution::lca(TreeNode* root, int B, int C) {
    vector<int>path1, path2;
    if( (!find(root, path1, B)) || !(find(root, path2, C))){
        return -1;
    }
    int i;
    for(i=0;i<path1.size() && i<path2.size();i++){
        if(path1[i]!=path2[i])break;
    }
    // if(path1[i-1] == 0)
    // return -1;
    // else
    return path1[i-1];
}
