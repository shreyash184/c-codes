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
	    sort(a, a+n);
	    int prod = 0;
	    for(int i=0;i<n;i++){
	        prod+=i*a[i];
	    }
	    cout<<prod<<endl;
	}
	return 0;
}