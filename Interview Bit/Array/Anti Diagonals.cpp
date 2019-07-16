vector<vector<int> > Solution::diagonal(vector<vector<int> > &A) {
    vector<vector<int>>a;
    vector<int>diagonal;
    int n = A[0].size();
    for(int j=0;j<n;j++){
        int row = 0, col=j;
        while(col>=0){
            diagonal.push_back(A[row][col]);
            row++;
            col--;
        }
        a.push_back(diagonal);
        diagonal.clear();
    }
    for(int i=1;i<n;i++){
        int col=n-1, row = i;
        while(row<n){
            diagonal.push_back(A[row][col]);
            row++;
            col--;
        }
        a.push_back(diagonal);
        diagonal.clear();
    }
    return a;
}
