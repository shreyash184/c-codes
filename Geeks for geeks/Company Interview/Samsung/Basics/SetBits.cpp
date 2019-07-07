#include<bits/stdc++.h>
using namespace std;
int main()
 {
	//code
	int t;
	cin>>t;
	while(t--){
	    int n,count=0;
	    cin>>n;
	    while(n!=0){
	        count+=n&1;
	        n>>=1;
	    }
	    cout<<count<<endl;
	}
	return 0;
}