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
	    int incl = a[0];
	    int excl = 0;
	    for(int i=1;i<n;i++){
	        int x = a[i]+min(incl, excl);
	        excl = incl;
	        incl = x;
	    }
	    cout<<min(incl, excl)<<endl;
	}
	return 0;
}