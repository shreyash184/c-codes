#include<bits/stdc++.h>
using namespace std;

long long int lucas(long long int n){
    long long int l[n+2];
    l[0]=2;
    l[1]=1;
    for(long long int i=2;i<=n;i++){
        l[i]=(l[i-1]+l[i-2])%1000000007;
    }
    return l[n];
}

int main()
 {
	//code
	int t;
	cin>>t;
	while(t--){
	    long long int n;
	    cin>>n;
	    cout<<lucas(n)<<endl;
	}
	return 0;
}