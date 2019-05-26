#include<bits/stdc++.h>
using namespace std;
void fibo(long long int n){
    long long int f[n+3];
    f[0]=1;
    f[1]=1;
    f[2]=1;
    
        for(long long int i=3;i<=n;i++){
            f[i]=f[i-2]+f[i-3];
        }
    cout<<f[n]%1000000007;
}
int main()
 {
	//code
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    fibo(n);
	    cout<<endl;
	}
	return 0;
}