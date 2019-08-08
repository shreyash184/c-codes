vector<int> Solution::findPerm(const string A, int B) {
    stack<int>s;
    vector<int>ans;
    int x = 1;
    int n = A.length();
    for(int i=0;i<=n+1;i++){
        s.push(x++);
        if(A[i]=='I' || i==n ){
            while(!s.empty()){
                ans.push_back(s.top());
                s.pop();
            }
        }
    }
    ans.resize(n+1);
    return ans;
}
