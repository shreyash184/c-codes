#include<bits/stdc++.h>
#define mod 1003
using namespace std;
int main()
 {
	//code
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    string s;
	    cin>>s;
	    string symb="", oper="";
	    for(int i=0;i<n;i++){
	        if(s[i]=='T' || s[i]=='F'){
	            symb+=s[i];
	        }else{
	            oper+=s[i];
	        }
	    }
	    n=symb.length();
	    int F[n][n], T[n][n]; 
  
    // Fill diaginal entries first 
    // All diagonal entries in T[i][i] are 1 if symbol[i] 
    // is T (true).  Similarly, all F[i][i] entries are 1 if 
    // symbol[i] is F (False) 
    for (int i = 0; i < n; i++) 
    { 
        F[i][i] = (symb[i] == 'F')? 1: 0; 
        T[i][i] = (symb[i] == 'T')? 1: 0; 
    } 
  
    // Now fill T[i][i+1], T[i][i+2], T[i][i+3]... in order 
    // And F[i][i+1], F[i][i+2], F[i][i+3]... in order 
    for (int gap=1; gap<n; ++gap) 
    { 
        for (int i=0, j=gap; j<n; ++i, ++j) 
        { 
            T[i][j] = F[i][j] = 0; 
            for (int g=0; g<gap; g++) 
            { 
                // Find place of parenthesization using current value 
                // of gap 
                int k = i + g; 
  
                // Store Total[i][k] and Total[k+1][j] 
                int tik = T[i][k] + F[i][k]; 
                int tkj = T[k+1][j] + F[k+1][j]; 
  
                // Follow the recursive formulas according to the current 
                // operator 
                if (oper[k] == '&') 
                { 
                    T[i][j] += (T[i][k]*T[k+1][j])%mod; 
                    F[i][j] += (tik*tkj - T[i][k]*T[k+1][j])%mod; 
                } 
                if (oper[k] == '|') 
                { 
                    F[i][j] += (F[i][k]*F[k+1][j])%mod; 
                    T[i][j] += (tik*tkj - F[i][k]*F[k+1][j])%mod; 
                } 
                if (oper[k] == '^') 
                { 
                    T[i][j] += (F[i][k]*T[k+1][j] + T[i][k]*F[k+1][j])%mod; 
                    F[i][j] += (T[i][k]*T[k+1][j] + F[i][k]*F[k+1][j])%mod; 
                } 
            } 
        } 
    }
    cout<<T[0][n-1]%mod<<endl;;
	}
	return 0;
}