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
	    int a[n];
	    for(int i=0;i<n;i++)
	        cin>>a[i];
	   int sum;
	   int count = 0;
	   for(int i=0;i<n-1;i++){
	       for(int j=i+1;j<n;j++){
	           sum=a[i]+a[j];
	           if(sum%4==0){
	               count++;
	           }
	       }
	   }
	   cout<<count<<endl;
	}
	return 0;
}