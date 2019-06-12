#include<bits/stdc++.h>
using namespace std;

int EditDistance(char a[], char b[], int n, int m){
    int t[n+1][m+1];
    for(int i=0;i<=n;i++){
        for(int j=0;j<=m;j++){
            if(i==0){
                t[i][j] = j;
            }else if(j==0){
                t[i][j] = i;
            }else if(a[i-1] == b[j-1]){
                t[i][j] = t[i-1][j-1];
            }else{
                t[i][j] = 1+min(t[i-1][j], min(t[i][j-1], t[i-1][j-1]));
            }
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
	    char a[n],b[m];
	    for(int i=0;i<n;i++)
	        cin>>a[i];
	    for(int i=0;i<m;i++)
	        cin>>b[i];
	   cout<<EditDistance(a, b, n, m)<<endl;
	}
	return 0;
}