#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
 {
	//code
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
	ll int t;
	cin>>t;
	while(t--){
	    ll int n;
	    cin>>n;
	    ll int a[n];
	    for(ll int i=0;i<n;i++){
            cin>>a[i];
	    }
	    ll int ans = 0;
	    int x = 0;
        for(ll int i=0;i<n;i++){
            x=a[i];
            for(ll int j=i+1;j<n;j++){
                x=x^a[j];
                if(x==0)ans += j-i;
            }
        }
        cout<<ans<<endl;
	}
	return 0;
}
