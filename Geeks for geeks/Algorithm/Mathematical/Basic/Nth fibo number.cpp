#include<bits/stdc++.h>
using namespace std;

long long int fibo(int n){
    long long int f[n+2];
    f[0]=1;
    f[1]=1;
    for(long long int i=2;i<=n;i++){
        f[i]=(f[i-1]+f[i-2])%1000000007;
    }
    return f[n];
}

int main()
 {
	//code
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    cout<<fibo(n-1)<<endl;
	}
	return 0;
}