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
	    int a[n],b[n];
	    for(int i=0;i<n;i++){
	       cin>>a[i];
	       b[i]=a[i];
	    }
	    for(int i=0;i<n;i++){
	        a[b[i]-1] = i+1;
	    }
        for(int i=0;i<n;i++){
            cout<<a[i]<<" ";
        }
        cout<<endl;
	}
	return 0;
}