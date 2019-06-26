#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
 {
	//code
	ll int t;
	cin>>t;
	while(t--){
	    ll int n;
	    cin>>n;
	    ll int a[n];
	    for(ll int i=0;i<n;i++){
	        cin>>a[i];
	    }
	    stack<ll int> s;
	    ll int ans[n];
	    for(ll int i=n-1;i>=0;i--){
	        while(!s.empty() && a[i]>=s.top()){
	            s.pop();
	        }
	        if(s.empty()){
	            ans[i] = -1;;
	        }else{
	            ans[i] = s.top();
	        }
	        s.push(a[i]);
	    }
	    for(ll int i=0;i<n;i++)
	        cout<<ans[i]<<" ";
	    cout<<endl;
	}
	return 0;
}