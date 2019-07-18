int Solution::solve(vector<int> &A) {
    //This is Bruce Force Approach Give Partial Score 98
    // vector<int>v;
    // int n = A.size();
    // for(int j=0;j<n;j++){
    //     int arrElement = A[j];
    //     int count = 0;
    //     for(int i=0;i<n;i++){
    //         if(arrElement < A[i])
    //         count++;
    //     }
    //     v.push_back(count);
    // }
    // for(int i=0;i<n;i++){
    //     if(v[i]==A[i]){
    //         return 1;
    //     }
    // }
    // return -1;
    
    //This is Using Sorting
    int n = A.size();
    sort(A.begin(), A.end());
    for(int i=0;i<n;i++){
        if(A[i]==A[i+1])continue;
        if(A[i] == n-1-i){
            return 1;
        }
    }
    if(A[n-1]==0)return 1;
    return -1;
}
