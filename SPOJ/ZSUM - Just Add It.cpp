#include <iostream>
#define mod 10000007
#define ll long long
using namespace std;

ll int binpow(ll int a, int ll b){
	ll int res = 1;
	while(b>0){
		if(b%2){
			res = (res*a)%mod;
		}
		a = (a*a)%mod;
		b=b>>1;
	}
	return res;
}

int main() {
	ll int n,k;
	while(1){
        cin>>n>>k;
		if(n==0 && k==0)
            return 0;
        else{
            ll int s1,s2,s3,s4;
            s1 = (2*binpow(n-1,n-1))%mod;
            s2 = (2*binpow(n-1,k))%mod;
            s3 = binpow(n,n);
            s4 = binpow(n,k);
            ll int total = (s1+s2+s3+s4)%mod;
            cout<<total<<endl;
        }
	}
}

