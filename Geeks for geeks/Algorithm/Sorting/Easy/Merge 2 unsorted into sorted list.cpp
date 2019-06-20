#include<bits/stdc++.h>
using namespace std;
int main()
 {
	//code
	int t;
	cin>>t;
	while(t--){
	    int n,m;
	    cin>>n>>m;
	    int a[n], b[m];
	    for(int i=0;i<n;i++){
	        cin>>a[i];
	    }
	    for(int i=0;i<m;i++)
	        cin>>b[i];
	    sort(a, a+n);
	    sort(b, b+m);
	    int c[n+m];
	    int i=0;
	    int j=0;
	    int k=0;
	    while(i<n && j<m){
	        if(a[i]<b[j])
	            c[k++] = a[i++];
	        else
	            c[k++] = b[j++];
	    }
	    while(i<n)
	        c[k++] = a[i++];
	    while(j<m)
	        c[k++] = b[j++];
	    for(int z=0;z<n+m;z++)
	        cout<<c[z]<<" ";
	    cout<<endl;
	}
	return 0;
}