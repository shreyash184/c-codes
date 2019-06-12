#include<bits/stdc++.h>
#define ll long long
#define mod 1000000007
using namespace std;

ll int count(ll int n, ll int m){
    ll int t[n+1][m+1];
    for(ll int i=0;i<=n;i++){
        for(ll int j=0;j<=m;j++){
            if(i == 0 || j == 0){
                t[i][j] = 0;
            }else if(i==1 || j==1){
                t[i][j] = 1;
            }else{
                t[i][j] = (t[i-1][j]+t[i][j-1])%mod;
            }
        }
    }
    return (t[n][m])%mod;
}

int main()
 {
	//code
	ll int t;
	cin>>t;
	while(t--){
	    ll int n,m;
	    cin>>n>>m;
	    cout<<count(n,m)<<endl;
	}
	return 0;
}