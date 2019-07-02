#include <bits/stdc++.h>
using namespace std;

long long int binpow(long long int a, long long int b, int m){
	a%=m;
	long long int res = 1;
	while(b>0){
		if(b & 1)
			res = res * a%m;
		a = a*a%m;
		b >>=1;
	}
	return res;
}

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
		long long int a,b;
		cin>>a>>b;
		cout<<binpow(a,b,10)<<endl;
	}
	return 0;
}