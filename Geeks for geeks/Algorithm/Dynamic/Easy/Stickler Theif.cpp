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
	    int a[n];
	    for(int i=0;i<n;i++){
	        cin>>a[i];
	    }
	    int incl = a[0];
	    int excl = 0;
	    int x;
	    for(int i=1;i<n;i++){
	        x = max(incl, excl);
	        incl = excl+a[i];
	        excl = x;
	    }
	    cout<<max(incl, excl)<<endl;
	}
	return 0;
}