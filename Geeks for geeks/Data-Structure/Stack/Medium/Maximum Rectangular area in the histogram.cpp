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
	    ll int area = 0;
	    ll int maxArea = -1;
	    stack<int>s;
	    s.push(0);
	    ll int i=1;
	    while(i<n){
	        if(s.empty() || a[s.top()] < a[i]){
	            s.push(i++);
	        }else{
	            ll int tp = s.top();
	            s.pop();
	            if(s.empty()){
	                area = a[tp] * i;
	            }else{
	                area = a[tp]*(i-1-s.top());
	            }
	            maxArea = max(maxArea, area);
	        }
	    }
	    while(!s.empty()){
	        ll int t = s.top();
	        s.pop();
	        if(s.empty())
	            area = a[t]*i;
	        else
	            area = a[t]*(i-1-s.top());
	        maxArea = max(maxArea, area);
	    }
	    cout<<maxArea<<endl;
	}
	return 0;
}