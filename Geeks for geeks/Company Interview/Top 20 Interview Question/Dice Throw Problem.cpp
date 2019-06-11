#include <bits/stdc++.h>

using namespace std;

//For this problem recursive solution is also to difficult to code.
//Hence we directly move to the Dynamic Approach
//Time Complexity O(mnx)

//where m = Faces
//where n = no of dice
//where X = Sum

int findWays(int m, int n, int x){
    int t[n+1][x+1];
    memset(t, 0, sizeof(t));
    for(int i=1;i<=m && i<=n;i++){
        t[1][i] = 1;
    }
    for(int i=2;i<=n;i++){
        for(int j=1;j<=x;j++){
            for(int k=1; k<=m && k<j;k++){
                t[i][j]+=t[i-1][j-k];
            }
        }
    }
    return t[n][x];
}

// One more efficient way is their 
//Time Complexity O(n*x)


int main()
{
    cout << findWays(4, 2, 1) << endl;
    cout << findWays(2, 2, 3) << endl;
    cout << findWays(6, 3, 8) << endl;
    cout << findWays(4, 2, 5) << endl;
    cout << findWays(4, 3, 5) << endl;
    return 0;
}
