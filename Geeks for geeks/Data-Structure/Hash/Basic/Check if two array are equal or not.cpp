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
	    ll int a[n],b[n];
	    for(ll int i=0;i<n;i++){
	        cin>>a[i];
	    }
	    set<ll int>s;
	    for(ll int i=0;i<n;i++){
	        cin>>b[i];
	        s.insert(b[i]);
	    }
	    ll int flag=0;
	    for(ll int i=0;i<n;i++){
	        if(s.find(a[i])!=s.end()){
	            flag=1;
	        }else{
	            flag=0;
	            break;
	        }
	    }
	    if(flag==1)
	        cout<<1<<endl;
	    else
	        cout<<0<<endl;
	}
	return 0;
}