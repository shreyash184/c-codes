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
	    int x = n/2;
	    int sum=0,sum1=0;
	    for(int i=0;i<x;i++)
	        sum+=a[i];
	    for(int i=x;i<n;i++)
	        sum1+=a[i];
	    cout<<sum*sum1<<endl;
	}
	return 0;
}