vector<int> Solution::wave(vector<int> &A) {
    if(A.size()==1)
        return A;
    sort(A.begin(), A.end());
    for(int i=0;i<=A.size()-2;i+=2){
        swap(A[i], A[i+1]);
    }
    return A;
}
