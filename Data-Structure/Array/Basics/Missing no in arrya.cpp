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
	    int arr[n-1];
	    int sum=0;
	    for(int i=0;i<n-1;i++){
	        cin>>arr[i];
	        sum+=arr[i];
	    }
	    int sum1 = (n*(n+1))/2;
	    cout<<sum1-sum<<endl;
	    
	}
	return 0;
}