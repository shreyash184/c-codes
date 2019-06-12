#include<bits/stdc++.h>
#define n 3
using namespace std;
//Time Complexity O(n2)
int findOne(int i, int j, int mat[n][n], int dp[n][n]){
    if(i<0 || i>=n || j<0 || j>=n){
        return 0;
    }
    if(dp[i][j] != -1){
        return dp[i][j];
    }
        if(j<n-1 && (mat[i][j]+1 == mat[i][j+1])){
            return 1+findOne(i, j+1, mat, dp);
        }
        if(j>0 && (mat[i][j]+1 == mat[i][j-1])){
            return 1+findOne(i, j-1, mat, dp);
        }
        if(i<n-1 && (mat[i][j]+1 == mat[i+1][j])){
            return 1+findOne(i+1, j, mat, dp);
        }
        if(i>0 && (mat[i][j]+1 == mat[i-1][j])){
            return 1+findOne(i-1, j, mat, dp);
        }
    return dp[i][j]=1;
}

int count(int mat[n][n]){
    int result = 1;

    int dp[n][n];
    memset(dp, -1, sizeof(dp));
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(dp[i][j] == -1){
                dp[i][j] = findOne(i, j, mat, dp);
            }
            result = max(result, dp[i][j]);
        }
    }
    return result;
}

int main()
{
    
    int t[n][n] = {{1,2,1},{5,3,8},{4,6,7}};
    cout<<count(t)<<endl;
    return 0;
}
