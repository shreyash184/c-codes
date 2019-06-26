#include<bits/stdc++.h>
using namespace std;
int main()
 {
	//code
	int t;
	cin>>t;
	while(t--){
	    int n,m;
	    cin>>n>>m;
	    int a[n+1][m+1];
	    for(int i=1;i<=n;i++){
	        for(int j=1;j<=m;j++){
	            cin>>a[i][j];
	        }
	    }
	    int n1,n2,m1,m2;
	    int sum=0;
	    cin>>n1>>n2>>m1>>m2;
	    for(int i=n1;i<=m1;i++){
	        for(int j=n2;j<=m2;j++){
	            sum+=a[i][j];
	        }
	    }
	    cout<<sum<<endl;
	}
	return 0;
}