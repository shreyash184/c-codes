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
	    int x;
	    cin>>x;
	    int found;
	    for(int i=0;i<n;i++){
	        if(x==a[i]){
	            found = i;
	            break;
	        }else{
	            found=-1;
	        }
	    }
	    cout<<found<<endl;
	}
	return 0;
}