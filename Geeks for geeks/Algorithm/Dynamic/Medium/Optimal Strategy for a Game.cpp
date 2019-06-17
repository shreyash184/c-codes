#include<bits/stdc++.h>
#define MAX 100
using namespace std;
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
	//code
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    int a[n];
	    for(int i=0;i<n;i++)
	        cin>>a[i];
	    cout<<optimal(a, n)<<endl;;
	}
	return 0;
}