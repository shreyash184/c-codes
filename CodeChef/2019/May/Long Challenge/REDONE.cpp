#include <bits/stdc++.h>
using namespace std;
int main() {
	// your code goes here
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
	int T;
	cin>>T;
	vector<long long int>t(1000001);
    t[0] = 1;
    for(long long int i=1;i<1000001;i++){
        t[i]=(t[i-1]*i)%1000000007;
    }
	while(T--){
	    long long int n;
	    cin>>n;
	    cout<<(t[n+1]-1)%1000000007<<endl;
	}
	return 0;
}
