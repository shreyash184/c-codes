#include<bits/stdc++.h>
using namespace std;

int count(int n, int m){
    int t[n+1][m+1];
    t[0][0] = 0;
    for(int i = 1;i<=n;i++){
        t[i][1] = 1;
    }
    for(int j=1;j<=m;j++){
        t[0][j] = 0;
    }
    for(int i=1;i<=n;i++){
        t[i][0] = 0;
    }
    for(int i = 1;i<=n;i++){
        for(int j = 2;j<=m;j++){
            t[i][j] = t[i-1][j]+t[i][j-1];
        }
    }
    return t[n][m];
}

int main()
 {
	//code
	int t;
	cin>>t;
	while(t--){
	    int n,m;
	    cin>>n>>m;
	    cout<<count(n,m)<<endl;
	}
	return 0;
}