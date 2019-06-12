#include<bits/stdc++.h>
using namespace std;

int CoinChange(int a[], int n, int k){
    int t[k+1];
    memset(t, 0, sizeof(t));
    t[0] = 1;
    for(int i=0;i<n;i++){
        for(int j=a[i];j<=k;j++){
            t[j]+=t[j-a[i]];
        }
    }
    return t[k];
}

int main()
 {
	//code
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    int a[n];
	    for(int i=0;i<n;i++)
	        cin>>a[i];
	    int k;
	    cin>>k;
	    cout<<CoinChange(a, n, k)<<endl;
	}
	return 0;
}