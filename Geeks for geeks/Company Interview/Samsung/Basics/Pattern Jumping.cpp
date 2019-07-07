#include<bits/stdc++.h>
using namespace std;
int main()
 {
	//code
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    if(n==1)cout<<"True"<<endl;
	    else {
	        float x = log2(n);
	        if(floor(x)==ceil(x)){
	            cout<<"True"<<endl;
	        }else{
	            cout<<"False"<<endl;
	        }
	    }
	}
	return 0;
}