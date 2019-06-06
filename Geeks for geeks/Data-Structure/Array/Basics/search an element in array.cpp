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
	    int arr[n];
	    for(int i=0;i<n;i++){
	        cin>>arr[i];
	    }
	    int x,y;
	    cin>>x;
	    for(int i=0;i<n;i++){
	        if(x == arr[i]){
	            y=i;
	            break;
	        }else{
	            y = -1;
	        }
	    }
	    cout<<y<<endl;
	}
	return 0;
}