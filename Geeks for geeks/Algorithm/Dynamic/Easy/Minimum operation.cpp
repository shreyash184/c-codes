#include <bits/stdc++.h>
using namespace std;
int main()
 {
	//code
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    int count=0;
	    while(n!=0){
	        if(n%2==0){
	            count+=1;
	            n=n/2;
	        }else{
	            count+=1;
	            n=n-1;
	        }
	    }
	    cout<<count<<endl;
	}
	return 0;
}