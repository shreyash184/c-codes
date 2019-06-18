{
#include <bits/stdc++.h>
using namespace std;
 
int subsequenceCount(string S, string T);
//  Driver code to check above method
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		string s;
		string tt;
		cin>>s;
		cin>>tt;
		
		cout<<subsequenceCount(s,tt)<<endl;
		
		
	}
  
}
}
/*This is a function problem.You only need to complete the function given below*/
/*You are required to complete this method*/
int subsequenceCount(string S, string T)
{
  //Your code here
  int n = S.length();
  int m = T.length();
  int dp[n+1][m+1];
  for(int j=1;j<=m;j++){
      dp[0][j] = 0;
  }
  for(int i=0;i<=n;i++){
      dp[i][0] = 1;
  }
  for(int i=1;i<=n;i++){
      for(int j=1;j<=m;j++){
          if(S[i-1]==T[j-1]){
            dp[i][j] = dp[i-1][j]+dp[i-1][j-1];
          }else{
              dp[i][j] = dp[i-1][j];
          }
      }
  }
//Uncomment to print the Table
//   for(int i=0;i<=n;i++){
//       for(int j=0;j<=m;j++){
//           cout<<dp[i][j]<<" ";
//       }
//       cout<<endl;
//   }
  return dp[n][m];
}
 
