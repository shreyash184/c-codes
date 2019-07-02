#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
 {
	//code
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	ll int t;
	cin>>t;
	while(t--){
	    ll int n;
	    ll int res = 0;
	    cin>>n;
	    ll int a[n];
	    for(ll int i=0;i<n;i++)
	        cin>>a[i];
	    priority_queue<ll int, vector<ll int>, greater<ll int>>pq(a, a+n);
	    while(pq.size() > 1){
	        ll int first = pq.top();
	        pq.pop();
	        ll int second = pq.top();
	        pq.pop();
	        res+=first+second;
	        pq.push(first+second);
	    }
	    cout<<res<<endl;
	}
	return 0;
}