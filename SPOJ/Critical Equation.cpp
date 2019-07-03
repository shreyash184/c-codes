#include <bits/stdc++.h>
#define ll long long
using namespace std;

ll int gcd(ll int a, ll int b){
	return (b==0) ? a : gcd(b, a%b);
}

int main() {
	// your code goes here
	ll int t,g;
	cin>>t;
	for(ll int i=1;i<=t;i++){
		ll int a,b,c;
		cin>>a>>b>>c;
        g = gcd(a,b);
		if(c%g==0)
			cout<<"Case "<<i<<": Yes\n";
		else
			cout<<"Case "<<i<<": No\n";
	}
	return 0;
}
