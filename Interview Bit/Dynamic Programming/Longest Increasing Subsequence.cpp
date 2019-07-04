int Solution::lis(const vector<int> &A) {
    int n = A.size();
    int LIS[n+1];
    LIS[0] = 1;
    for(int i=1;i<n;i++){
        LIS[i] = 1;
        for(int j=0;j<i;j++){
            if(A[i]>A[j] && LIS[i] < LIS[j]+1)
                LIS[i] = LIS[j]+1;
        }
    }
    return * max_element(LIS, LIS+n);
}
