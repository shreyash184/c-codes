#include<bits/stdc++.h>
#include <boost/multiprecision/cpp_int.hpp> 
using namespace boost::multiprecision;


using namespace std;
//This is using Dynamic Programming
// ll int count(int n){
//     ll int dp[10][n+1];
//     memset(dp, 0, sizeof(dp));
//     for(ll int i=0;i<10;i++)
//         dp[i][1] = 1;
//     for(ll int i=0;i<10;i++){
//         for(ll int j=2;j<=n;j++){
//             for(ll int x=0;x<=i;x++)
//                 dp[i][j]+=dp[x][j-1];
//         }
//     }
//     ll int c=0;
//     for(ll int i=0;i<10;i++)
//         c+=dp[i][n];
//     return c;
// }

int128_t count(int n) 
{ 
    int N = 10; 
  
    // Compute value of N*(N+1)/2*(N+2)/3* ....*(N+n-1)/n 
    int128_t c = 1; 
    for (int i=1; i<=n; i++) 
    { 
        c *= (N+i-1); 
        c /= i; 
    } 
  
    return c; 
} 

int main()
 {
	//code
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    cout<<count(n)<<endl;
	}
	return 0;
}