#include<bits/stdc++.h>
using namespace std;
int main()
 {
	//this to fast input output which will not give TLE
	ios_base::sync_with_stdio(false); 
    cin.tie(NULL); 
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    int arr[n];
	    for(int i=0;i<n;i++){
	        cin>>arr[i];
	    }
	    int x;
	    cin>>x;
	    sort(arr, arr+n);
	    cout<<arr[x-1]<<endl;
	}
	return 0;
}