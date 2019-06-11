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
	    unordered_map<int,int>m;
	    for(int i =0 ;i<n;i++){
	        cin>>a[i];
	        m[a[i]]++;
	    }
	    cout<<m[0]<<endl;
	}
	return 0;
}