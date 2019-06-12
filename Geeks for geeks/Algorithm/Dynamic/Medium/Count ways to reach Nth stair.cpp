#include<bits/stdc++.h>
#define ll long long
#define mod 1000000007
using namespace std;

ll int fibo(int x, ll int n){
    ll int f[x+2];
    f[0]=1;
    f[1]=1;
    for(ll int i=2;i<x;i++){
        f[i]=(f[i-1]+f[i-2])%mod;
    }
    return f[n]%mod;
}

int main()
 {
	//code
	ll int f[100000+2];
    f[0]=1;
    f[1]=1;
    for(ll int i=2;i<=100000;i++){
        f[i]=(f[i-1]+f[i-2])%mod;
    }
	ll int t;
	cin>>t;
	while(t--){
	    ll int n;
	    cin>>n;
	    cout<<f[n]<<endl;
	}
	return 0;
}