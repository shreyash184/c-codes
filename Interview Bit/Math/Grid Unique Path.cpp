int Solution::uniquePaths(int A, int B) {
    int n=A;
    int m=B;
    int t[n+1][m+1];
    for(int i=0;i<=n;i++){
        for(int j=0;j<=m;j++){
            if(i==0 || j==0)
                t[i][j] = 0;
            else if(i==1 || j==1)
                t[i][j] = 1;
            else{
                t[i][j] = t[i-1][j]+t[i][j-1];
            }
        }
    }
    return t[n][m];
}
