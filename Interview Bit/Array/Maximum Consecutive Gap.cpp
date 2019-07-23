int Solution::maximumGap(const vector<int> &A) {
    //This Solution give Memory Limit Exceed
    // set<int>s;
    // int Max = 0;
    // for(int i=0;i<A.size();i++){
    //     s.insert(A[i]);
    // }
    // int a[A.size()];
    // int j = 0;
    // for(auto i = s.begin();i!=s.end();i++){
    //     a[j++] = *i;
    //     //cout<<*i<<endl;
    // }
    // int n = s.size();
    // for(int i=0;i<n-1;i++){
    //     if(Max<=a[i+1]-a[i]){
    //         Max = a[i+1]-a[i];
    //     }
    // }
    // return Max;
    //if(A.size()==1)return 0;
    if(A.size()<2) return 0;
    vector<int> B = A;
    sort(B.begin(),B.end());
    int max = 0;
    for(int i=0;i<B.size()-1;i++){
    if(B[i+1]-B[i] > max)
        max = B[i+1]-B[i];
    }
    return max;
}
