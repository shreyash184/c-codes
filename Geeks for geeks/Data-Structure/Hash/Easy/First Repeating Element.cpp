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
	    for(int i=0;i<n;i++){
	        cin>>a[i];
	    }
	    set<int>s;
	    int min=-1;
	    for(int i=n-1;i>=0;i--){
	        if(s.find(a[i])!=s.end())
	            min=i;
	        else
	            s.insert(a[i]);
	    }
	    if(min==-1){
	        cout<<"-1"<<endl;
	    }else{
	        cout<<min+1<<endl;
	    }
	}
	return 0;
}