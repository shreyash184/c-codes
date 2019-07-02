#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
 {
	//code
	long long t;cin>>t;
    while(t--){
	long long a,b,k;cin>>a>>b>>k;
	long long p = pow(a,b);
	long long count =0;
	while(p>0 && count<k){
	    long long rem = p%10;
	    count++;
	    if(count==k){
	        cout<<rem<<endl;break;
	    }
	    p/=10;
	}
    }	
	return 0;
}