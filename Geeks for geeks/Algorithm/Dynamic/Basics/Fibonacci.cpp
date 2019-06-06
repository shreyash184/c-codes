#include<bits/stdc++.h>
using namespace std;
void fibo(long long int n){
    long long int f[n+2];
    f[0]=1;
    f[1]=1;
    if(n == 1){
        cout<<f[0]<<" ";
    }else{
        cout<<f[0]<<" "<<f[1]<<" ";
        for(long long int i=2;i<n;i++){
            f[i]=f[i-1]+f[i-2];
            cout<<f[i]<<" ";
        }
    }
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