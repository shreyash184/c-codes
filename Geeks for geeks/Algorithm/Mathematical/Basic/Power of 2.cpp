#include<bits/stdc++.h>
using namespace std;
int main()
 {
	//code
	int t;
	cin>>t;
	while(t--){
	    long long int n;
	    cin>>n;
	    if(n==0){
	        cout<<"NO"<<endl;
	        return 0;
	    }
	    double x = log2(n);
	    if(floor(x)==ceil(x)){
	        cout<<"YES"<<endl;
	    }else{
	        cout<<"NO"<<endl;
	    }
	}
	return 0;
}