#include <iostream>

using namespace std;
//This is recursive apporach
//time complexity O(2^n)
/*
int optimal(int arr[], int n, int i, int j){

    //Base Condition
    if(i==j){
        return arr[i];
    }
    if(j==i+1){
        return max(arr[i], arr[j]);
    }else{
        return max(arr[i]+min(optimal(arr, n , i+2, j), optimal(arr, n, i+1, j-1)), arr[j]+min(optimal(arr, n, i, j-2), optimal(arr, n, i+1, j-1)));
    }
}
*/

//This is Memoization Approach
/*
int memo[MAX][MAX];
int optimal(int arr[], int n, int i, int j){

    //Base Condition
    if(memo[i][j] != -1){
        return memo[i][j];
    }
    if(j==i+1){
        return max(arr[i], arr[j]);
    }
    memo[i][j] = max(arr[i]+min(optimal(arr, n , i+2, j), optimal(arr, n, i+1, j-1)), arr[j]+min(optimal(arr, n, i, j-2), optimal(arr, n, i+1, j-1)));
    return memo[i][j];
}
*/
//This is Dynamic Approach.
//Time Complexity
//IN Process Ans not Comming
/*
struct Pair{
    int first, second;
};

int optimal(int arr[], int n, int i, int j){
    Pair dp[n+1][n+1];
    Pair temp;
    for(int l=2;l<=n;l++)
    for(int i=0;i<=n;i++){
        j=l+i-1;
        dp[i][j]=temp;
     }
    for(int j=1;j<=n;j++){
        dp[j][j].first = arr[j];
        dp[j][j].second = 0;
    }
    for(int l=2;l<=n;l++){
        for(int i=1;i<=n;i++){
            int j=l+i-1;
            if(arr[i]+dp[i+1][j].second > arr[j]+dp[i][j-1].second){
                dp[i][j].first = arr[i]+dp[i+1][j].second;
                dp[i][j].second = dp[i+1][j].first;
            }else{
                dp[i][j].first = arr[j]+dp[i][j-1].second;
                dp[i][j].second = dp[i][j-1].first;
            }
        }
    }
    return dp[1][n].first;
}
*/

int optimal(int arr[], int n){
    int dp[n][n];
    for(int gap=0;gap<n;gap++){
        for(int i=0,j=gap;j<n;i++,j++){
            int x = ((i+2)<=j) ? dp[i+2][j] : 0;
            int y = ((i+1)<=(j-1)) ? dp[i+1][j-1] : 0;
            int z = ((i)<=(j-2)) ? dp[i][j-2] : 0;
            dp[i][j] = max(arr[i]+min(x,y), arr[j]+min(y,z));
        }
    }
    return dp[0][n-1];
}

int main()
{
    int arr[] = {8,15,3,7};
    int n = sizeof(arr)/sizeof(arr[0]);
    //memset(memo, -1, sizeof(memo));
    cout<<optimal(arr, n);
    return 0;
}
