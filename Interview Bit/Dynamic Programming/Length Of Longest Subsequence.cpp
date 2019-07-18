int Solution::longestSubsequenceLength(const vector<int> &A) {
    int n = A.size();
    if(n==0)return n;
    //Code for Longest Increasing Subsequence
    int LIS[n];
    LIS[0] = 1;
    for(int i=1;i<n;i++){
        LIS[i] = 1;
        for(int j=0;j<i;j++){
            if(A[i] > A[j] && LIS[i] < LIS[j]+1)
                LIS[i] = LIS[j]+1;
        }
    }
    //Code for Longest Decreasing Subsequence
    int LDS[n];
    LDS[n-1]=1;
    for(int i=n-2;i>=0;i--){
        LDS[i]=1;
        for(int j=n-1;j>i;j--){
            if(A[i] > A[j] && LDS[i] < LDS[j]+1)
                LDS[i] = LDS[j]+1;
        }
    }
    //Code for Max Sum
    int Max = LIS[0]+LDS[0]-1,x;
    for(int i=1;i<n;i++){
        x = LIS[i]+LDS[i]-1;
        Max = max(Max, x);
    }
    return Max;
}
