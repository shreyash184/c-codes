#include<bits/stdc++.h>
using namespace std;
int main()
 {
	//code
	int t;
	cin>>t;
	while(t--){
	    int n,k;
	    cin>>n>>k;
	    int arr[n];
	    unordered_map<int, int>map;
	    for(int i=0;i<n;i++){
	        cin>>arr[i];
	        map[arr[i]]++;
	    }
	    int f=0;
	    for(int i=0;i<n;i++){
	        if(map[arr[i]] == k){
	            cout<<arr[i]<<endl;
	            f=1;
	            break;
	        }
	    }
	    if(!f){
	        cout<<"-1"<<endl;
	    }
	    
	}
	return 0;
}