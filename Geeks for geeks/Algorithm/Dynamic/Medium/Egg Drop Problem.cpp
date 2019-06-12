#include<bits/stdc++.h>
using namespace std;

int eggDrop(int n, int k){
    int t[n+1][k+1];
    int res;
    // We need one trial for one floor and0 trials for 0 floors
    for(int i = 1;i<=n;i++){
        t[i][1] = 1;
        t[i][0] = 0;
    }
    // We always need j trials for one egg and j floors.
    for(int i=1;i<=k;i++){
        t[1][i] = i;
    }

    for(int i=2;i<=n;i++){
        for(int j = 2;j<=k;j++){
            t[i][j] = INT_MAX;
            for(int x=1;x<=j;x++){
                res = max(t[i-1][x-1], t[i][j-x]);
                if(res < t[i][j]){
                    t[i][j] = 1+res;
                }
            }
        }
    }
    return t[n][k];
}

int main()
 {
	//code
	int t;
	cin>>t;
	while(t--){
	    int n,m;
	    cin>>n>>m;
	    cout<<eggDrop(n,m)<<endl;
	}
	return 0;
}