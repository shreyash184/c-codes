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
	    int repeatedSum = 0;
	    for(int i=0;i<n;i++){
	        cin>>a[i];
	        repeatedSum+=a[i];
	    }
	    int repeating;
	    for(int i=0;i<n;i++){
	        if(a[abs(a[i])-1] > 0)
	            a[abs(a[i])-1] = -a[abs(a[i])-1];
	        else
	            {
	                cout<<abs(a[i])<<" ";
	            }
	    }
	    for(int i=0;i<n;i++){
	        if(a[i]>0)
	            cout<<i+1<<endl;
	    }
	}
	return 0;
}