#include<bits/stdc++.h>
using namespace std;
int main()
 {
	//code
	ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    int a[n];
	    for(int i=0;i<n;i++)
	        cin>>a[i];
	    sort(a, a+n);
	    for(int i=0;i<n;i++)
	        cout<<a[i]<<" ";
	   cout<<endl;
	}
	return 0;
}

//Efficient Solution
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
	    for(int i=0;i<n;i++){
	        if(a[i]==0){
	            cout<<a[i]<<" ";
	        }
	    }
	    for(int i=0;i<n;i++){
	        if(a[i]==1){
	            cout<<a[i]<<" ";
	        }
	    }
	    for(int i=0;i<n;i++){
	        if(a[i]==2){
	            cout<<a[i]<<" ";
	        }
	    }
	   cout<<endl;
	}
	return 0;
}