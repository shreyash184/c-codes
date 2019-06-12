#include<bits/stdc++.h>
#define ll long long
using namespace std;

ll int fibo(ll int n){
    ll int f[n+2];
    f[0]=1;
    f[1]=1;
    for(ll int i=2;i<=n;i++){
        f[i]=f[i-1]+f[i-2];
    }
    return f[n];
}

int main()
 {
	//code
	ll int t;
	cin>>t;
	while(t--){
	    ll int n;
	    cin>>n;
	    cout<<fibo(n)<<endl;
	}
	return 0;
}