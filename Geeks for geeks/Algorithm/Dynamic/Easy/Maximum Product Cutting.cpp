#include<bits/stdc++.h>
#define ll long long
#define mod 1000000007
using namespace std;

ll int Max(ll int n){
    if(n==0 || n==1){
	    return 0;
    }else if(n==2 || n==3){
        return n-1;
    }else{
        ll int res = 1;
        while(n>4){
            n-=3;
            res=(res*3)%mod;
        }
        return (n*res)%mod;
    }
}

int main()
 {
	//code
	ll int t;
	cin>>t;
	while(t--){
	    ll int n;
	    cin>>n;
	    cout<<Max(n)<<endl;
	}
	return 0;
}