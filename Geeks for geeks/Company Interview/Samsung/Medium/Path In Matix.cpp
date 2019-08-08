#include<bits/stdc++.h>
using namespace std;

// int Longest(int a[][1000], int dp[][1000], int i, int j, int n){
//     if(i<0 || i>n-1 || j<0 || j>n-1)return 0;
//     if(dp[i][j]!=-1)return 0;
//     int x, y, z;
//     if(i == (n-1) && j == (n-1)){
//         return dp[i][j] = dp[i][j];
//     }
//     if(j == (n-1)){
//         if(i<n-1 && a[i][j]+a[i+1][j] > a[i+1][j] ){
//             x = a[i][j]+a[i+1][j]+Longest(a, dp, i+1, j, n);
//         }
//         if(i<n-1 && j>0 && a[i][j]+a[i+1][j-1] > a[i+1][j-1]){
//             y = a[i][j]+a[i+1][j-1]+Longest(a, dp, i+1, j-1, n);
//         }
//         return dp[i][j] = max(x,y);
//     }
//     if(i == (n-1)){
//         return dp[i][j] = 0;
//     }
//     if(i<n-1 && a[i][j]+a[i+1][j] > a[i+1][j] ){
//         x = a[i][j]+a[i+1][j]+Longest(a, dp, i+1, j, n);
//     }
//     if(i<n-1 && j>0 && a[i][j]+a[i+1][j-1] > a[i+1][j-1]){
//         y = a[i][j]+a[i+1][j-1]+Longest(a, dp, i+1, j-1, n);
//     }
//     if(i<n-1 && j<n-1 && a[i][j]+a[i+1][j+1] > a[i+1][j+1]){
//         z = a[i][j]+a[i+1][j+1]+Longest(a, dp, i+1, j+1, n);
//     }
//     return dp[i][j] = max(x, max(y, z));
// }

int main()
 {
	//code
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    int a[1000][1000];
	    for(int i=0;i<n;i++){
	        for(int j=0;j<n;j++){
	            cin>>a[i][j];
	        }
	    }
	    int result = INT_MIN;
	    int dp[1000][1000];
	    memset(dp, -1, sizeof(dp));
	    for(int i=0;i<n;i++){
	        dp[n-1][i] = a[n-1][i];
	    }
	    for(int i=n-2;i>=0;i--){
	        for(int j=0;j<n;j++){
	            if(i==0 && j==0){
	                dp[i][j] = a[i][j]+max(dp[i+1][j], dp[i+1][j+1]);
	            }else if(j==n-1){
	                dp[i][j] = a[i][j]+max(dp[i+1][j], dp[i+1][j-1]);
	            }
	            else{
	                dp[i][j] = a[i][j]+max(dp[i+1][j], max(dp[i+1][j-1], dp[i+1][j+1]));
	            }
	            result = max(result, dp[i][j]);
	        }
	    }
	   // for(int i=0;i<n;i++){
	   //     for(int j=0;j<n;j++){
	   //         cout<<dp[i][j]<<" ";
	   //     }
	   //     cout<<endl;
	   // }
	    cout<<result<<endl;
	}
	return 0;
}