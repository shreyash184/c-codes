int Solution::maxSubArray(const vector<int> &A) {
    int current = A[0];
    int maxSum = A[0];
    for(int i=1;i<A.size();i++){
        current=max(A[i], current+A[i]);
        maxSum=max(maxSum, current);
    }
    return maxSum;
}
