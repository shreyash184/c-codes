#include<bits/stdc++.h>
using namespace std;

int count(int n){
    int c[n+3];
    c[0]=1;
    c[1]=2;
    c[2]=4;
    for(int i=3;i<=n;i++){
        c[i]=c[i-1]+c[i-2]+c[i-3];
    }
    return c[n];
}

int main()
 {
	//code
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    cout<<count(n-1)<<endl;
	}
	return 0;
}