#include<bits/stdc++.h>
using namespace std;
int main()
 {
	//code
	int t;
	cin>>t;
	while(t--){
	    int a,b;
	    cin>>a>>b;
	    int setbit = a^b;
	   // cout<<setbit<<endl;
	    int count = 0;
	    while(setbit){
	        count+=setbit&1;
	        setbit>>=1;
	    }
	    cout<<count<<endl;
	}
	return 0;
}