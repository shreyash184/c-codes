#include<bits/stdc++.h>
using namespace std;

int LCS(string s1, string s2, int n, int m){
    int t[n+1][m+1];
    for(int i=0;i<=n;i++){
        for(int j=0;j<=m;j++){
            if(i==0 || j==0){
                t[i][j] = 0;
            }else if(s1[i-1] == s2[j-1]){
                t[i][j] = 1+t[i-1][j-1];
            }else{
                t[i][j] = max(t[i-1][j], t[i][j-1]);
            }
        }
    }
    return t[n][m];
}

int superSeq(string s1, string s2, int n, int m){
    int lcs = LCS(s1, s2, n, m);
    return n+m-lcs;
}

int main()
 {
	//code
	int t;
	cin>>t;
	while(t--){
	    string s1;
	    string s2;
	    cin>>s1>>s2;
	    int n = s1.length();
	    int m = s2.length();
	    cout<<superSeq(s1, s2, n, m)<<endl;
	}
	return 0;
}