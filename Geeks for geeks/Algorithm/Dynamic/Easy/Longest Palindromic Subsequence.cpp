#include<bits/stdc++.h>
using namespace std;

int LPS(string s, int n){
    int t[n][n];
    for(int i=0;i<n;i++){
        t[i][i] = 1;
    }
    int j,c,i;
    for(c=2;c<=n;c++){
        for(i=0;i<n-c+1;i++){
            j = i+c-1;  
            if(c==2 && s[i]==s[j]){
                t[i][j] = 2;
            }else if(s[i] == s[j]){
                t[i][j] = t[i+1][j-1]+2;
            }else{
                t[i][j] = max(t[i][j-1], t[i+1][j]);
            }
        }
    }
    return t[0][n-1];
}

int main()
 {
	//code
	int t;
	cin>>t;
	while(t--){
	    string s;
	    cin>>s;
	    int n = s.length();
	    cout<<LPS(s, n)<<endl;
	}
	return 0;
}