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
	    int bitDiff = 0;
	    for(int i=0;i<n;i++){
	        for(int j=0;j<n;j++){
	            int x = a[i]^a[j];
	            bitDiff += __builtin_popcount(x);
	        }
	    }
	    cout<<bitDiff<<endl;
	}
	return 0;
}