#include<bits/stdc++.h>
using namespace std;
int main()
 {
	//code
	int t;
	cin>>t;
	while(t--){
	    int n,i,j;
	    cin>>n;
	    int a[n];
	    for(int i=0;i<n;i++)
	        cin>>a[i];
	        
	    int L[n],R[n];
	    
	    L[0] = a[0];
	    for(i=1;i<n;i++)
	        L[i] = min(a[i], L[i-1]);
	        
	    R[n-1] = a[n-1];
	    for(j=n-2;j>=0;j--)
	        R[j] = max(a[j], R[j+1]);
	        
	    i=0,j=0;int maxDiff=0;
	    while(i<n && j<n){
	        if(L[i] <= R[j]){
	            maxDiff = max(maxDiff, j-i);
	            j++;
	        }else{
	            i++;
	        }
	    }
	    cout<<maxDiff<<endl;
	}
	return 0;
}