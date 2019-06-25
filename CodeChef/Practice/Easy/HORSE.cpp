#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
	// your code goes here
	ios_base::sync_with_stdio(false); 
    cin.tie(NULL); 
	ll int t;
	cin>>t;
	while(t--){
	    ll int n;
	    cin>>n;
	    ll int a[n];
	    for(ll int i=0;i<n;i++)
	        cin>>a[i];
	   if(n==0){
	        cout<<0<<endl;
	        return 0;
	    }
	    sort(a, a+n);
	    int min = abs(a[0]-a[1]);
	    for(int i=0;i<n-1;i++){
	        if(abs(a[i+1]-a[i])<min)
	            min = abs(a[i+1]-a[i]);
	    }
	    
	    cout<<min<<endl;
	}
	return 0;
}
