#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
 {
	//code
	int t;
	cin>>t;
	while(t--){
	    int n,m;
	    cin>>n>>m;
	    ll int sum = 0;
	    int x = min(n,m);
	    while(x--){
	        sum+=n*m;
	        n--;
	        m--;
	    }
	    cout<<sum<<endl;
	}
	return 0;
}