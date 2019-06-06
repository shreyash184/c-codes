#include<bits/stdc++.h>
using namespace std;

int score(int n){
    int t[n+1],i;
    for(int j = 0;j<=n;j++){
        t[j] = 0;
    }
    t[0]=1;
    for(i=3;i<=n;i++){
        t[i]+=t[i-3];
    }
    for(i=5;i<=n;i++){
        t[i]+=t[i-5];
    }
    for(i=10;i<=n;i++){
        t[i]+=t[i-10];
    }
    return t[n];
}
//can be solved using 2 dimentional array try onces.
int main()
 {
	//code
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    cout<<score(n)<<endl;
	}
	return 0;
}