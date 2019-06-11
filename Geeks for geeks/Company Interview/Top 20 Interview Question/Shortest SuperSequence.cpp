#include <bits/stdc++.h>

using namespace std;
//This is recursice Approach
//Time Complexity O(2^min(m,n))
/*
int superSeq(char X[], char Y[], int n, int m){
    if(m==0){
        return n;
    }else if(n==0){
        return m;
    }else if(X[n-1] == Y[m-1]){
        return 1+superSeq(X, Y, n-1, m-1);
    }else{
        return 1+min(superSeq(X, Y, n-1, m), superSeq(X, Y, n, m-1));
    }
}
*/

//This is dynamic approach
//Time Complexity O(n^2)

int LCS(char X[], char Y[], int n, int m){
    int t[n+1][m+1];
    for(int i=0;i<=n;i++){
        for(int j=0;j<=m;j++){
            if(i==0 || j==0){
                t[i][j] =0;
            }else if(X[i-1] == Y[j-1]){
                t[i][j] = 1+t[i-1][j-1];
            }else{
                t[i][j] = max(t[i-1][j], t[i][j-1]);
            }
        }
    }
    return t[n][m];
}

int superSeq(char X[], char Y[], int n, int m){

    int lcs = LCS(X, Y, n, m);
    return n+m-lcs;
}

int main()
{
    char X[] = "AGGTAB";
    char Y[] = "GXTXAYB";
    cout << "Length of the shortest supersequence is "
        << superSeq(X, Y, strlen(X), strlen(Y));
    return 0;
}
