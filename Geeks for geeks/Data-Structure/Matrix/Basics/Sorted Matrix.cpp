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
	    int arr[n][n];
	    int a[n];
	    int k=0;
	    for(int i=0;i<n;i++){
	        for(int j=0;j<n;j++){
	            cin>>arr[i][j];
	            a[k]=arr[i][j];
	            k++;
	        }
	    }
	    sort(a, a+(n*n));
	    for(int i=0;i<(n*n);i++){
	        cout<<a[i]<<" ";
	    }
	    cout<<endl;
	}
	return 0;
}