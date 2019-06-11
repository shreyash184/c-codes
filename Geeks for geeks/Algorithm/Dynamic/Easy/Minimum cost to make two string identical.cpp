#include<bits/stdc++.h>
using namespace std;
int LCS(string X, string Y, int m, int n){
    int L[m+1][n+1];
     for (int i=0; i<=m; i++)
    {
        for (int j=0; j<=n; j++)
        {
            if (i == 0 || j == 0)
                L[i][j] = 0;

            else if (X[i-1] == Y[j-1])
                L[i][j] = L[i-1][j-1] + 1;

            else
                L[i][j] = max(L[i-1][j], L[i][j-1]);
        }
    }
    return L[m][n];
}
int main()
 {
	//code
	int t;
	cin>>t;
	while(t--){
	    int n,m;
	    cin>>n>>m;
	    string s,s1;
	        cin>>s;
	        cin>>s1;
        int lcs = LCS(s,s1,s.length(), s1.length());
        cout<<(n*(s.length()-lcs))+(m*(s1.length()-lcs))<<endl;
	}
	return 0;
}