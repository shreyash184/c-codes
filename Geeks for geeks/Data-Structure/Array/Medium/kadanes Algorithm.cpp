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
	    for(int i=0;i<n;i++){
	        cin>>a[i];
	    }
	    int current = a[0];
	    int maxSum = a[0];
	    for(int i=1;i<n;i++){
	        current = max(current+a[i], a[i]);
	        maxSum = max(maxSum, current);
	    }
	    cout<<maxSum<<endl;
    }
	return 0;
}